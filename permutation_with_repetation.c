#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{

	int temp=*a;
	*a=*b;
	*b=temp;
}

void permute(int *a, int l, int r) 
{ 
 
int i,j,s=0;

	if (l == r) 
		{
			for(i=0;i<=r;i++)
			printf("%d", a[i]); 
			printf("\n");
		}

	else
		{ 	
		       for (i = l; i <= r; i++) 
		            { 
				for(j=l;j<i;j++)
					{
						if(a[j]==a[i])
						break;
					}


				if(j==i)
					{
						swap((a+l), (a+i)); 
						permute(a, l+1, r); 
						swap((a+l), (a+i));
			  		}
			    }
		}
}

int main() 
{ 
	int n,*a,i;
	printf("ENTER THE NUMBER :\n");
	scanf("%d",&n); 
	a=(int *)malloc(n*sizeof(int));
	printf("ENTER THE NUMBERS:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);  
	permute(a, 0, n-1); 
	return 0; 
} 
