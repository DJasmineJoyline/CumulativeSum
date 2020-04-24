#include<stdio.h>
int main()
{
	int n,a[20],sum[20];
	sum[0]=0;
	printf("Enter the number of elements in an array");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(int i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	sum[i]=sum[i-1]+a[i];
	}
	printf("Cumulative sum");
	for(int i=1;i<=n;i++)
	printf("%d\t",sum[i]);
	
	
	return 0;
}
