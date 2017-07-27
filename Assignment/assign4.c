#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 300000
#define PRIME 4967
#define SIZE 30
#define START 10000

int main()
{
	int count,num,remainder;
	count = 1;
	srand(time(NULL));
	printf("\t   Li  \t   Ri\n");
	while(count <= SIZE)
	{
		num = START + rand()%MAX ; //Generates random number from START to (MAX+START)
		remainder = num%PRIME ;
		printf("\t%6d\t%6d\n",num,remainder);
		count++;
	}
	return 0;
}
