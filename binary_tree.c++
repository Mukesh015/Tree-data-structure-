#include <iostream>
typedef struct list
{
    int data;
    struct list *left, *right;
} ls;
ls *root = NULL;
ls *creation()
{
    char choice;
    int item;
    ls *newnode;
    newnode = new ls;
    std::cout << "Enter data\t" << std::endl;
    std::cin >>item;
    newnode->data=item;
    std::cout << "Enter 'y' for new node and 'n' for no node " << std::endl;
    std::cin >> choice;
    if (choice == 'n')
    {
        return 0;
    }
    else
    {
        std::cout << "Enter left child of " << item << "\t";
        newnode->left = creation();
        std::cout << "Enter right child of " << item << "\t";
        newnode->right = creation(); 
    }
    return root;
}

int main()
{
    root = creation();
    return 0;
}