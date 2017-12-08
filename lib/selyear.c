#include <stdio.h>
#include <stdlib.h>

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
           break;
        }
   }

//그 해의 애정도 보여주는 함수 호출부 작성

}
