#include<stdio.h>

main()
{
	int  *p;
	char data[1000];
	
	p = fopen("append.txt","a");
	
	if(p==0)
	{
		printf("File not open");
	}
	else
	{
		printf("Enter the data = ");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data enter successfully......");
	}
	fclose(p);
	
	printf("\n\n---------------- data read -----------------\n");
	
	p = fopen("append.txt","r");
	
	if(p==0)
	{
		printf("file not open");
		
	}
	else
	{
		while(fgets(data,5,p)!=NULL)
		{
			printf("%s",data);			
		}
	}
	fclose(p);
}