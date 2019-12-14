#include <stdlib.h>
#include "splay.c"

int main(){
	struct tree *root = TREE_EMPTY;
	treeInsert(&root, 1);
	treeInsert(&root, 3);
	treeDestroy(&root);
	treeInsert(&root, 1);
	return 0;
}
