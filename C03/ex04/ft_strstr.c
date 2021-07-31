/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sale <dde-sale@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 04:14:08 by dde-sale          #+#    #+#             */
/*   Updated: 2021/07/30 02:07:18 by dde-sale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	found(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i_str;

	i_str = 0;
	if (to_find[0] == '\0')
		;return (str)
	while (str[i_str] != '\0')
	{
		if (found(&str[i_str], to_find))
			return (&str[i_str]);
		i_str++;
	}
	return (0);
}

int	found(char *str, char *to_find)
{
	int	i_find;

	i_find = 0;
	while (str[i_find] == to_find[i_find])
	{
		if (to_find[i_find + 1] == '\0')
			return (1);
		i_find++;
	}
	return (0);
}
