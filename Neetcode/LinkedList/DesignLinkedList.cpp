//
// Created by tayssir on 7/28/25.
//
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int x) {
        this -> val = x;
        this -> next = nullptr;
    }
};
class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;
    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index >= size || index < 0) { return -1; }
        Node* p = head;
        for (int i=0; i < index; i++) {
            p = p->next;
        }
        return p->val;
    }

    void addAtHead(int val) {
        Node* n = new Node(val);
        n->next = head;
        if (size == 0) {
            tail = n;
            size++;
        }

    }

    void addAtTail(int val) {
        Node* n = new Node(val);
        if (tail == nullptr) {
            head = tail = n;
        }
        else {
            tail->next = n;
            tail = n;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if (size == 0 ) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }
        Node* p = head;
        Node* newNode = new Node(val);
        for (int i=0; i < index - 1; i++) {
            p = p->next;
        }
        newNode->next = p->next;
        p->next = newNode;
        size++;

    }

    void deleteAtIndex(int index) {
        if (index < 0 || index > size) return;
        if (size == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
            if (size == 0) {
                tail = nullptr;
            }
            return;
        }
        Node* p = head;
        for (int i=0; i < index; i++) {
            p = p->next;
        }
        Node* toDelete = p->next;
        p->next = toDelete->next;
        if (toDelete == tail) tail = p;
        delete toDelete;
        size--;
    }
};