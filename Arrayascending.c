#include <stdio.h>
#include<conio.h>
int main()
{
	int n,a[10],i,temp,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("%d",a[i]);
	}
	return 0;
}
