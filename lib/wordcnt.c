#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int my_system(char *command)
{
	execl("/bin/sh", "sh", "-c", command, NULL);
}

int main(void)
{
	int mystatus;
	mystatus = my_system("grep -c 선덕 test.txt");
}
