//
// Created by Sarupya on 4/8/2026.
//

#ifndef BINARYSEARCHTREE_BST_H
#define BINARYSEARCHTREE_BST_H

#include <iostream>
#include"Node.h"

using namespace std;
class BST {
public:
    Node* root;
    BST() {
        root=nullptr;

    }

    Node* getNode(int item) {
        Node* newNode= new Node();
        newNode->data=item;
        newNode->left=nullptr;
        newNode->right=nullptr;
        return newNode;


    }
    void preOrder(Node* temp) {
        if (temp==nullptr) {
            return;
        }
        cout<<temp->data<<",";
        preOrder(temp->left);
        preOrder(temp->right);
    }
    void inOrder(Node* temp) {
        if (temp==nullptr) {
            return;
        }
        inOrder(temp->left);
        cout<<temp->data<<",";
        inOrder(temp->right);

    }
    void postOrder(Node* temp) {
        if (temp==nullptr) {
            return;
        }
        postOrder(temp->left);
        postOrder(temp->right);
        cout<<temp->data<<",";
    }


    Node* insertRecursive(Node* temp, int item) {
        if (temp == nullptr) {
            temp=getNode(item);
            return temp;

        }
        else if (item<temp->data) {
            temp->left=insertRecursive(temp->left, item);

        }
        else if (item>temp->data) {
            temp->right=insertRecursive(temp->right, item);

        }
        return temp;
    }
    void insertHelper(int item) {

        root=insertRecursive(root,item);
    }


    Node* deleteRecursive(Node* temp, int item) {
        if (temp==nullptr) {
            return nullptr;

        }
        else if (item<temp->data) {
            temp->left=deleteRecursive(temp->left, item);

        }
        else if (item>temp->data) {
            temp->right=deleteRecursive(temp->right, item);

        }
        else {
            if (temp->left==nullptr && temp->right==nullptr) {
                delete temp;
                return nullptr;
            }
           else if (temp->left==nullptr) {
                return temp->right;
            }
            else if (temp->right==nullptr) {
                return temp->left;
            }
            int successorValue=minimum(temp->right);
            temp->data=successorValue;
            temp->right=deleteRecursive(temp->right, successorValue);

        }
        return temp;
    }

    void deleteHelper(int item) {

        root=deleteRecursive(root,item);

    }
    int minimum(Node* temp) {
        int min=temp->data;
        while (temp->left!=nullptr) {
            temp=temp->left;
            min=temp->data;
        }
        return min;
    }
    bool searchRecursive(Node* temp, int item) {
        bool found =false;
        if (temp==nullptr) {
            return false;
        }
        else if (item<temp->data) {
            found=searchRecursive(temp->left, item);
        }
        else if (item>temp->data) {
            found=searchRecursive(temp->right, item);
        }
        else {
            found=true;
        }
        return found;
    }
    bool searchHelper(int item) {
        return searchRecursive(root,item);
    }



};
#endif //BINARYSEARCHTREE_BST_H
