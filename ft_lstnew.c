#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(typeof *elem * 1);
	if (!elem)
	{
		return (NULL);
	}
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
