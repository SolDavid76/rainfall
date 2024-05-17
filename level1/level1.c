#include <stdio.h>
#include <stdlib.h>

void run(void)
{
	fwrite("Good... Wait what?\n", 19, 1, stdout);
	system("/bin/sh");
}

int main(void)
{
	char tmp[64];

	gets(tmp);
}
