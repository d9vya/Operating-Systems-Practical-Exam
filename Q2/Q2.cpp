/*    Write a program to demonstrate fork where parent and child run different codes and parent
process should be executed first.    */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int a;
	a = fork();
	if (a < 0)
	{
		printf("child process could not be created");
		exit(-1);
	}
	else if (a == 0)// If value returned from fork()
            // is 0 that means
            // this is child process.
	{
		printf("Child process : My ID is %d\n", getpid());
	}
	else // If value returned from fork()
            // in not zero and >0 that means
            // this is parent process.
	{
		printf("Parent process : My ID is %d\n", getpid());
	}
	return 0;
}
