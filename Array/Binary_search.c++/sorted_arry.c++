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

int binarysearch(int arr[],int s,int e,int key){
int start=s,end=e;
int mid=start+(end-start)/2;

while(start<=end){
    if(key==arr[mid]){
        return mid;
    }else if(key<arr[mid]){
        end=mid-1;
    }else{
        start=mid+1;
    }
    mid=start+(end-start)/2;
}
return -1;
}

int findSorted(int arr[],int n,int key){
    int piviot=pivot(arr,n);

    if(key>=arr[piviot] && key<= arr[n-1]){
       return binarysearch(arr,piviot,n-1,key);
    }
    else{
        return binarysearch(arr,0,piviot-1,key);
    }
}

int main(){
    int arr[6]={7,8,9,2,3,4};
    int key;cin>>key;
    cout<<" sorted array is "<<findSorted(arr,5,key);
    return 0;
}