/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:43:37 by cgaratej          #+#    #+#             */
/*   Updated: 2023/10/26 11:55:16 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (i < n)
	{
		while ((s1[i] != '\0' || s2[i] != '\0')
			&& (i < n - 1 && s1[i] == s2[i]))
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}
