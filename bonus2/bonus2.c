/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz & qcherel                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:02:00 by djanusz           #+#    #+#             */
/*   Updated: 2024/08/28 15:02:12 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int language = 0;

void greetuser(char *buffer1, char *buffer2)
{
    char greeting[72];

    if (language == 1)
    	strcpy(greeting, "Hyvää päivää ");
	else if (language == 2)
    	strcpy(greeting, "Goedemiddag! ");
	else
		strcpy(greeting, "Hello ");
    strcat(greeting, buffer1);
    puts(greeting);
}

int main(int argc, char *argv[])
{
    char buffer1[40];
    char buffer2[32];
    char *env_var;

    if (argc != 3)
        return 1;

    memset(buffer1, 0, 0x13);
    strncpy(buffer1, argv[1], 0x28);
    strncpy(buffer2, argv[2], 0x20);

    env_var = getenv("LANG");

    if (memcmp(env_var, "fi", 2) == 0)
        language = 1;
	else if (memcmp(env_var, "nl", 2) == 0)
        language = 2;

    greetuser(buffer1, buffer2);
    return 0;
}
