#include <stdio.h>
#include <stdlib.h>

int seltalk()
{
   char *str = malloc(sizeof(char)*100);

   printf("분석하고싶은 대화파일을 입력해주세요 : ");
   scanf("%s", str);

   divDate(str);

   return 0;
}

int main()
{
   seltalk();
}
