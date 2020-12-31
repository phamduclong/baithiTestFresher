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
	int mangluu[1000];
	int biendiem = 0;
	int n;
	
	cin>>n;
	
	for(int i = 0 ; i < n ; ++i){
		cin>>arr[i];
	}
	
	SapXep(arr,n);
	
	int min = arr[1] - arr[0];
	for(int i = 1; i < n ;++i){
		if(arr[i] - arr[i-1] < min){
			min = arr[i] - arr[i-1];
		}
	}
	
	for(int i = 1 ; i < n ; ++i){
		if(arr[i] - arr[i-1] == min){
			mangluu[biendiem] = arr[i-1];
			biendiem++;
			mangluu[biendiem] = arr[i];
			biendiem++;
		}
	}
	
	for(int i = 0; i < biendiem; ++i){
		cout<<mangluu[i]<<" ";
	}
	
	
	
	return 0;
}
