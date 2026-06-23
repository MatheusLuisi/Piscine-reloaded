/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinto-l <mpinto-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 10:12:22 by mpinto-l          #+#    #+#             */
/*   Updated: 2026/05/14 13:16:42 by mpinto-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	num;
	int	length;
	int	*arr;

	num = min;
	length = max - min;
	arr = malloc(length * sizeof(int));
	if (min >= max)
		return (NULL);
	i = 0;
	while (i < length)
	{
		arr[i] = num;
		i++;
		num++;
	}
	return (arr);
}
