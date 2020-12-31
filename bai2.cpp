#include<iostream>
using namespace std;

void SapXep(int a[], int n)
{
	int min; 
	for (int  i = 0; i < n - 1; i++){
		min = i; 
		for(int j = i + 1; j < n; j++)
	   	   if (a[j] < a[min])
		       min = j; 
		if (min != i){
			int temp = a[min];
		    a[min] = a[i];
		    a[i] = temp;
		}
	   	   
	}
}

int main(){
	
	int arr[1000];
	int n;
	
	cin>>n;
	
	for(int i = 0 ; i < n ; ++i){
		cin>>arr[i];
	}
	
	SapXep(arr,n);
	
	int tong = arr[n-1] + arr[n-2];

	
	cout<<tong;
	
	
	
	return 0;
}
