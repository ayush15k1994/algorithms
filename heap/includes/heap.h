/*-------------------------------------------------------
	ICMC - University of Sao Paulo
	 __  __  ____    ____    
	/\ \/\ \/\  _`\ /\  _`\  
	\ \ \ \ \ \,\L\_\ \ \L\ \
	 \ \ \ \ \/_\__ \\ \ ,__/
	  \ \ \_\ \/\ \L\ \ \ \/ 
	   \ \_____\ `\____\ \_\ 
	    \/_____/\/_____/\/_/ 
	                         
				HEAP
	(c) Felipe Scrochio Custódio
---------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define left_child 0
#define right_child 1

typedef struct node {

	int value;
	NODE *left;
	NODE *right;

} NODE;

typedef struct heap {

	NODE *root;

} HEAP;

/*-------------------------------------------------------
	HEAP FUNCTIONS
---------------------------------------------------------*/

HEAP* createHeap();
NODE* createRoot(HEAP* tree, int content);
NODE* insertChild(int child, NODE *node, int content);

/*-------------------------------------------------------
	HEAP TRAVERSING FUNCTIONS
---------------------------------------------------------*/

// Basic heap movements
void __pre_order(NODE *root);
void pre_order(HEAP* tree);

void __in_order(NODE *root);
void in_order(HEAP *tree);

void __post_order(NODE *root);
void post_order(HEAP *tree);

/*-------------------------------------------------------
	AUXILIAR FUNCTIONS
---------------------------------------------------------*/

void printNode(NODE *node);

void __delete_tree(NODE *root);
void delete_tree(HEAP **tree);

int __height(NODE *node);
int height(HEAP *tree);