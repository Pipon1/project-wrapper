/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   project_struct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:43:05 by hefurrer          #+#    #+#             */
/*   Updated: 2023/02/09 15:43:10 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECT_STRUCT_H
# define PROJECT_STRUCT_H

// struct
typedef struct s_var
{
	char	path[51];
}				t_var;

//func
void	getdirname(void);
void	createdir(char *dir);
#endif
