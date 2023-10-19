/*
 * test.cpp
 *
 *  Created on: 5 сент. 2023 г.
 *      Author: User
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insertNode(Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
        return root;
    }
    else if (data <= root->data) {
        root->left = insertNode(root->left, data);
    }
    else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

bool searchNode(Node* root, int data) {
    if (root == NULL) {
        return false;
    }
    else if (root->data == data) {
        return true;
    }
    else if (data <= root->data) {
        return searchNode(root->left, data);
    }
    else {
        return searchNode(root->right, data);
    }
}


void printTree(Node* root) {
    if (root == NULL) {
        return;
    }
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}

int main() {
    Node* root = NULL;
    root = insertNode(root, 10);
    root = insertNode(root, 5);
    root = insertNode(root, 15);
    root = insertNode(root, 8);
    root = insertNode(root, 3);
    printTree(root);
   cout <<endl;

       if (searchNode(root, 8)) {
           cout <<"Number "<< 8<<"- Found" << endl;
       }
       else {
           cout << "Not Found" << endl;
       }

       if (searchNode(root, 20)) {
           cout <<"Number 20 Found" << endl;
       }
       else {
           cout << "Number 20 - Not Found" << endl;
       }


    return 0;
}




