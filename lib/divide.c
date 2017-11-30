#include <stdio.h>

//It is still incomplete!!!

int divDate(char *str)
{
   FILE *fd;

   while(1)
   {
        fd = fopen(str, "r");

        if(fd == NULL){
                printf("잘못 입력하셨습니다. 다시 입력해주세요 : ");
                scanf("%s", str);
        }
        else{break;}
   }
}
