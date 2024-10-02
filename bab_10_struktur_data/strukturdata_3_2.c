#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHILDREN 10 // Jumlah maksimum anak yang dapat ditambahkan pada setiap simpul

// Definisi struktur TreeNode
typedef struct TreeNode {
    char name[100];
    struct TreeNode* children[MAX_CHILDREN];
    int num_children;
} TreeNode;

// Fungsi untuk membuat simpul baru
TreeNode* createTreeNode(const char* name) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    strcpy(node->name, name);
    node->num_children = 0;
    return node;
}

// Fungsi untuk menambahkan anak pada simpul
void addChild(TreeNode* parent, TreeNode* child) {
    if (parent->num_children < MAX_CHILDREN) {
        parent->children[parent->num_children++] = child;
    } else {
        printf("Maximum number of children reached for node %s\n", parent->name);
    }
}

// Fungsi untuk mengonversi pohon ke format JSON
void treeToJson(TreeNode* node, FILE* file, int depth) {
    if (node == NULL) return;
    for (int i = 0; i < depth; ++i) {
        fprintf(file, "    "); // Menambahkan indentasi sesuai kedalaman
    }
    fprintf(file, "{\n");
    for (int i = 0; i < depth + 1; ++i) {
        fprintf(file, "    ");
    }
    fprintf(file, "\"name\": \"%s\"", node->name);
    if (node->num_children > 0) {
        fprintf(file, ",\n");
        for (int i = 0; i < depth + 1; ++i) {
            fprintf(file, "    ");
        }
        fprintf(file, "\"children\": [\n");
        for (int i = 0; i < node->num_children; ++i) {
            treeToJson(node->children[i], file, depth + 2);
            if (i < node->num_children - 1) {
                fprintf(file, ",");
            }
            fprintf(file, "\n");
        }
        for (int i = 0; i < depth + 1; ++i) {
            fprintf(file, "    ");
        }
        fprintf(file, "]");
    }
    fprintf(file, "}");
}

int main() {
    // Membuat struktur pohon keluarga
    TreeNode* nabi = createTreeNode("Nabi Muhammad SAW");
    TreeNode* putra1 = createTreeNode("Sayyidina al-Qasim bin Muhammad SAW");
    TreeNode* putra2 = createTreeNode("Sayyidah Zainab binti Muhammad SAW");
    TreeNode* putra3 = createTreeNode("Sayyidah Ruqayyah bin Muhammad SAW");
    TreeNode* putra4 = createTreeNode("Sayyidah Ummu Kultsum binti Muhammad SAW");
    TreeNode* putra5 = createTreeNode("Sayyidah Fatimah az-Zahra binti Muhammad SAW");
    TreeNode* putra6 = createTreeNode("Sayyidina Abdullah bin Muhammad SAW");
    TreeNode* putra7 = createTreeNode("Sayyidina Ibrahim bin Muhammad SAW");
    TreeNode* cucu1 = createTreeNode("Ali bin Abdul Ash");
    TreeNode* cucu2 = createTreeNode("Umamah binti Abdul Ash");
    TreeNode* cucu3 = createTreeNode("Abdullah bin Utsman bin Affan");
    TreeNode* cucu4 = createTreeNode("Hasan bin Ali bin Abi Thalib");
    TreeNode* cucu5 = createTreeNode("Husain bin Ali bin Abi Thalib");
    TreeNode* cucu6 = createTreeNode("Muhsin bin Ali bin Abi Thalib");
    TreeNode* cucu7 = createTreeNode("Zainab binti Ali bin Abi Thalib");
    TreeNode* cucu8 = createTreeNode("Ummu Kultsum binti Ali bin Abi Thalib");
    addChild(nabi, putra1);
    addChild(nabi, putra2);
    addChild(nabi, putra3);
    addChild(nabi, putra4);
    addChild(nabi, putra5);
    addChild(nabi, putra6);
    addChild(nabi, putra7);
    addChild(putra2, cucu1);
    addChild(putra2, cucu2);
    addChild(putra3, cucu3);
    addChild(putra5, cucu4);
    addChild(putra5, cucu5);
    addChild(putra5, cucu6);
    addChild(putra5, cucu7);
    addChild(putra5, cucu8);

    // Membuka file untuk menulis
    FILE* file = fopen("family_tree.json", "w");
    if (file == NULL) {
        perror("Failed to open file");
        return EXIT_FAILURE;
    }

    // Mengonversi pohon keluarga ke format JSON
    fprintf(file, "{\n");
    treeToJson(nabi, file, 1);
    fprintf(file, "\n}");

    // Menutup file
    fclose(file);

    printf("Berhasil menulis file family_tree.json.\n");

    return EXIT_SUCCESS;
}
