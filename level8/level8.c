/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level8.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz & qcherel                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:02:00 by djanusz           #+#    #+#             */
/*   Updated: 2024/08/28 15:02:12 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	void *ptr1 = NULL;
	void *ptr2 = NULL;
	char  buf[128];

	while(1) {
		fgets(buf, 128, stdin);
		prinft("%p, %p \n", ptr1, ptr2);
		if (buf == "auth ")
			ptr1 = malloc(4);
		else if (buf == "service")
			ptr2 = strdup(buf + 7);
		else if (buf == "reset")
			if (ptr1 < ptr2)
				free(ptr2);
			else
				free(ptr1);
		else if (buf == "login")
			if (ptr1 + 32 == ptr2)
				system("/bin/sh");
	}
}