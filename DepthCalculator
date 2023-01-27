//Да се напише програма, която намира дълбочината на дадено двоично дърво.

#include <stdio.h>
#include <stdlib.h>

/* Възел на двоично дърво има данни(променливи), указател към ляво дете
   и указател към дясно дете */
//node - разклонение, възел

//depth: from root to node BACKWARDS
//height: from node to leaf UPWARDS

struct node {
    int data;
    struct node* left;
    struct node* right;
};

/* Изчислете "Depth" на дърво - броя на
    възли по най-дългия път от коренния възел
    надолу до най-отдалечения листов възел.*/

int DepthCalc(struct node* node)
{
    if (node == NULL)
        return 0;
    else {
        /* compute the depth of each subtree */
        int lDepth = DepthCalc(node->left);
        int rDepth = DepthCalc(node->right);

        /* use the larger one */
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}

/* Помощна функция, която разпределя нов възел с
   дадени данни и NULL леви и десни указатели. */
struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

int main()
{
    struct node* root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    //root->left->left->left = newNode(6);
    /*
    Как изглежда:

            1
           / \
         2    3
        / \
       4  5

     */

    printf("Depth of the tree is %d", DepthCalc(root));
    return 0;
}
