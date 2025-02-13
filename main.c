// HEADER LIST

#include "list.h"

t_list	*newlist(int nbr)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->data = nbr;
	lst->next = NULL;
	return (lst);
}

void	addlst(t_list **lst, t_list *new)
{
	new->next = *lst;
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}

void	printlist(t_list *lst)
{
	while (lst)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}
}

void	freelist(t_list *lst)
{
	//t_list	*tmp;

	printf("lista tmp:\n");
	//*tmp = *lst;
	//printlist(tmp);
	printf("lista lst\n");
	*lst = *lst->next;
	printlist(lst);
	//free(tmp);
}

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	
	printf("NEW PROJECT: LIST\n");
	printf("PID: %d\n", getpid());
	lst1 = newlist(5);
	lst2 = newlist(7);
	lst3 = newlist(8);
	addlst(&lst1, lst2);
	addlst(&lst1, lst3);
	printlist(lst1);
	freelist(lst1);
	printf("List clean\n");
	if (lst1)
		printlist(lst1);
	else
		printf("List clean\n");
	printf("Presiona ENTER para salir...\n");
	getchar();
	return (0);
}
