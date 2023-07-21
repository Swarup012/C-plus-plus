#include<iostream>

using namespace std;

int pivot(int a[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(a[mid]>=a[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

 int main() {
    int a[5]={3,8,10,17,1};

    cout<<"the index of the element is "<<pivot(a,5)<<endl;
 }