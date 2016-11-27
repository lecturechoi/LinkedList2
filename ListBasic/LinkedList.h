#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

typedef struct _node
{
	int data;
	struct _node * next;
} Node;

typedef struct _list
{
	Node * head;
	Node * tail;
	Node * cur;
} List;

void init_list(List *);
void add_to_list(List *, int);
void print_list(List *);
void delete_list(List *);

#endif