#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

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

void wordcnt(char *str)
{
	int like1,like2,like3;
	int hate1,hate2,hate3;
	int countl=0;
	int counth=0;

	if(strcmp(str, "2015년") == 0)
	{
		printf("분석중\n");
		like1 = my_system("grep -c 사랑해 2015년.txt");
        	like2 = my_system("grep -c 좋아해 2015년.txt");
        	like3 = my_system("grep -c 보고싶어 2015년.txt");

		hate1 = my_system("grep -c 시발 2015년.txt");
		hate2 = my_system("grep -c 존나 2015년.txt");
		hate2 = my_system("grep -c 빡쳐 2015년.txt");

		counth = hate1+hate2+hate3;

		if(countl > counth)
		{
			printf("썸\n");
		}
		else
		{
			printf("친구\n");
		}
	}
	else if(strcmp(str, "2016년") == 0)
        {
		printf("분석중\n");
                like1 = my_system("grep -c 사랑해 2016년.txt");
                like2 = my_system("grep -c 좋아해 2016년.txt");
                like3 = my_system("grep -c 보고싶어 2016년.txt");

                hate1 = my_system("grep -c 시발 2016년.txt");
                hate2 = my_system("grep -c 존나 2016년.txt");
                hate2 = my_system("grep -c 빡쳐 2016년.txt");

                counth = hate1+hate2+hate3;

                if(countl > counth)
                {
                        printf("썸\n");
		}
		else
			printf("친구\n");

	}
	else if(strcmp(str, "2017년") == 0)
        {
                printf("분석중\n");
                like1 = my_system("grep -c 사랑해 2017년.txt");
                like2 = my_system("grep -c 좋아해 2017년.txt");
                like3 = my_system("grep -c 보고싶어 2017년.txt");

                hate1 = my_system("grep -c 시발 2017년.txt");
                hate2 = my_system("grep -c 존나 2017년.txt");
                hate2 = my_system("grep -c 빡쳐 2017년.txt");

                counth = hate1+hate2+hate3;

                if(countl > counth)
                {
                        printf("썸\n");
                }
                else
                        printf("친구\n");
		}
	}
	return 0;
}

