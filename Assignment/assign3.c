/* Our main strategy is we initialise the whole array to zero and then we generate random number in the given range if the array index corresponding to the generated number is zero we take that number as not not being repeated and so write it in our file and store it in the array in the index corresponding to that generated number */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 30000

int main()
{
	int count,num;
	int arr[MAX] = {0} ; //initialise array to 0
	count = 1;
	srand(time(NULL));
  	FILE *fptr;

   	fptr = fopen("program.txt", "w");
	//exit code if cannot open file
   	if(fptr == NULL)
   	{
      		printf("Error!");
      		exit(1);
   	}
	while(count <= MAX)
	{
		num = 1 + rand()%MAX ; //Generates random number from 1 to MAX
		if(arr[num-1] == 0)
		{
			arr[num-1] = num ; //num ranges from 1 to MAX
			fprintf(fptr,"%d\n", num);
			count++ ;
		}
	}
	return 0;
}
