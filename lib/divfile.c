#include <stdio.h>
#include <string.h>

//It is still incomplete!!!

int divfile()//(FILE *fd)
{
   FILE *fd = fopen("test.txt", "r"); //test용. 나중에 삭제
   FILE *talkf;

   char year[3][10] = {"2015년", "2016년", "2017년"};
   char str[] = ".txt";
   char buf[1024];
   char *rd;

   if(fd == NULL){ //나중에 삭제
	printf("원본파일 열기 실패\n");
	return 1;
   }

   for(int i=0; i<3; i++){
        //새 파일에 원본 내용 복사하기
        while(1){
           rd = fgets(buf, sizeof(buf)+1, fd);
           if(feof(fd)!=0){ //원본파일 끝까지 읽으면
                printf("대화의 마지막입니다.\n");
                break;
           }
           //한문장씩 읽다가 파싱할 년도가 있으면
           else if(strstr(buf,year[i]) != 0){
                //새 파일 생성
		strcat(year[i], str);
                talkf = fopen(year[i], "wt");
                if(talkf == NULL){
                   printf("파일 생성 실패\n");
                   return 1;
                }
                fputs(rd, talkf);
	   }
	}
   }fclose(fd);
}


int main ()
{
   divfile();
}
