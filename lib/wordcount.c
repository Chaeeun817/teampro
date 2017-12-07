#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp_src;
	char buff[8192];
	char *buf = buff;
	char *buf_pos = buf;
	char *tar = argv[2];
	char *tar_pos = tar;

	int count = 0;
	int exist = 1;
	int i;

	fp_src = fopen(argv[1],"rb");

	while(1)
	{
		char *buf_pos;
		buf_pos = fgets(buf,8192,fp_src);

		
		if (feof(fp_src))
		{
			printf("단어 검색이 끝났습니다.\n");
			break;
		}

		if( 0 == buf_pos)
		{
			printf("NULL\n:");
			break;
		}

		while (strlen(buf_pos) > strlen(tar))
		{
			while(*buf_pos != *tar_pos)
			{
				buf_pos ++;
			}
			if(strlen(buf_pos) < strlen(tar))
			{
				break;
			}
			for (i=0; i<strlen(tar); i++)
			{
				if(*buf_pos != *tar_pos)
				{
					exist = 0;
					break;
				}
				buf_pos ++;
				tar_pos ++;
			}
			if (exist)
			{
				count ++;
			}
			exist = 1;
			tar_pos = tar;
		}
	}

	printf("%s는 %d개가 존재합니다.\n",tar,count);

	return 0;
}
