#include<stdio.h>
int main()

{
	int a[10],n,*p,i,f=0;
	printf("enter 10 elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number you want");
	scanf("%d",&n);
	p=a;
	for(i=0;i<10;i++)
	{
		if(*p==n)
		{
			f=1;
			break;
		}
		p++;
	}
	if(f==1)
	{
		printf("number found");
	}
	else
	{
		printf("number not found");
	}
}
