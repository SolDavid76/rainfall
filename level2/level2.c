/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz & qcherel                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:02:00 by djanusz           #+#    #+#             */
/*   Updated: 2024/08/28 15:02:12 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void p()
{
	unsigned int test;
	char buf[64];

	fflush(stdout);
	gets(buf);
	test = __builtin_return_address(0); 
	if ((test & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", (void *)test);
		_exit(1);
	}
	puts(buf);
	strdup(buf);
}

int main()
{
	p();
}