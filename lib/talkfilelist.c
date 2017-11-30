#include <unistd.h>

int showlist(char *command)
{
   execl("/bin/sh", "sh", "-c", command, (char *) 0);
}

int main()
{
   showlist("ls -1 *.txt");
}

