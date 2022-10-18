int	ft_isprint(int c)
{
	if(c > 31 && c <= 126)
		return (1);
	return (0);
}