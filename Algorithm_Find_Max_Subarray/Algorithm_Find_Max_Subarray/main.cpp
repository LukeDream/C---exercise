#include<iostream>
#include<math.h>


int Find_Max_Crossing_Subarray(int A[],int low ,int mid, int high,int& cross_sum,
							   int& max_index_left,int& max_index_right);
int Find_Max_Subarray(int A[], int low,int high,int& max_low,int& max_high,int& max_sum);



int main()
{
	int A[] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
	//int A[] = {1,2,3,4};
	int low = 0;
	int high=15;
	int max_low=0;
	int	max_high=0;
	int	max_sum=0;
	Find_Max_Subarray(A,low,high,max_low,max_high,max_sum);

	std::cout<<"The max array is A["<<max_low<<".."<<max_high<<"] ,The sum is "<<max_sum<<std::endl;
	
	/*int mid = floor((low+high)/2);
	std::cout<<mid<<std::endl;*/
	system("pause");
	return 0;

}
int Find_Max_Crossing_Subarray(int A[],int low ,int mid, int high,int& cross_sum,
							   int& max_index_left,int& max_index_right)
{
	int sum = 0;
	int left_sum=0;
	int	right_sum= 0 ;
	max_index_left =-1;
	max_index_right=-1;
	cross_sum = 0;
	for(int i = mid; i>=low;i--)
	{
		sum+=A[i];
		if(sum > left_sum)
		{
			left_sum = sum;
			max_index_left=i;
		}
	}
	
	sum=0;
	for(int i=mid+1;i<=high;i++)
	{
		sum+=A[i];
		if(sum>right_sum)
		{
			right_sum=sum;
			max_index_right=i;
		}
	}
	cross_sum = left_sum+ right_sum;

	return 1;

}

int Find_Max_Subarray(int A[], int low,int high,int& max_low,int& max_high,int& max_sum)
{
	int left_low=0;
	int left_high=0;
	int	left_sum =0;
	int right_low=0;
	int	right_high=0;
	int	right_sum = 0;
	int cross_low=0;
	int cross_high=0;
	int	cross_sum = 0;

	if(low == high)
	{
		max_low= low;
		max_high=high;
		max_sum=A[low];
	}
	else
	{
		int mid = (low+high)/2;
		Find_Max_Subarray(A,low,mid,left_low,left_high,left_sum);
		Find_Max_Subarray(A,mid+1,high,right_low,right_high,right_sum);
		Find_Max_Crossing_Subarray(A,low,mid,high,cross_sum,cross_low,cross_high);
		if(left_sum>right_sum && left_sum>cross_sum)
		{
			max_low=left_low;
			max_high=left_high;
			max_sum = left_sum;
		}
		else if (right_sum>left_sum&&right_sum>cross_sum)
		{
			max_low = right_low;
			max_high= right_high;
			max_sum = right_sum;
		}
		else
		{
			max_low=cross_low;
			max_high=cross_high;
			max_sum=cross_sum;
		}

	}

	return 0;
}