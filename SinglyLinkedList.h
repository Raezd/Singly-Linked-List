#pragma once



//  ========================
    class SinglyLinkedList {

//      =======
        public:
//      =======

//          ============
//          Constructors
//          ============

            SinglyLinkedList(void);

//          ================
//          End Constructors        
//          ================

//          ===========
//          Destructors
//          ===========

            ~SinglyLinkedList(void);

//          ===============
//          End Destructors        
 //         ===============
            
//          ==========================
//          Member-Function Prototypes
//          ==========================

            void DestroyList();
            Node* GetFirst();
            void InitializeList();
            void InsertFirst(int);
            void InsertLast(int);
            void Insert(int, int);
            bool Empty();
            int Length();
            void Print();
            void ReversePrint(Node*);

//          =======================
//          End Function Prototypes
//          =======================


//      ==========
//      end public
//      ==========

//      ========
        private:
//      ========

//          ================
//          Member variables
//          ================

            Node* first;
            Node* last;

//          ===========

//          ===================
//          Private M-Functions
//          ===================

            void ConstructorBanner();
            void DestructorBanner();

//         =========================


    }; // Class SinglyLinkedList
//  ============================

