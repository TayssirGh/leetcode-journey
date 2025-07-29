//
// Created by tayssir on 7/29/25.
//
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    string url;
    Node* next;
    Node* prev;

    Node(string x) {
        this -> url = x;
        this -> next = nullptr;
        this -> prev = nullptr;
    }
};
class BrowserHistory {
private:
    Node* curr;
public:
    BrowserHistory(const string &homepage) {
        curr = new Node(homepage);
    }

    void visit(const string &url) {
        curr -> next = new Node(url);
        curr -> next -> prev = curr;
        curr = curr -> next;
    }

    string back(int steps) {
        while (curr ->prev && steps-- > 0) {
            curr = curr->prev;
        }
        return curr -> url;
    }

    string forward(int steps) {
        while (curr -> next && steps-- > 0) {
            curr = curr -> next;
        }
        return curr -> url;
    }
};
