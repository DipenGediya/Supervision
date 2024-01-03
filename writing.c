#include<stdio.h>

main()
{
	int *p;
	char data[1000] = "dipen";
	
	p = fopen("writing.txt","w");
	
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		printf("Enter the data = \n");
		gets(data);
		fputs(data,p);
		printf("data add successfull..... ");
	}
	fclose(p);
}