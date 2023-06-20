#include<iostream>
using namespace std;

void findunique(int arr[],int n){
    int ans=0;
    for (int i = 0;i <n ; ++i) {
        ans=ans^arr[i];
    }
   cout<<ans<<endl;
}

int main(){
    int arr[10]={2,11,2,4,4,6,7,7,6};
    findunique(arr,10);
}