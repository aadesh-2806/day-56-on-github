#include<stdio.h>

void main()
{
	char a[100],b[100];
	int i,n,m,j,l;
	
	printf("hello aadesh agrawal(2019uec1660)\nenter string=");
	gets(a);

	i=0;
	while(a[i]!=0)
	{
		i++;
	}
	n=i;
	
	i=n-1;
	while(i>=0)
	{
		printf("%c",a[i]);
		
		i--;
	}
	
	getch();
	
}
