#include <stdio.h>

int m;

void v(void)
{
	char buf[512];

	fgets(buf, 512, stdin);
	printf(buf);

	if (m == 64)
	{
		fwrite("Wait what?!\n", 12, 1, stdout);
		system("/bin/sh");
	}
}

void main(void)
{
	v();
}
