#include <iostream>
using namespace std;

void print_array(int arr[],int n){
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}

void print_permutations(int arr[], int n, int i) {
	int j,swap;
	print_array(arr,n);
	for(j=i+1;j<n;j++) {
		if(arr[i]>arr[j]) {
			swap=arr[i];
			arr[i]=arr[j];
			arr[j]=swap;
		}
		print_permutations(arr,n,i+1);
	}
}

int main(int argc, char** argv) {
	int m[3];
	m[0]=10;
	m[1]=2;
	m[2]=5;
	print_permutations(m,3,0);
	return 0;
}
