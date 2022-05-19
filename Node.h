#pragma once




//  ============
    class Node {

//      ==============================
        friend class SinglyLinkedList;
//      ==============================

//      =======
        public: 
//      =======

//          ======================
//          Constructor Prototypes
//          ======================

            Node(void);

            Node(int, Node*);

//          ===================
//          End of Constructors
//          ====================


//          =====================
//          Destructor Prototypes
//          =====================

            ~Node(void);

//          ==================
//          End of Destructors
//          ==================

//          ==========
//          End public
//          ==========

//      ========
        private:
//      ========

//          ==========================
//          Member-Function Prototypes
//          ==========================

            void ConstructorBanner();
            void DestructorBanner();

//          ====================
//          End Member-Functions
//          ====================

//          Member Variables
//          ================

            int info;
            Node* next;

//         ====================
//         End Member Variables
//         ====================

//        ===========
//        end private
//        ===========


    }; // Class Node
//  ================
