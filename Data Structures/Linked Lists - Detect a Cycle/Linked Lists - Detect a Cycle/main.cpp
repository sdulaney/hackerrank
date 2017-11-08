//
//  main.cpp
//  Linked Lists - Detect a Cycle
//
//  Created by Stewart Dulaney on 11/7/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>

/*
 Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.
 
 A Node is defined as:
 struct Node {
 int data;
 struct Node* next;
 }
 */

struct Node {
    int data;
    struct Node* next;
};

bool has_cycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
