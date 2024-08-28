/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level7.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz & qcherel                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:02:00 by djanusz           #+#    #+#             */
/*   Updated: 2024/08/28 15:02:12 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <time.h>

char c[40];

void m() 
{
	time_t tloc;
	time(&tloc);
	printf("%s -%d\n", c, tloc);
}

int main(int ac, char **av) 
{
	char *a = malloc(8);
	char *b = malloc(8);
	char *c = malloc(8);
	char *d = malloc(8);
	strcpy(b, av[1]);
	strcpy(d, av[2]);
	fgets(c, 80, fopen("/home/user/level8/.pass", "r"));
	puts("~~");
}