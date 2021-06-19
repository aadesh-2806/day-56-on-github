#include<stdio.h>

void main()
{
	char a[100],b[100][100];
	int i,k,n,m,j,l,c[100];
	
	printf("hello\nenter string=");
	gets(a);

	i=0; 
	while(a[i]!='\0')
	{
		i++;
	}
	n=i;												
														
	i=0;					
	l=0;				
	while(i<n)
	{
						// a>b>c a>b a>c if(t)											//why these garbage values are occuring
		for(j=0;a[i]!=' '&&a[i]!='\0';j++)
		{
		
			b[l][j]=a[i];
			i++;
		
		}
		i++;
		c[l]=j;
		l++;
	}
	k=l;
	for(l=0;l<=k;l++)
	{	
			for(j=c[l]-1;j>=0;j--)
			{
				printf("%c",b[l][j]);
			}
			printf(" ");
	}
	
	getch();
	
}
