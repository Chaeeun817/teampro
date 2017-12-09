#include <stdio.h>
#include "tfl.h"
#include "select.h"
#include "divfile.h"
#include "sentianal.h"

int main()
{
   talklist("ls -1 /home/seo/teampro/lib/ | grep 대화.txt | grep -v ^d");
   seltalk();
}
