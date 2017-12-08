#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int my_system(char *command)
{
	pid_t pid = fork();
	int mystatus;

	if(pid == 0)
	{
		execl("/bin/sh", "sh", "-c", command, NULL);
	}
	else if(pid == -1)
	{
		perror("fork");
		exit(0);
	}
	else
	{
		wait(&mystatus);
	}
	return mystatus;
}

int main(void)
{
	int like1,like2,like3;
	int hate1,hate2,hate3;
	int countl=0;
	int counth=0;
	like1 = my_system("grep -c 사랑해 test.txt");
	like2 = my_system("grep -c 보고싶어 test.txt");
	like3 = my_system("grep -c 좋아해 test.txt");

	countl = like1+like2+like3;

	hate1 = my_system("grep -c 시발 test.txt");
	hate2 = my_system("grep -c 존나 test.txt");
	hate2 = my_system("grep -c 빡쳐 test.txt");

	counth = hate1+hate2+hate3;

	printf("%d\n", countl);
	printf("%d\n", counth);
	if(countl > counth)
	{
		printf("썸\n");
	}
	else
	{
		printf("친구\n");
	}

	return 0;
}
