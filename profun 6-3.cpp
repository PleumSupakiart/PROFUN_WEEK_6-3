#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiplication(int*,int*);
 
int main()
{
	int a;
	int b;
	
	printf("Enter start multiplication table : ");
	scanf("%d",&a);
	printf("Enter end multiplication table : ");
	scanf("%d",&b);

	multiplication(&a,&b);
	return 0;
}

int multiplication(int *p,int *k)
{
	int num[12] = {1,2,3,4,5,6,7,8,9,10,11,12};

	
	if(*p>0 && *k>0 && *p!=*k)
	{
		if (*k>*p)
		{	
		int i=*p;
			while (i<=*k)
				{
		
					printf("\nMultiplication : %d\n",i);
					for(int j=0;j<12;j++)
						{
							printf("%d x %d = %d\n",i,num[j],num[j]*i);
			
						}
						i++;
				}
		
		}
		
		if(*p>*k)
		{
			int i=*k;
				while (i<=*p)
				{
		
					printf("\nMultiplication : %d\n",i);
					for(int j=0;j<12;j++)
						{
							printf("%d x %d = %d\n",i,num[j],num[j]*i);
			
						}
						i++;
				}
		
		}
	}
	else 
	{
		if(*p=*k)
		{
			printf("\nMultiplication : %d\n",*p);
			for (int i=0;i<12;i++)
				{
				printf("%d x %d = %d\n",*p,num[i],num[i]*(*p));
				}
		}
	}
	
		
}
