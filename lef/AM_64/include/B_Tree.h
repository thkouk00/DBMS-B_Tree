#ifndef B_TREE_H_
#define B_TREE_H_
#include "bf.h"

typedef struct split_d{
	int *pointer;			//Pointer to new block
	void *value;			//The value which goes up
}Split_Data;


//Creates a new root for the B+Tree and connects with the child blocks
int Initialize_Root(int,void *,int,int);

//Get 2 values, their types and length, return 0 if value1 < value2 else return 1
int compare(void *,void *,char,int);

//Sort the block 
int sort(int,char *,BF_Block * ,int,void *,void *);

//Split a full block and sort new blocks
Split_Data * split(int ,BF_Block *,char *,int ,void *,void *);

//Get a value and return a pointer to a block which we have to follow
int traverse(int,int,void*,int *);

//Get 2 values, their type,length and comparison operator
//and return 0 if comparison is true else 1
int op_function(void * ,void *,char ,int ,int );

//Get a data block and return the position 
//considering the comparison operator
int Find_ScanIdex_position(char *,int,void *,int,int,int *);

//Similar to traverse but returns a pointer to a block 
//considering the comparison operator
int Find_Scan(int ,int ,void *,int *,int *);

#endif