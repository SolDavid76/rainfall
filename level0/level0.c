#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char** av)
{
	if (atoi(av[1]) == 423)
	{
		// setresgid(getegid());
		// setresuid(geteuid());
		execv("/bin/sh", (char *[]){"/bin/sh", 0});
	}
	else
		fwrite("No !\n", 5, 1, stdout);
	return (0);
}