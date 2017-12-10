#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int total()
{
        int like1,like2,like3;
        int hate1,hate2,hate3;
        int countl=0;
        int counth=0;

	printf("분석중\n");
	like1 = mysystem("grep -c 사랑해 채은님과의대화.txt");
	like2 = mysystem("grep -c 좋아해 채은님과의대화.txt");
	like3 = mysystem("grep -c 보고싶어 채은님과의대화.txt");

	hate1 = my_system("grep -c 시발 채은님과의대화.txt");
	hate2 = my_system("grep -c 존나 채은님과의대화.txt");
	hate2 = my_system("grep -c 빡쳐 채은님과의대화.txt");

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
