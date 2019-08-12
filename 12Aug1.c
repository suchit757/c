#include<stdio.h>

int main()
{
	int max=0;
	int arr[30]={1,2,4,5,6,74,23,2,3,4,2,4,2,4,5,6,6,7,7,5,3,3,2,3,4,5,6,6,77,76543};
	max = occur(arr,30,77);
	printf("%d\n",max);
	return 0;
}
int occur(int *iprt,int length,int no)
{
	int count=0,i=0;
	for(i=0;i<length;i++)
	{
		if(iprt[i]==no)
		{
			count++;
		}
	}
	return count;
}
