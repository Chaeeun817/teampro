#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sentianal.h"

void selyear()
{
   FILE *fd;

   int num;
   char *str = malloc(sizeof(char)*100);

   printf("분석하고싶은 년도를 입력해주세요 : ");
   scanf("%s", str);

   while(1)
   {
        fd = fopen(str, "r");

        if(fd == NULL){
           printf("잘못 입력하셨습니다. 다시 입력해주세요 : ");
           scanf("%s", str);
        }
        else{
	   printf("============================================================\n");
           break;
        }
   }fclose(fd);

//그 해의 애정도 보여주는 함수 호출부 작성
   if(strcmp(str, "2015년.txt") == 0)
   {
     wordcnt("2015년");
   }
   else if(strcmp(str, "2016년.txt") == 0)
   {
     wordcnt("2016년");
   }
   else if(strcmp(str, "2017년.txt") == 0)
   {
     wordcnt("2017년");
   }
}
