/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiceli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:42:53 by pmiceli           #+#    #+#             */
/*   Updated: 2017/11/30 18:38:14 by pmiceli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# include "libft/libft.h"

typedef struct	s_gnl
{
	int			i;
	int			after_len;
	int			tmp;
	int			ret;
	char		*after;
	char		*tmp_after;
}				t_gnl;

int				get_next_line(const int fd, char **line);

#endif
