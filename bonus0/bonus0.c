/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz & qcherel                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:02:00 by djanusz           #+#    #+#             */
/*   Updated: 2024/08/28 15:02:12 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void p(char *str, char *buf)
{
	char readbuf[4096];
	puts(" - ");
	read(0, readbuf, 4096);
	*(strchr(readbuf, '\n')) = 0;
	strncpy(buf, readbuf, 20);
}

void pp(char *buf)
{
	char buf1[20];
	char buf2[20];
	p(" - ", buf2);
	p(" - ", buf1);
	strcpy(buf, buf1);
	int len = strlen(buf);

	buf[len] = (unsigned short *)" ";
	buf[len + 1] = 0;
	strcat(buf, buf2); 
}

int main(int ac, char **av, char **envp)
{
	char buf[64];
	pp(buf);
	puts(buf);
	return(0);
}