#ifndef _TREE_NODE_H_
#define _TREE_NODE_H_

#define COUNT 10

typedef struct treeNode {
	int valor;
	struct treeNode* nDir;
	struct treeNode* nEsq;
} TREE_NODE;

typedef TREE_NODE* PNODE;

PNODE constructor(int value);
PNODE addNode(PNODE root, PNODE node);
PNODE deleteNode(PNODE root, int value);
PNODE searchNode(PNODE root, int value);
int countNodes(PNODE root);
void printPreOrder(PNODE root);
void print2DTree(PNODE root, int space);

#endif
