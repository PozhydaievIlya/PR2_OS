#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

extern char **environ;

int main (int argc, char **argv) 
{
	if (argc<2 || argc>2)
	{
		printf("Error. Please, enter: ./task6 EnvName=EnvValue\n");
		exit(1);
	}
	putenv(argv[1]);
	printf("\nInputed value has been set: NAME = VALUE --> %s | %s\n\n",argv[1]);


    int counter = 0;

    while(environ[counter] != NULL)
   {
         printf("[ %s ]\n", environ[counter]);
         counter++;
   }

   return 0;
}
