#include <stdio.h>
#include <string.h>
#include "mysys.h"
#include "select.h"
#include "sentianal.h"

int divfile(FILE *fd)
{
   FILE *talkf;

   int num;

   char year[3][15] = {"2015년", "2016년", "2017년"};
   char str[] = ".txt";
   char buf[1024];

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

   printf("< 어떤 분석을 원하세요? >\n");
   printf("(1) 연도별 애정도 보기\n(2) 종합 애정도 보기\n");
   printf("번호를 입력해 주세요 : ");

   while(1){
        scanf("%d", &num);

        if(num == 1){//연도별 파일 목록 보여주고 선택안내
	   printf("============================================================\n");
	   printf("< 어떤 해의 애정도를 알고싶으세요? >\n");
           mysystem("ls -1 /home/seo/teampro/ | grep 년.txt | grep -v ^d");
           selyear();
           break;
        }
        else if(num == 2){//종합애정도
	   total();
	   break;
	}
        else{
           printf("잘못 입력하셨습니다. 다시 입력해 주세요 : ");
        }
   }
}
