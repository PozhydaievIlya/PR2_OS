#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/utsname.h>
#define SIZE 30

struct utsname unameData;

int main (int argc, char **argv) 
{
	char Hostname[SIZE];
	gethostname(Hostname,SIZE);
	printf("\nHostname--> %s",Hostname);
	printf("\nHostId--> %d\n\n",gethostid());
	
	errno = 0;
	if (uname(&unameData) < 0) 
	{
		perror("uname");
		exit(1);
	}
  	printf("\nStruct utsname\n");
  	printf("sysname --> %s\n",unameData.sysname);
  	printf("nodname --> %s\n",unameData.nodename);
  	printf("release --> %s\n",unameData.release);
  	printf("version --> %s\n",unameData.version);
  	printf("machine --> %s\n",unameData.machine);
   return 0;
}
