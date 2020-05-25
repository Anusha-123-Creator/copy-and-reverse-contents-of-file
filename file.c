#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *file1,*file2;
	char c;
	long counter=0,i;
  long int initpos;
	long int limpos;
  int tabs=0,lines=0,spaces=0,characters=0;
	file1=fopen("file7.txt","r");
	if(file1==NULL)
	{
		printf("file1 not found\n");
		exit(0);
    } 
	
	file2=fopen("file8.txt","w");
	if(file2==NULL)
	{
		printf("file2 not found\n");
		exit(0);
	  }  
	  while(1)
	  {
	  	c=fgetc(file1);
	  	if(c!=EOF)
	  	{
	  		fputc(c,file2);
		  }
		  else
		  {
		  	break;
		  }
	  }
	printf("contents of file in reverse order:\n");
	file1=fopen("file7.txt","r");
	rewind(file1);
	fseek(file1,-1L,2);
	counter=ftell(file1);
	counter++;
	while(counter)
	{
		c=fgetc(file1);
		putchar(c);
		fseek(file1,-2L,1);
		counter--;
	}
	fclose(file1);
	fclose(file2);
	return 0;
}
	  
	
