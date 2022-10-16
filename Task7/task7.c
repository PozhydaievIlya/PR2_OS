#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int main (int argc, char **argv) 
{
	if (argc>2)
	{
		printf("Error. Please, enter: ./task7 <NameEnv>\n");
		exit(1);
	}
	else if (argc<2)
	{
		printf("Name of variable not specified. All Environment variables was deleted. \n To specify variable, please, enter: ./task7 <NameEnv>\n");
		clearenv();
		
	}
	else
	{
		unsetenv(argv[1]);
		if(unsetenv(argv[1])!=0)
			{
			printf("\nError variable not found.\n");
			exit(0);
			}
			
		printf("\nVariable has been removed\n\n");
			
	}
	
	   int counter = 0;

    while(environ[counter] != NULL)
   {
         printf("[ %s ]\n", environ[counter]);
         counter++;
   }

  
   return 0;
}
