#include<iostream>
using namespace std;
int main(){
    int Arr[]={-2, -5, 6, -2, -3, 1, 5, -6},
        Max=0;
    for(int i=0;i<7;i++){
        int s=0;
        for(int j=i+1;j<=7;j++){
            s+=Arr[j];
            if(s>Max)
                Max=s;
        }
    }
    cout<<Max;
}
