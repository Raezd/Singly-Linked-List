#include "pch.h"
#include <iostream>

using namespace std;

SinglyLinkedList::SinglyLinkedList() {


//  ============
//  Constructors
//  ============

//      ============================
//      Constructor SinglyLinkedList
//      ============================

        ConstructorBanner();

        first = last = nullptr;


        } // Constructor SinglyLinkedList
//      ==================================



//  ================
//  End Constructors
//  ================


//  ===========
//  Destructors
//  ===========

//      ===========================
//      Destructor SinglyLinkedList
//      ===========================

        SinglyLinkedList::~SinglyLinkedList() {

            DestructorBanner();
            DestroyList();


        } // Destructor SinglyLinkedList
//      ================================

//  ===============
//  End Destructors
//  ===============


//  ==================
//  Public M-Functions
//  ==================
// 
//      =============================
//      Public M-Function DestroyList
//      =============================

        void SinglyLinkedList::DestroyList() {

            Node* temp;

            while (first != nullptr) {

                temp = first;
                first = first->next;
                delete temp;

            } // while

            last = nullptr;

        } // Public M-Function DestroyList
//      ==================================

//      =====================================
//      Public M-Function GetFirst (Accessor)
//      =====================================

        Node* SinglyLinkedList::GetFirst() {

            return first;

        } // Public M-Function GetFirst
//      ===============================

//      ================================
//      Public M-Function InitializeList
//      ================================

        void SinglyLinkedList::InitializeList() {

            DestroyList();

        } // Public M-Function InitializeList
//      =====================================

//      =============================
//      Public M-Function InsertFirst
//      =============================

        void SinglyLinkedList::InsertFirst(int value) {

            Node* newNode = new Node(value, first);

            first = newNode;

            if (last == nullptr)
                last = first;

        } // Public M-Function InsertFirst
//      ==================================

//      ============================
//      Public M-Function InsertLast
//      ============================

        void SinglyLinkedList::InsertLast(int value) {

            if (this->Empty()) {

                this->InsertFirst(value);

            } // if

            else {

                Node* newNodePtr = new Node(value, nullptr);

                last->next = newNodePtr;
                last = newNodePtr;

            } // else

        } // Public M-Function InsertLast
//      =================================


//      ========================
//      Public M-Function Insert
//      ========================

        void SinglyLinkedList::Insert(int value, int location) {

            int nodeCounter;
            Node* ptr;

            if ( (location > this->Length() + 1) || (location < 1) ) {

                cout << endl;
                cout << "========================" << endl;
                cout << "Insert Function invoked." << endl;
                cout << "Insertion location is invalid." << endl;
                cout << "Terminating execution..." << endl;
                cout << "========================" << endl;
                cout << endl;

            } // then

            else {

                if (location == 1)
                    this->InsertFirst(value);

                else if (location == this->Length() + 1)
                    this->InsertLast(value);

                else {

                    nodeCounter = 1;
                    ptr = this->first;

                    while (nodeCounter < location - 1) {

                        ptr = ptr->next;
                        nodeCounter++;

                    } // while



                    Node* newNode = new Node(value, ptr->next);

                    ptr->next = newNode;

                } // nested else

            } // else

        } // Public M-Function Insert
//      =============================

//      =======================
//      Publuc M-Function Empty
//      =======================

        bool SinglyLinkedList::Empty() {

            return (first == nullptr);

        } // Public M-Function Empty
//      ============================

//      ========================
//      Public M-Function Length
//      ========================
       
        int SinglyLinkedList::Length() {

            int nbNodes = 0;
            Node* ptr;

            ptr = this->first;

            while (ptr != nullptr) {

                ptr = ptr->next;
                nbNodes++;

            } // while

            return nbNodes;

        } // Public M-Function Length
//      =============================


//      =======================
//      Publuc M-Function Print
//      =======================

        void SinglyLinkedList::Print() {

            Node* current;

            cout << endl;
            cout << "===========================" << endl;
            cout << "The list contains the following data:" << endl;
            cout << endl;

            if (this->Length() == 0) {

                cout << "The list is empty." << endl;
                cout << "==================" << endl;


            } // then

            else {

                cout << "==============" << endl;
                cout << "  Beginning..." << endl;
                cout << "==============" << endl;
                
                current = first;

                while (current != nullptr) {

                    cout << "    " << current->info << endl;
                    
                    current = current->next;

                } // while

                cout << "===========" << endl;
                cout << "  Ending..." << endl;
                cout << "===========" << endl;
                cout << endl;

            } // else

        } // Public M-Function Print
//      ============================



//      ==============================
//      Publuc M-Function ReversePrint
//      ==============================

        void SinglyLinkedList::ReversePrint(Node* currentNode) {

            
            if (currentNode != nullptr) {

                ReversePrint(currentNode->next);

                cout << currentNode->info << endl;

            } // then

        } // Public M-Function ReversePrint
//      ===================================

//      =============================
//      Public M-Function DeleteFirst
//      =============================
// 
        void SinglyLinkedList::DeleteFirst() {



            if (this->Empty()) {

                return;

            } // then

            Node* temp = first;

            first = first->next;

            delete temp;

            return;
                


        } // Public M-Function DeleteFirst
//      ==================================
//      
//      ========================
//      Public M-Function Delete
//      ========================

        void SinglyLinkedList::Delete(int location) {

            if ((location > this->Length() + 1) || (location < 1)) {

                cout << endl;
                cout << "========================" << endl;
                cout << "Delete Function invoked." << endl;
                cout << "Deletion location is invalid." << endl;
                cout << "Terminating execution..." << endl;
                cout << "========================" << endl;
                cout << endl;

            } // then

            else {

                if (location == 1)
                    this->DeleteFirst();

                else if (location == this->Length() + 1)
                    this->DeleteLast();

                else {

                    Node* temp = first;

                    if (location == 1) {

                        first = temp->next;

                        //free(temp); // can also deallocate
                        delete temp;

                        return;

                    } // then

                    for (int ii = 1; temp != nullptr && ii < location - 1; ii++) {

                        temp = temp->next;

                    } // for

                    if (temp == nullptr || temp->next == nullptr) {

                        return;

                    } // then

                    Node* next = temp->next->next;

                    //free(temp->next); can also deallocate
                    delete temp->next;

                    temp->next = next;

                } // nested else

            } // outer else

        } // Public M-Function Delete
//      =============================


//      =============================
//      Public M-Function DeleteLast
//      ============================

        void SinglyLinkedList::DeleteLast() {


            Node* previous = nullptr;
            Node* temp = first;

            while (temp->next != nullptr) {

                previous = temp;
                temp = temp->next;

            } // while

            delete temp;

            previous->next = nullptr;

            return;


        } // Public M-Function DeleteLast
//      =================================

// 
// 
//  =====================
//  End Public M-Function
//  =====================


//  ========================
//  Private Member Functions
//  ========================


//      ====================================
//      Private M-Function ConstructorBanner
//      ====================================

        void SinglyLinkedList::ConstructorBanner() {

            cout << endl;
            cout << "=======================================" << endl;
            cout << "SinglyLinkedList constructor invoked..." << endl;
            cout << "=======================================" << endl;
            cout << endl;

        } // Private M-Function ConstructorBanner
//      =========================================


//      ===================================
//      Private M-Function DestructorBanner
//      ===================================

        void SinglyLinkedList::DestructorBanner() {

            cout << endl;
            cout << "=======================================" << endl;
            cout << "SinglyLinkedList destructor invoked..." << endl;
            cout << "=======================================" << endl;
            cout << endl;

        } // Private M-Function DestructorBanner
//      ========================================
