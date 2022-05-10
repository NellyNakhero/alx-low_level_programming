#include<stdio.h>
#include <unistd.h>

int main(void)
{
	char cmd[] = "/usr/bin/ls";
	char* argVec[] = {"ls", "-l", NULL};
	char* envVec[] = { NULL};

	printf("start execve call : %s \n ", cmd);
	printf("=====================================================");

	if(execve(cmd, argVec, envVec) == -1)
	{
		perror("Could not execute execve");
	}
	printf("Oops! Something went wrong");

	return 0;
}
