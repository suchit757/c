#include<stdio.h>

int main()
{
	int maxc=0;
	int arr[10] = {1,3,3,2,3,4,2,4,56,3};
	maxc = occur(arr,10);
	printf("%d\n",maxc);
	return 0;
}
int occur(int *iprt,int len)
{
	int count=0,mcount=0,number=0,i=0,j=0;
	
	for(i=0;i<len;i++)
	{
		count = 0;
		for(j=i;j<len;j++)
		{
			if(iprt[i]==iprt[j])
                        {
                                count++;
                        }
		}
		if(mcount<count)
                {
                        mcount=count;
                        number=iprt[i];
                }
	}
	return number;
}
