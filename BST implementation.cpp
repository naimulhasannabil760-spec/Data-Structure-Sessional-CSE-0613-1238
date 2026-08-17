#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BST
{
private:
    Node* root;

    Node* insert(Node* root, int value)
    {
        if (root == NULL)
        {
            return new Node(value);
        }

        if (value < root->data)
        {
            root->left = insert(root->left, value);
        }
        else if (value > root->data)
        {
            root->right = insert(root->right, value);
        }

        return root;
    }

    bool search(Node* root, int value)
    {
        if (root == NULL)
            return false;

        if (root->data == value)
            return true;

        if (value < root->data)
            return search(root->left, value);

        return search(root->right, value);
    }

    void inorder(Node* root)
    {
        if (root == NULL)
            return;

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

public:
    BST()
    {
        root = NULL;
    }

    void insert(int value)
    {
        root = insert(root, value);
    }

    bool search(int value)
    {
        return search(root, value);
    }

    void inorder()
    {
        inorder(root);
    }
};

int main()
{
    BST tree;

    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        tree.insert(value);
    }

    cout << "Inorder traversal: ";
    tree.inorder();

    int target;

    cout << "\nEnter value to search: ";
    cin >> target;

    if (tree.search(target))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
