/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz & qcherel                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:02:00 by djanusz           #+#    #+#             */
/*   Updated: 2024/08/28 15:02:12 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void m(void)
{
	puts("Nope");
}

void n(void)
{
	system("/bin/sh");
}


void main(int ac, char **av)
{
	char *buf = malloc(64);
	void (*ptr)(void) = (void (*)(void))malloc(4);

	ptr = &m;

	strcpy(buf, av[1]);

	(*ptr)();

}