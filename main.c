#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//project 1
	
	int input;
	
	printf("input a number : ");
	scanf("%d", &input);
	
	if(input>0)
	 printf("positive.\n");
	else
	 printf("non-positive.\n");
	
//project 2

	printf("input a number : ");
	scanf("%d", &input);
	
	if(input>0)
	 printf("|x|=%d\n", input);
	else
	 printf("|x|=%d\n", -input);

//project 3
	
	
	printf("input a number : ");
	scanf("%d", &input);
	
	if(input>0)
	 printf("positive.\n");
	else if(input<0)
	 printf("non-positive.\n");
	else
	 printf("zero.\n");
	 
	 
//project 4
	
	int i=0, meter;
	
	while(i<3)
	{
		meter=i*1609;
		printf("%d mile is %d meter.\n", i, meter);
		i++;
	}
	 
//project 5
	for(i=0;i<10;i++)
	 printf("Hello World!\n");
	 
	  
	
	return 0;
}
