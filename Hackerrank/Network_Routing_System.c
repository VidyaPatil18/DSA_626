#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    int n, i, value, newRouter;
    struct Node* root = NULL;

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input");
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (scanf("%d", &value) != 1 || value == -1) {
            printf("Invalid input");
            return 0;
        }
        root = insert(root, value);
    }

    if (scanf("%d", &newRouter) != 1 || newRouter == -1) {
        printf("Invalid input");
        return 0;
    }

    root = insert(root, newRouter);

    inorder(root);
    printf("\n");  // Important for judge

    return 0;
}
