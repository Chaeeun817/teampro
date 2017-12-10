#include <stdio.h>
#include "mysys.h"
#include "select.h"
#include "divfile.h"
#include "sentianal.h"

int main()
{
   printf("< 대화 파일 목록 >\n");
   mysystem("ls -1 /home/seo/teampro/ | grep 대화.txt | grep -v ^d");
   printf("============================================================\n");
   seltalk();
}
