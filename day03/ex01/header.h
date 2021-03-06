#ifndef HEADER_H
# define HEADER_H

#include <string.h>
#include <stdbool.h>

/*--------------------------------
  !! required structure
  --------------------------------*/
struct s_node {
	int value;
	struct s_node *right;
	struct s_node *left;
};


/*--------------------------------
  :) function you must implement
  --------------------------------*/
struct s_node *createBST(int *arr, int n);


/*--------------------------------
  ?? test function used in main 
  --------------------------------*/
void printBinaryTree(struct s_node * t); //print a binary tree


/*--------------------------------
  &  your own other function
  --------------------------------*/

struct s_node *newNode(int value);
size_t insertValue(struct s_node **node, int value);
bool shallowerThan(struct s_node *node, int depth);
void rotateLeft(struct s_node **node);
void rotateRight(struct s_node **node);

#endif
