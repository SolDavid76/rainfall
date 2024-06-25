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