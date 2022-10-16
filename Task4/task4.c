#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
    int counter = 0;

    while(environ[counter] != NULL)
   {
         printf("[ %s ]\n", environ[counter]);
         counter++;
   }

   return 0;
}
