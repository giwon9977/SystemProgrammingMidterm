#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
	pid_t pid;

	/* Starts duplicating process into parent and child */
	if((pid = fork()) < 0) {
		perror("error in fork()\n");
	}

	/* If PID is child */
	else if(pid == 0) {
		execl("/bin/ls", "ls", (char *)0);	// Execute "ls".
		perror("execl() failed\n");		// this code is only executed when execl() fails.
	}

	/* If PID is parent */
	else {
		sleep(3);
		printf("execl() function execution\n");	// this printf() will be executed after termination of child process.
	}
	
	return(0);
}
