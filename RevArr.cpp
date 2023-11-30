#include<iostream>
using namespace std;
int main(){
	
	int size;
	cout<<"Enter size of array:";
	cin>>size;
	
	int arr[size];
	
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	
	cout<<"Entered array is:";
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	
	int front=0;
	int rear = size;
	while(front<rear){
		int tmp = arr[rear];
		arr[rear] = arr[front];
		arr[front] = tmp;
		
		front++;
		rear--;
	}
	cout<<endl;
	cout<<"reversed array is:";
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
