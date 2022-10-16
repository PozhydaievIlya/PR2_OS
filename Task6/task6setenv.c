#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

extern char **environ;

int main (int argc, char **argv) 
{
	if (argc<3 || argc>3)
	{
		printf("Error. Please, enter: ./task6 <EnvName> <EnvValue>\n");
		exit(1);
	}
	setenv(argv[1],argv[2],1);
	printf("\nInputed value has been set: NAME | VALUE --> %s | %s\n\n",argv[1],argv[2]);


    int counter = 0;

    while(environ[counter] != NULL)
   {
         printf("[ %s ]\n", environ[counter]);
         counter++;
   }

   return 0;
}
