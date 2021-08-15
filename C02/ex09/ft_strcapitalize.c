/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sale <dde-sale@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 23:28:28 by dde-sale          #+#    #+#             */
/*   Updated: 2021/07/28 02:58:07 by dde-sale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A')
			if (*str <= 'Z')
				*str += 32;
		str++;
	}
	return (str);
}

int	ft_char_is_alpha(char c)
{
	if (c > 'z')
		return (0);
	if (c < 'A')
		return (0);
	if (c > 'Z')
		if (c < 'a')
			return (0);
	return (1);
}

int	ft_char_is_numeric(char c)
{
	if (c < '0')
		return (0);
	if (c > '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!ft_char_is_alpha(str[i - 1]))
				if (!ft_char_is_numeric(str[i - 1]))
					str[i] -= 32;
		}
	}
	return (str);
}
