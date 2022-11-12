
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void create(struct node **v, int data)
{
	(*v) = (struct node *)malloc(sizeof(struct node));
	(*v)->data = data;
	(*v)->next = NULL;
}

void display(struct node *q)
{
	struct node *temp;
	temp = q;
	while (temp->next != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("%d ", temp->data);
}

void insert_at_begin(struct node **v, int d)
{
	struct node *nn;
	nn = (struct node*)malloc(sizeof(struct node));
	if ((*v) == NULL)
	{
		nn->data = d;
		nn->next = NULL;
		(*v) = nn; // content at v will be assigned to the new node address
	}
	else
	{
		nn->data = d;
		nn->next = (*v);
		(*v) = nn;
	}
}

int main()
{
	struct node *head = NULL;
	create(&head, 12);
	display(head);
	insert_at_begin(&head, 12);
}