#include <unistd.h>

int talklist(char *command)
{
   execl("/bin/sh", "sh", "-c", command, (char *) 0);
   seltalk();
}

int main()
{
   talklist("ls -1 /home/seo/teampro/lib/ | grep 대화.txt | grep -v ^d");
}

