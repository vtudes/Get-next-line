/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchen <tarchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:46:22 by tarchen           #+#    #+#             */
/*   Updated: 2017/09/01 20:23:29 by tarchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void		ft_strnjoin_f(char **dest, char *src, int n)
{
	size_t	len;
	char	*new_str;

	if (*dest && src)
	{
		len = ft_strlen(*dest) + n;
		new_str = try_malloc(sizeof(char) * (len + 1), _FL_);
		ft_strcpy(new_str, *dest);
		ft_strncat(new_str, src, n);
		ft_strdel(dest);
		*dest = new_str;
	}
}

void		ft_strjoin_rf(char *src, char **dest)
{
	size_t	len;
	char	*new_str;

	if (dest && src)
	{
		len = ft_strlen(*dest) + ft_strlen(src);
		new_str = try_malloc(sizeof(char) * (len + 1), _FL_);
		ft_strcpy(new_str, src);
		ft_strcat(new_str, *dest);
		ft_strdel(dest);
		*dest = new_str;
	}
}

void		ft_strjoin_f(char **dest, char *src)
{
	size_t	len;
	char	*new_str;

	if (*dest && src)
	{
		len = ft_strlen(*dest) + ft_strlen(src);
		new_str = try_malloc(sizeof(char) * (len + 1), _FL_);
		ft_strcpy(new_str, *dest);
		ft_strcat(new_str, src);
		ft_strdel(dest);
		*dest = new_str;
	}
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len;
	char	*new_str;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		new_str = try_malloc(sizeof(char) * (len + 1), _FL_);
		ft_strcpy(new_str, s1);
		ft_strcat(new_str, s2);
		return (new_str);
	}
	return (NULL);
}
