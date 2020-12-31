#include<iostream>
using namespace std;

int main(){
	
	int arr[1000];
	int n;
	int temp;
	int mang[1000];
	int moc = 0,num = 0;
	
	cin>>n;
	
	for(int i = 0 ; i < 3*n ; ++i){
		cin>>arr[i];
	}
	
	
	
	while(moc != n){
		for(int i = 0; i < 3*n;++i){
			if(i%n == moc){
				mang[num] = arr[i];
				num++;
			}
		}
		
		moc++;
	}
	
	for(int i = 0 ; i < 3*n; ++i){
		cout<<mang[i]<<" ";
	}
	
	
	
	
	
	return 0;
}
