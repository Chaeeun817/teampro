#include <unistd.h>

int yearlist(char *command)
{
   execl("/bin/sh", "sh", "-c", command, (char *) 0);
}
