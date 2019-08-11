#include<stdio.h>

int main()
{
	int arr[10] = {18,4,8,21,12,25,2,22,3,0},max = 0;
	max = secondLargest(arr,10);
	printf("%d\n",max);
	return 0;
}
int secondLargest(int *iprt,int length)
{
	int max1=0,max2=0,i=0;
	for(i=0;i<length;i++)
	{
		if(max1<iprt[i])
		{
			max1=iprt[i];
		}
		else if(max2<iprt[i])
		{
			max2=iprt[i];
		}

	}
	
	return max2;
	
}

