#include <stdio.h>
#include <stdlib.h>

char *seltalk()
{
   char *str = malloc(sizeof(char)*100);

   printf("분석하고싶은 대화파일을 입력해주세요 : ");
   scanf("%s", str);

   return str;
}

int main()
{
   seltalk();
}
