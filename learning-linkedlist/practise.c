
#include <stdlib.h>
struct node
{
	int 		data;
	struct node *next;
};

void create(struct node **v, int d)
{
	(*v) = (struct node *)(malloc(sizeof(struct node)));
	(*v)->data = d;
	(*v)->next = NULL;
}

int main(void)
{
	struct node *head = NULL;
	create(&head, 12);
}