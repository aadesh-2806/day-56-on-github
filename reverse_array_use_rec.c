#include<stdio.h>

void reverse(int *,int);
void main()
{
	int n,t,i,m,a[50];

	printf("hello\nenter values=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter %d=",i+1);
		scanf("%d",&a[i]);		
	}
	
	reverse(a,n-1);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	getch();
}

void reverse(int *x,int y)
{
	int *f=x,*l=y+x,t;
	
	while(f<l)
	{
		t=*f;
		*f=*l;
		*l=t;
		f++;l--;
	}
}
