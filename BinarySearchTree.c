// Student Name: Vivek Ray
// Student ID: 240872


#include <stdio.h>
#include <stdlib.h>

struct BSTNode 
{
    int data;
    struct BSTNode* left;
    struct BSTNode* right;
};

struct BSTNode* insert(struct BSTNode* root, int value) 
{
    if (root == NULL) 
    {
        struct BSTNode* newNode = (struct BSTNode*)malloc(sizeof(struct BSTNode));
        newNode->data = value;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}

void inorder(struct BSTNode* root, int* A, int* index) 
{
    if (root == NULL) return;
    inorder(root->left, A, index);
    A[(*index)++] = root->data;
    inorder(root->right, A, index);
}

void arrays(int* A, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bstsort(int* A, int n) 
{
    struct BSTNode* root = NULL;

    for (int i = 0; i < n; i++) 
    {
        root = insert(root, A[i]);
    }

    int index = 0;
    inorder(root, A, &index);
}

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &A[i]);
    }

    printf("INP: ");
    arrays(A, n);

    bstsort(A, n);

    printf("BST: ");
    arrays(A, n);

    return 0;
}
