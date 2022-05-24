// Project 3 (SLL).cpp : This file contains the 'main' function. Program execution begins and ends there.
// Singly Linked List

#include <iostream>
#include "pch.h"


using namespace std;


//  ============
    int main() {

        Menu menu;

        SinglyLinkedList listA;

        do {

            menu.Display();
            menu.QueryUser();
            menu.ProcessCommand(listA);


        } while (menu.Continue() );

        return 0;

    } // Function main
//  ==================

