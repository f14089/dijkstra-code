/*This is a simple code to show how Dijkstra algorithm work.*/
/*Author : shi-zhe*/
/*Date 2015/08/08*/


#include <stdio.h>
#include <stdlib.h>
#define V 9
typedef struct Path_Node
{
	int seq; /*Giving a sequence number for each node.*/
	int Node_value;
	int adjacent_dist; /*It has many values probably.*/
	int visited; /*This algorithm need to know whether the node is visted.*/
	struct Path_Node * Nextnode;	
}Path_Node;
int main()
{
	/*Initialize*/
	struct Path_Node *source = NULL; 
	struct Path_Node *current = NULL;
	struct Path_Node *previous = NULL;

	int i=0;
	while(i!=7)
	{
	current=(struct Path_Node*)malloc(sizeof(struct Path_Node));
	current->seq = i;
	current->Node_value = 0;
	current->adjacent_dist=i;
	current->visited=0;
	current->Nextnode = NULL;
	if(source == NULL){source = current;}
	else{
	previous->Nextnode=current;}
	i++;
	previous=current;
	}



}
