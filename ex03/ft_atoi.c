int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	else if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_char_to_int(char c)
{
	return ((int)(c - '0'));
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && (*s1 == *s2) && n - 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		else
			sign = 1;
		str++;
	}
	if (ft_strncmp(str, "2147483648", 10) == 0)
		return (-2147483648);
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += ft_char_to_int(*str);
		str++;
	}
	return (result * sign);
}
