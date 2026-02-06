#include <stdlib.h>
#include <iostream>
using namespace std;

class node 
{
public:
    int data;
    node *lchild;
    node *rchild;
};

class bst :public node
{
    int item;
    node *root;

public:
    bst();
    void insert_node();
    void delete_node();
    void display_bst();
    void inorder(node *);
};

bst::bst()
{
    root = NULL;
}

void bst::insert_node()
{
    node *new_node, *curr, *prev;
    new_node = new node;

    cout << "Enter data into new node";
    cin >> item;

    new_node->data = item;
    new_node->lchild = NULL;
    new_node->rchild = NULL;

    if (root == NULL)
        root = new_node;
    else
    {
        curr = prev = root;

        while (curr != NULL)
        {
            if (new_node->data > curr->data)
            {
                prev = curr;
                curr = curr->rchild;
            }
            else
            {
                prev = curr;
                curr = curr->lchild;
            }
        }
        cout << "Prev:" << prev->data << endl;

        if (prev->data > new_node->data)
            prev->lchild = new_node;
        else
            prev->rchild = new_node;
    }
}

// code to delete a node 
void bst::delete_node()
{
    if (root == NULL)
        cout << "Tree is Empty";
    else
    {
        int key;
        cout << "Enter the key value to be deleted";
        cin >> key;

        node *temp, *parent, *succ_parent;
        temp = root;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                // deleting node with two children 
                if (temp->lchild != NULL && temp->rchild != NULL)
                {
                    // search for inorder successor 
                    node *temp_succ;
                    temp_succ = temp->rchild;

                    while (temp_succ->lchild != NULL)
                    {
                        succ_parent = temp_succ;
                        temp_succ = temp_succ->lchild;
                    }

                    temp->data = temp_succ->data;
                    succ_parent->lchild = NULL;

                    cout << "Deleted sucess fully";
                    return;
                }

                // deleting a node having one left child 
                if (temp->lchild != NULL & temp->rchild == NULL)
                {
                    if (parent->lchild == temp)
                        parent->lchild = temp->lchild;
                    else
                        parent->rchild = temp->lchild;

                    temp = NULL;
                    delete (temp);

                    cout << "Deleted sucess fully";
                    return;
                }

                // deleting a node having one right child 
                if (temp->lchild == NULL & temp->rchild != NULL)
                {
                    if (parent->lchild == temp)
                        parent->lchild = temp->rchild;
                    else
                        parent->rchild = temp->rchild;

                    temp = NULL;
                    delete (temp);

                    cout << "Deleted sucess fully";
                    return;
                }

                // deleting a node having no child 
                if (temp->lchild == NULL & temp->rchild == NULL)
                {
                    if (parent->lchild == temp)
                        parent->lchild = NULL;
                    else
                        parent->rchild = NULL;

                    temp = NULL;
                    delete (temp);

                    cout << "Deleted sucess fully";
                    return;
                }
            }
            else if (temp->data < key)
            {
                parent = temp;
                temp = temp->rchild;
            }
            else if (temp->data > key)
            {
                parent = temp;
                temp = temp->lchild;
            }
        } // end while
    }     // end if
}         // end delete function

void bst::display_bst()
{
    if (root == NULL)
        cout << "\nBST Under Flow";
    else
        inorder(root);
}

void bst::inorder(node *t)
{
    if (t != NULL)
    {
        inorder(t->lchild);
        cout << " " << t->data;
        inorder(t->rchild);
    }
}

int main()
{
    bst bt;
    int i;

    while (1)
    {
        cout << "****BST Operations****";
        cout << "\n1.Insert\n2.Display\n3.del\n4.exit\n";
        cout << "Enter Choice:";
        cin >> i;

        switch (i)
        {
        case 1:
            bt.insert_node();
            break;

        case 2:
            bt.display_bst();
            break;

        case 3:
            bt.delete_node();
            break;

        case 4:
            exit(0);

        default:
            cout << "Enter correct choice";
        }
    }
}
