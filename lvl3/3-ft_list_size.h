/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-ft_list_size.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 10:56:41 by mbui              #+#    #+#             */
/*   Updated: 2019/05/16 10:57:54 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct    s_list
{
	    struct s_list *next;
		    void          *data;
}                 t_list;

#endif
