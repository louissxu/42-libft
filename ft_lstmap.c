#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;
	t_list	next_elem;

	if (!lst || !f || !del)
	{
		return (NULL);
	}
	head = ft_lstnew(f(lst->content));
	if (!head)
	{
		return (NULL);
	}
	tail = head;
	lst = lst->next;
	while (lst)
	{
		next_elem = ft_lstnew(f(lst->content));
		if (!next_elem)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		tail->next = next_elem;
		tail = tail->next;
		lst = lst->next;
	}
	return (head);
}
