#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for insertion in left node of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for insertion in right node of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void level_order_traversal(node *root)
{
    queue<node*>q;
    q.push(root);

    while()
}


int main()
{
    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    return 0;
}