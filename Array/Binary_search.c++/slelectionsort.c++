#include<iostream>
using namespace std;

int sorting(int arr[],int n){
    for (int i = 0 ;i <n-1; i++) {
        int minindex=i;

        for(int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j])
                minindex=j;
}
swap(arr[minindex],arr[i]);
}
}

int main(){
    int arr[7]={2,3,1,4,5,6,0};
  
}