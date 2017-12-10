#include <stdio.h>
#include <stdlib.h>
#include "divfile.h"
#include <string.h>

void seltalk()
{
   FILE *fd;

   char *str = malloc(sizeof(char)*100);

   printf("분석하고싶은 대화파일을 입력해주세요 : ");
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

   printf("++ 대화 선택 완료! ++\n");
   printf("============================================================\n");

   divfile(fd);
}
