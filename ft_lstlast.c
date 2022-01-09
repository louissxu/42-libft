t_list	*ft_lstlast(t_lst *lst)
{
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst)
}
