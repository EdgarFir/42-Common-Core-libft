/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edfreder <edfreder@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:57:00 by edfreder          #+#    #+#             */
/*   Updated: 2025/04/08 22:33:25 by edfreder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compare two pointers in n bytes and while they have equal bytes
 * @param s1 Pointer to be compared
 * @param s2 Pointer to be compared
 * @param n Number of bytes to compare
 * @return Difference between the last bytes compared in s1 and s2
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_p;
	const unsigned char	*s2_p;

	if (!n)
		return (0);
	s1_p = (const unsigned char *)s1;
	s2_p = (const unsigned char *)s2;
	i = 0;
	while (s1_p[i] == s2_p[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1_p[i] - (unsigned char)s2_p[i]);
}
