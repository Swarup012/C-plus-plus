#include<iostream>
using namespace std;

int sum(int arr[],int n){
 int val=0;
    for (int i = 0 ;i <n; ++i) {
         val=val+arr[i];
         }
cout<<val<<endl;
}


int main(){
    
    int arr[5]={2,4,5,6,7};

    sum(arr,5);
}