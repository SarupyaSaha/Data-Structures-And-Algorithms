#include <iostream>
#include "BST.h"

using namespace std;

int main() {
    BST tree;

    tree.insertHelper(50);
    tree.insertHelper(30);
    tree.insertHelper(70);
    tree.insertHelper(20);
    tree.insertHelper(40);
    tree.deleteHelper(30);


    cout << "Preorder: ";
    tree.preOrder(tree.root);

    cout << "\nInorder: ";
    tree.inOrder(tree.root);

    cout << "\nPostorder: ";
    tree.postOrder(tree.root);

    cout<<endl;

    cout<<tree.searchHelper(30);

    if (tree.searchHelper(40)==true) {
        cout<<"Found";
    }
    else {
        cout<<"Not found";
    }


    return 0;
}