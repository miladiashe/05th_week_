#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numnum, answer = 404, c = 0;
	
	printf ("game\n");
	
	numnum=0;
	do
	{
		scanf("%d", &numnum);
		if (numnum>answer)
		{
			printf("low\n");
		}
			else if(numnum<answer)
		{
			printf("high \n");
		}
		c++;
	}
	while (numnum!=answer);
	printf ("\n %d try \n", c);
 
	
	return 0;
}


