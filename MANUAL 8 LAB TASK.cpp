#include<iostream>
using namespace std;
int main(){
//TASK 1
	/*cout<<"enter the number of array";
	int num,sum=0,avg=0;
		cin>>num;
	int values[num];
	for(int i=0;i<num;i++){
		cin>>values[i];
		sum+=values[i];
	}
	avg=sum/num;
	cout<<"the average of array is ="<<avg;*/

//TASK 2
/*	cout<<"give elements of array:";
	int arr[5];
	int temp;
		for(int i=0;i<5;i++){
			cin>>arr[i];
		}
		for(int j=0;j<5;j++){
			for(int k=0;k<4;k++){
				if(arr[k]>arr[k+1]){
					temp=arr[k+1];
					arr[k+1]=arr[k];
					arr[k]=temp;
														
				}
			}
		}
	cout<<"sorted array ia as"<<endl;
		for(int m=0;m<5;m++){
			cout<<arr[m];
		}*/
	
//TASK 3
	cout<<"enter 5 numbers one by one ";
	int values[5],num;
	for(int i=0; i<5; i++){
		cin>>values[i];
		num=values[i];
			for(int j=i; j<5; j++){
				if(num > values[j]){
					num=values[j];
					values[j]=values[i];
					values[i]=num;
				}
			}
		cout<<values[i]<<" ";	
	}
					
return 0;	
}
