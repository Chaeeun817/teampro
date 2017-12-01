#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
   FILE *fd = fopen("firstTxt.txt", "r");
   FILE *talkf;

   char *token = NULL;
   char str1[] = "2017년";
   char str2[] = ".txt";
   char buf[128];

   if(fd == NULL){
        printf("파일을 여는데 실패했습니다.\n");
	return 1;
    }

   token = strcat(str1, str2);
   printf("생성된 파일 : %s\n", token);

   //새 파일 생성
   talkf = fopen(token, "wt");
   if(talkf == NULL){
        printf("파일 열기 실패.\n");
        return 1;
   }

   //원본 파일 내용 새 파일에 쓰기
   while(1){
        if(feof(fd)!=0){
           fputs("\n", talkf);
           printf("대화의 끝.\n");
           break;
        }
        fputs(fgets(buf, sizeof(buf), fd), talkf);
   }

   if(fclose(talkf) != 0){
        printf("파일 정상 종료 실패\n");
        return 1;
   }

   if(fclose(fd) != 0){
        printf("본문 파일 정상 종료 실패\n");
        return 1;
   }
   return 0;
}
