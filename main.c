/*This is a simple code to show how Dijkstra algorithm work.*/
/*Author : shi-zhe*/
/*Date 2015/08/08*/


#include <stdio.h>
#include <stdlib.h>
typdef struct Path_Node
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
	struct Path_Node source = NULL; 
	struct Path_Node current = NULL;
	struct Path_Node previous = NULL;

	int i=0;
	while(1)
	{
	current=(struct *)malloc(sizeof(struct Path_Node));
	current->seq = 0;
	current->Node_value = 0;
	if(source == NULL){source = current;}
	}



}
