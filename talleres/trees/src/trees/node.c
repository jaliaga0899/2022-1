#include "node.h"

Node* node_create(int value){
    Node* node = (Node*)calloc(1, sizeof(Node));
    node->value = value;
    return node;
}

void insert_node(Node* root, Node* node){
    Node* current_node = root;
    bool is_inserted = false;
    while(!is_inserted){
        if (current_node->value > node->value){
            if (current_node->left_child) {
                current_node = current_node->left_child;
            } else {
                current_node->left_child = node;
                is_inserted = true;
            }
        } else {
            if (current_node->right_child) {
                current_node = current_node->right_child;
            } else {
                current_node->right_child = node;
                is_inserted = true;
            }
        }
    }
}

void print_tree(Node* root){
    printf("%d ", root->value);
    if (root->left_child){ print_tree(root->left_child); }
    if (root->right_child){ print_tree(root->right_child); }
}