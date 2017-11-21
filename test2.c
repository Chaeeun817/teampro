#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	
	fd = open("1.txt",O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return -1;
	}
	else
	{
		printf("success!\n");
	}

	return 0;
}
