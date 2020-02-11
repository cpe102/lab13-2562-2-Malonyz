#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
//Write your code here.
;

for(int j=1;j<N;j++){
	int loc=j;
	for(int a=0;a<N;a++){
		if(a==j)
		cout <<"["<<d[a]<<"]" <<" ";
		else
		{
			cout <<d[a] <<" ";
		}

		
	}


	for(int i =j;i > 0;i--){
		if(d[i] >d[i-1]){
			swap(d,i,i-1);
			loc =i-1;
			
		}
	}
	cout <<" => ";
	for(int a=0;a<N;a++){
		if(a==loc)
		cout <<"["<<d[a]<<"]" <<" ";
		else
		{
			cout <<d[a] <<" ";
		}
		
	}
	cout <<"\n";
}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
