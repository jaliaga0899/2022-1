#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, char *argv[])
{
    FILE* input_file = fopen(argv[1], "r");

    int nodes_count;
    fscanf(input_file, "%d", &nodes_count);

    Node* root;
    Node* actual_node;
    int value;
    fscanf(input_file, "%d", &value);
    root = node_create(value);

    for (int i=1; i<nodes_count; i++)
    {
        fscanf(input_file, "%d", &value);
        actual_node = node_create(value);
        insert_node(root, actual_node);
    }
    print_tree(root);

    fclose(input_file);
    return 0;
}