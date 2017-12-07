#include <stdio.h>
#include <string.h>

//It is still incomplete!!!

int divfile()//(FILE *fd)
{
   FILE *fd = fopen("test.txt", "r"); //test용. 나중에 삭제
   FILE *talkf;

   char year[3][12] = {"2015년", "2016년", "2017년"};
   char str[] = ".txt";
   char buf[1024];

   if(fd == NULL){ //나중에 삭제
	printf("원본파일 열기 실패\n");
	return 1;
   }

   //새 파일에 원본 내용 복사하기
   fgets(buf, sizeof(buf), fd);
   for(int i=0; i<3; i++){
	if(strstr(buf,year[i]) != 0){//해가 바뀌면 새 파일 생성
	   strcat(year[i], str);
           talkf = fopen(year[i], "wt");
           if(talkf == NULL){
                printf("파일 생성 실패\n");
                return 1;
           }
           while(1){
                fputs(buf, talkf);
                fgets(buf, sizeof(buf), fd);
		if(feof(fd)) break;
                if(strstr(buf, year[i+1]) != 0){
                        break;
                }
           }fclose(talkf);
        }
   }fclose(fd);
}


int main ()
{
   divfile();
}
