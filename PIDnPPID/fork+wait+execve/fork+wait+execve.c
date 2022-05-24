#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

/**
 * main- Exercise: fork + wait + execve
 *
 * Return: Always 0
 */
int main(void)
{
	pid_t my_pid;
	pid_t child_pid;
	int i = 0;
	int status;
	char *argv[] = {"bin/ls", "-l", "tmp/", NULL};

	my_pid = getpid();

	while(i <= 4 && (child_pid != 0))
	{
		child_pid = fork();

		if(child_pid == -1)
		{
			printf("Error creating a child!");
			return (1);
		}
		wait(&status);
		i++;
	}
	if(child_pid == 0)
	{
		printf("***********************************\n");
		printf(" CHILD ID : %u\n\n PARENT ID :%u\n\n", getpid(), getppid());
		printf("***********************************\n");
	}
	else
	{
		printf("%u IS THE PARENT, AND ITS ID IS %u\n", my_pid, child_pid);
	}

	if(execve(argv[0], argv, NULL)  == -1)
	{
		perror("ERROR:");
	}

	return (0);
}
