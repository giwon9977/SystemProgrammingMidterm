#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	pid_t pid;

	/* Starts duplicating process into parent and child */
	if((pid = fork()) < 0)
		perror("error in fork()\n");

	/* if pid is child */
	else if(pid == 0) {
		printf("Child PID is %d, Parent PID is %d.\n", getpid(), getppid());
	}
	
	/* if pid is parent */
	else {
		sleep(3);
		printf("Parent PID is %d\n", getpid());
	}

	exit(EXIT_SUCCESS);
}

