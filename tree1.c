#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* root = NULL;

// Create Node
struct node* create(int x) {
    struct node* nn = (struct node*)malloc(sizeof(struct node));
    nn->data = x;
    nn->left = nn->right = NULL;
    return nn;
}

// Insert
struct node* insert(struct node* root, int x) {
    if (root == NULL)
        return create(x);

    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);

    return root;
}

// Find Min
struct node* findMin(struct node* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

// Delete
struct node* deleteNode(struct node* root, int x) {
    if (root == NULL)
        return NULL;

    if (x < root->data)
        root->left = deleteNode(root->left, x);
    else if (x > root->data)
        root->right = deleteNode(root->right, x);
    else {
        // Case 1: No child
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        // Case 2: One child
        else if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        // Case 3: Two children
        else {
            struct node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

// Search
void search(struct node* root, int x) {
    if (root == NULL) {
        printf("Not Found\n");
        return;
    }

    if (x == root->data)
        printf("Found\n");
    else if (x < root->data)
        search(root->left, x);
    else
        search(root->right, x);
}

// Inorder
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Main
int main() {
    int ch, x;

    while (1) {
        printf("\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &x);
                root = insert(root, x);
                break;

            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &x);
                root = deleteNode(root, x);
                break;

            case 3:
                printf("Enter value to search: ");
                scanf("%d", &x);
                search(root, x);
                break;

            case 4:
                printf("Inorder Traversal: ");
                inorder(root);
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}
