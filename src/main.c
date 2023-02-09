/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:31:53 by hefurrer          #+#    #+#             */
/*   Updated: 2023/02/09 14:31:55 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>
#include	<sys/stat.h>
#include	<sys/types.h>
#include	"../includes/project_struct.h"
#include	"../libft/libft.h"
#include	<string.h>

void	getdirname(void)
{
	t_var	var;

	var.path[0] = 0;
	printf("Veuillez entrer le chemin et nom du dossier : ");
	scanf("%50s", var.path);
	createdir(var.path);
	printf("\n");
}

void	createdir(char *dir)
{
	char	*inc;
	char	*src;
	char	dir2[51];
	char	dir3[51];

	strcpy(dir2, dir);
	strcpy(dir3, dir);
	inc = strcat(dir2, "/includes");
	src = strcat(dir3, "/src");
	printf("%s\n", dir);
	mkdir(dir, S_IRWXU);
	mkdir(inc, S_IRWXU);
	mkdir(src, S_IRWXU);
}

int	main(void)
{
	getdirname();
	return (0);
}
