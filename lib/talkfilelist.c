#include <unistd.h>

int talklist(char *command)
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
/*
int main() //app의 .c파일의 main
{
   talklist("ls -1 /home/seo/teampro/lib/ | grep 대화.txt | grep -v ^d");
   seltalk();
}

*/
