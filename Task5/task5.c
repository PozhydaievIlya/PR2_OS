#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int main (int argc, char **argv) 
{
	if (argc<2 || argc>2)
	{
		printf("Error. Please, enter: ./task5 <Name of Env Var>\n");
		exit(1);
	}
	
	printf("\nOtput format: NAME | VALUE --> %s | %s\n\n",argv[1],getenv(argv[1]));
  
   return 0;
}
