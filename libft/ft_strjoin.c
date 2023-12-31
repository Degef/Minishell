/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Degef <Degei411233@outlook.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:02:39 by mkiflema          #+#    #+#             */
/*   Updated: 2023/07/05 13:41:12 by Degef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char		*new_str;
	size_t		i;
	size_t		j;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (0);
	i = -1;
	while (s1[++i] != '\0')
		new_str[i] = s1[i];
	j = 0;
	while (s2[j] != '\0')
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	free(s1);
	return (new_str);
}

// char	*ft_strjoin(char *s1, char *s2)
// {
// 	char	*joined_str;
// 	int		len;

// 	if (!s1)
// 		return ((char *)s2);
// 	if (!s2)
// 		return ((char *)s1);
// 	len = ft_strlen(s1) + ft_strlen(s2);
// 	joined_str = (char *)malloc((len + 1) * sizeof(char));
// 	if (!joined_str)
// 		return (0);
// 	ft_strlcpy(joined_str, s1, len + 1);
// 	ft_strlcat(joined_str, s2, len + 1);
// 	return (joined_str);
// }

// int main()
// {

// 	char *s2 = "Hello";
// 	char *s1 = NULL;

// 	printf("%s", ft_strjoin(s1, s2));
// }