/*This is a simple code to show how Dijkstra algorithm work.*/
/*Author : shi-zhe*/
/*Date 2015/08/08*/


#include <stdio.h>
#include <stdlib.h>
typedef struct Path_Node
{
	int seq; /*Giving a sequence number for each node.*/
	int Node_value;
	int adjacent_dist; /*It has many values probably.*/
	int visited; /*This algorithm need to know whether the node is visted.*/
	struct Path_Node * Nextnode;
	struct Path_Node * next_vertex;	
	struct Path_Node * next_path;
}Path_Node;
int main()
{
	/*Initialize*/
	struct Path_Node *source = NULL; 
	struct Path_Node *current = NULL;
	struct Path_Node *previous = NULL;
	struct Path_Node *temp_node = NULL;
	struct Path_Node *path_head = NULL;
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
	else if((current->seq) % 9 == (current->seq / 9))
	{current->Node_value = 1000000;}
	current->adjacent_dist=temp;
	current->visited=0;
	current->Nextnode = NULL;
	if(source == NULL){source = current;}
	else{
	previous->Nextnode=current;}
	i++;
	previous=current;
	}
	current = source;
	path_head = source;
	temp_node=path_head;
	
	while(current != NULL){
	if(current -> adjacent_dist == 0 && (current->seq+1)%9 != 1){
current = current -> Nextnode;}
	else{
	temp_node -> next_path = current;
	temp_node = current;
	temp_node->next_path=NULL;
	//if((temp_node -> seq +1)% 9 == 1){path_head -> next_vertex = current;path_head = current;path_head->next_vertex=NULL;}
	current = current->Nextnode;}
	
	}
	/*path_head = source;
	current = source;
	i=0;
	while(path_head!=NULL){
	while((current->seq)/9 < 9 &&(current->next_path!=NULL) ){
	if((current->seq)/9 == i ){
	previous = current;}
	else{
	previous->next_path = current ->next_path;
	free(current);}
	current = previous->next_path;
	}
	i++;
	path_head = path_head -> next_vertex;
	current = path_head;
	}*/
	
	path_head=source;
	current = source;
	temp_node = source;
	while(current!= NULL){
	if(((current->seq)/9)!=(temp_node->seq/9)){printf("\n");}
	printf("%d ",current->seq);
	//if(current->next_path == NULL){printf("\n");path_head=path_head->next_vertex;current = path_head;}
	temp_node = current;
	current=current->next_path;
	
	}


}

