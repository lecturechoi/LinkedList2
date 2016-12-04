#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void init_list(List *list)
{
	// initialize the list
	list->head = NULL;
	list->tail = NULL;
	list->cur = NULL;
}

void add_to_list(List *list, int data)
{
	// create a node
	Node *new_node;
	new_node = (Node *)malloc(sizeof(Node));
	new_node->data = data;
	new_node->next = NULL;

	// add to list
	if (list->tail == NULL)
		list->head = new_node;
	else 
		list->tail->next = new_node;
	list->tail = new_node;
}

void print_list(List *list)
{
	// print all the data of the list
	Node * print_node;
	print_node = list->head;
	
	if (list->head == NULL)
		return;

	while (print_node != NULL) {
		printf("[%d]->", print_node->data);
		print_node = print_node->next;
	}
	printf("NULL\n");
}

void delete_list(List *list)
{
	// delete the list
	Node *delete_node;
	Node *delete_node_next;

	if (list->head == NULL)
		return;

	delete_node = list->head;
	delete_node_next = delete_node->next;

	free(delete_node);

	while (delete_node_next != NULL) {
		delete_node = delete_node_next;
		delete_node_next = delete_node_next->next;
		free(delete_node);
	}
}