#include<iostream>
using namespace std;

// function declare-----
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    
    while (start <end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
}
}

void printarr(int arr[],int n){
   for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

// main code
int main(){

    int a[6]={2,4,6,7,8,9};

    reverse(a,6);

    printarr(a,6);
}