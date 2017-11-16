//
//  main.cpp
//  Tries - Contacts
//
//  Created by Stewart Dulaney on 11/15/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>

using namespace std;
const int NUM_CHARACTERS = 26;

class Node {
    Node* children[NUM_CHARACTERS];
    int size = 0;
    
public:
    int getCharIndex(char c){
        return c - 'a';
    }
    Node* getNode(char c){
        return children[getCharIndex(c)];
    }
    void setNode(char c, Node* node){
        children[getCharIndex(c)] = node;
    }
    void add(string s, int index){
        size++;
        if(index == s.length())
            return;
        char current = s[index];
        Node* child = getNode(current);
        if(child == NULL){
            child = new Node();
            setNode(current, child);
        }
        child->add(s, index + 1);
    }
    int findCount(string s, int index){
        if(index == s.length())
            return size;
        Node* child = getNode(s[index]);
        if(child == NULL)
            return 0;
        return child->findCount(s, index + 1);
    }
};


int main(){
    int n;
    cin >> n;
    Node* root = new Node();
    for(int a0 = 0; a0 < n; a0++){
        string op;
        string contact;
        cin >> op >> contact;
        if(op == "add")
            root->add(contact, 0);
        else if(op == "find")
            cout << root->findCount(contact, 0) << endl;
    }
    return 0;
}
