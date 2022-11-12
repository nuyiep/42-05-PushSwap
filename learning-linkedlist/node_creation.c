
/* Creation of a linked list */
/* https://www.youtube.com/watch?v=sZIivL_tXZk&ab_channel=Learner%27sRepository */
#include <stdio.h>
#include <stdlib.h>

/* Structure definition of a node */
struct node
{
	int data;
	struct node *next; 
	/* struct node: self referencial struct */
	/* *next: 		pointer variable, pointing to the address of a node */
	
};

/* **v - address to *head */
void create(struct node **v, int d) 
{
	(*v) = (struct node *)malloc(sizeof(struct node));
	(*v)->data = d;
	(*v) ->next = NULL;
}

int main()
{
	struct node *head = NULL;
	/* declare struct variable */
	/* head is a pointer to a node that is of type struct */
	/* address of the first node - here NULL because no node yet */
	create(&head, 12);
}

/* --------clean version ------------ */
struct node
{
	int data;
	struct node *next; 
};

void create(struct node **v, int d) 
{
	(*v) = (struct node *)malloc(sizeof(struct node));
	(*v)->data = d;
	(*v) ->next = NULL;
}

int main()
{
	struct node *head = NULL;
	create(&head, 12);
}

