#include<iostream>
using namespace std;

//print function
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

//swap function 
void swapalt(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(arr[i+1]<n){
         swap(arr[i],arr[i+1]);
    }
    }
}

int main(){
    int arr[8]={3,4,6,7,8,9,11,12};

    swapalt(arr,8);
    print(arr,8);
}