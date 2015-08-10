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
	struct Path_Node * next_vertex;	
}Path_Node;
int main()
{
	/*Initialize*/
	struct Path_Node *source = NULL; 
	struct Path_Node *current = NULL;
	struct Path_Node *previous = NULL;
	FILE * fp;
	fp = fopen("graph","r");
	int count,temp;
	int i=0;
	while(fscanf(fp,"%d ",&temp)!=EOF)
	{
	current=(struct Path_Node*)malloc(sizeof(struct Path_Node));
	current->seq = i;
	if(source == NULL){
	current->Node_value = 0;}
	else {current->Node_value = 1000000;}
	current->adjacent_dist=temp;
	current->visited=0;
	current->Nextnode = NULL;
	if(source == NULL){source = current;}
	else{
	previous->Nextnode=current;}
	i++;
	previous=current;
	}
	current=source;
	while(current!=NULL){
	printf("%d ",current->Node_value);	
	if(((current->seq+1) % 9 == 0) && (current->seq!=0)){printf("\n");}
	current=current->Nextnode;
	}
	current=source;
	while(current!=NULL){
	printf("%d ",current->adjacent_dist);	
	if(((current->seq+1) % 9 == 0) && (current->seq!=0)){printf("\n");}
	current=current->Nextnode;
	}


}
