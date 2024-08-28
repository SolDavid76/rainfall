/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz & qcherel                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:02:00 by djanusz           #+#    #+#             */
/*   Updated: 2024/08/28 15:02:12 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    FILE *file;
    char buffer[66];
    char buffer2[66];
    int pos;

    file = fopen("/home/user/end/.pass", "r");
    if (!file || argc != 2)
        return -1;

    fread(buffer, 1, 66, file);
    buffer[65] = '\0';

    pos = atoi(argv[1]);
    buffer[pos] = '\0';

    fread(buffer2, 1, 66, file);
    fclose(file);

    if (strcmp(buffer, argv[1]) == 0)
        execl("/bin/sh", "sh", NULL);
    else
        puts(buffer2);

    return 0;
}