#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int mysystem(char *command)
{
   pid_t pid = fork();
   int child_status;

   switch(pid){
	case -1:
	   perror("fork");
	   exit(0);
	case 0:
	   execl("/bin/sh", "sh", "-c", command, (char *) 0);
	default:
	   wait(&child_status);
	   break;
   }
}

