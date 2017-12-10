#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include "mysys.h"

void wordcnt(char *str)
{
	int like1,like2,like3;
	int hate1,hate2,hate3;
	int countl=0;
	int counth=0;

	if(strcmp(str, "2015년") == 0)
	{
		printf("분석중\n");
		like1 = mysystem("grep -c 사랑해 2015년.txt");
        	like2 = mysystem("grep -c 좋아해 2015년.txt");
        	like3 = mysystem("grep -c 보고싶어 2015년.txt");

		hate1 = mysystem("grep -c 시발 2015년.txt");
		hate2 = mysystem("grep -c 존나 2015년.txt");
		hate2 = mysystem("grep -c 빡쳐 2015년.txt");

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
                like1 = mysystem("grep -c 사랑해 2016년.txt");
                like2 = mysystem("grep -c 좋아해 2016년.txt");
                like3 = mysystem("grep -c 보고싶어 2016년.txt");

                hate1 = mysystem("grep -c 시발 2016년.txt");
                hate2 = mysystem("grep -c 존나 2016년.txt");
                hate2 = mysystem("grep -c 빡쳐 2016년.txt");

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
                like1 = mysystem("grep -c 사랑해 2017년.txt");
                like2 = mysystem("grep -c 좋아해 2017년.txt");
                like3 = mysystem("grep -c 보고싶어 2017년.txt");

                hate1 = mysystem("grep -c 시발 2017년.txt");
                hate2 = mysystem("grep -c 존나 2017년.txt");
                hate2 = mysystem("grep -c 빡쳐 2017년.txt");

                counth = hate1+hate2+hate3;

                if(countl > counth)
                {
                        printf("썸\n");
                }
                else{
                        printf("친구\n");
		}
	}
}

