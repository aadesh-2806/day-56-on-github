#include<stdio.h>
#include<stdlib.h>

void main()
{
	
	int i,*a,r,k,d,t,n,j,l;

	printf("hello\nenter value=");
	scanf("%d",&n);
	
	a=(int*)malloc(n*sizeof(int));
	if(a==NULL)
	{
		printf("size is not available");
		getch();
		exit(1);
	}
	
	if(n<=9)
	{
		i=0;
		while(i<=n)
		{
			printf("%d ",i++);		
		}		
	}
	else
	{
		for(i=0;i<n;i++)
		{
			a[i]=i+1;
		}
	}
	
	free(a);
	getch();
	
}
/*
i=0;
		while(i<=9)
		{
			printf("%d ",i++);
		}
		i=10;
		while(i<=n)
		{
			c=0;
			t=i;
			while(t!=0)
			{
				t=t/10;
				c++;
			}
	
			l=i%100;
			l=l/10;
			if(i==(i/10)*10+(l-1) || i==(i/10)*10+(l+1))
			{
				printf("%d ",i);
			}
			i++;
		}*/
		
		


/*
#include <stdio.h> 
#include <string.h>

int main(void) 
{
	int toknum = 0;    
	char src[] = "Hello,, world!";  
	const char delimiters[] = ", !";    
	char *token = strtok(src, delimiters);    
	while (token != NULL)    
	{        
		printf("%d: [%s]\n", ++toknum, token);
	    token = strtok(NULL, delimiters);    
	}    
	//source is now "Hello\0, world\0\0"  
}

//

char src[] = "1.2,3.5,4.2"; 
char *first = strtok(src, ",");

do 
{    
	char *part;    
	// Nested calls to strtok do not work as desired 
	printf("[%s]\n", first);    
	part = strtok(first, ".");    
	while (part != NULL)    
	{    
	    printf(" [%s]\n", part);        
		part = strtok(NULL, ".");    
	} 
} while ((first = strtok(NULL, ",")) != NULL);

//

char src[] = "1.2,3.5,4.2";  
char *next = NULL; 
char *first = strtok_s(src, ",", &next);
do 
{  
	char *part;    
	char *posn;
	printf("[%s]\n", first);    
	part = strtok_s(first, ".", &posn);    
	while (part != NULL)    
	{    
	    printf(" [%s]\n", part);        
		part = strtok_s(NULL, ".", &posn);    
	} 
} while ((first = strtok_s(NULL, ",", &next)) != NULL);

//

enum color{ RED, GREEN, BLUE };

void printColor(enum color chosenColor) 
{ 
   const char *color_name = "Invalid color";    
   switch (chosenColor)    
   {   
    	case RED:         
			color_name = "RED"        
			break;              
	  	case GREEN:        
			color_name = "GREEN";        
			break;    
       	case BLUE:        
			color_name = "BLUE";        
			break;    
	}    
	printf("%s\n", color_name); 
}

//

typedef enum 
{    
	RED,    
	GREEN,    
	BLUE 	
}color;

color chosenColor = RED;

//

#include <stdlib.h> 
#include <stdio.h> 
#include <errno.h> 
#include <limits.h>

int main(int argc, char* argv[]) {
    
	for (int i = 1; i < argc; i++) 
	{        
		printf("Argument %d is: %s\n", i, argv[i]);
        errno = 0;        
		char *p;        
		long argument_numValue = strtol(argv[i], &p, 10);
        if (p == argv[i]) 
		{            
			fprintf(stderr, "Argument %d is not a number.\n", i);
        }        
		else if ((argument_numValue == LONG_MIN || argument_numValue == LONG_MAX) && errno == ERANGE) 
		{            
			fprintf(stderr, "Argument %d is out of range.\n", i);        
		}        
		else 
		{            
			printf("Argument %d is a number, and the value is: %ld\n",i, argument_numValue);        
		}    
	}    
	return 0; 
}

//
Section 19.3: Using GNU getopt tools

//
#include <stdio.h>
void print_all(FILE *stream) 
{    
	int c;    
	while ((c = getc(stream)) != EOF)        
	putchar(c); 
} 
int main(void) 
{    
	FILE *stream;
    // call netstat command. netstat is available for Windows and Linux    
	if ((stream = popen("netstat", "r")) == NULL)
	     return 1;
 
    print_all(stream);    
	pclose(stream);    
	return 0; 
}

//
Section 22.7: Polymorphic behaviour with void pointers
//
Chapter 27: Error handling
*/
