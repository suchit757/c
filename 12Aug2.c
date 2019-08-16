#include<stdio.h>

void occur(int*,int,int*,int*);

int main()
{
	int maxc=0,mcount = 0, num = 0;
	int arr[10] = {1,3,3,2,3,4,2,4,56,3};
	occur(arr,10,&mcount,&num);
	printf("%d number occurs %d times\n",num,mcount);
	return 0;
}
void occur(int *iprt,int len,int*mcount,int*number)
{
	int count=0,i=0,j=0;
	
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
		if(*mcount<count)
                {
                        *mcount=count;
                        *number=iprt[i];
                }
	}
}
