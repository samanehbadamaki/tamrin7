#include<iostream>
using namespace std;
int binary_search(int array[],int l , int r , int x)
{
	if(r>=l)
	{
		int mid = l +(r-l)/2;
		
		if(array[mid]== x)
		return mid;
		
		if(array[mid] > x)
		return binary_search(array , l, mid-1,x);
		
		else if(array[mid]< x)
		return binary_search(array , mid+1 , r,x);
    }
    return -1;
}
int main()
{
	int array[100]={0};
	int n = 0 ;
	cout<<"please enter size of array:";
	cin >>n ;
	cout<<"please enter array:";
	for(int i = 0 ; i <n ; i++)
	cin>>array[i];
	int x = 0;
	cout<<"please enter the desired number:";
	cin>>x;
	
	int result = binary_search(array , 0 , n-1 , x);
	(result == -1)?cout<<"element is not present in array":cout<<"element is present at index :"<<result;
	return 0; 
}
		
	
