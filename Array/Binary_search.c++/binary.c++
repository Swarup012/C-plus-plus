
#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
int start=0,end=n-1;
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

int main(){

int arr[5]={2,3,4,5,6};
int key;
cout<<"enter the key "<<endl;
cin>>key;

int result=binarysearch(arr,5,key);
(result==-1)
?cout<<"key is not present"
:cout<<"key is present"<<result;

    return 0;
}