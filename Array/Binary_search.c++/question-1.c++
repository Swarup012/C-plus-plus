//find the firs index or last index with binary search

#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int start=0;
    int end = n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if (arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=arr[mid]-1;
    }
    else{
            start=arr[mid]+1;
        }
        mid=start+(end-start)/2;
}
return ans;
}
int lastOcc(int arr[],int n,int key){
    int start=0;
    int end = n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if (arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=arr[mid]-1;
    }
    else{
            start=arr[mid]+1;
        }
        mid=start+(end-start)/2;
}
return ans;
}
int total(int arr[],int n,int key){
   int to=0;
  return to=(firstOcc(arr,n,key)-lastOcc(arr,n,key)+1);
}

 int main() {
   int arr[7]={1,2,3,3,3,3,4};
   int key;
   cin>>key;
cout<<"the total number of key "<<total(arr,7,key)<<endl;
//    cout<<"the index of 3 is "<<firstOcc(arr,5,key)<<endl;
//    cout<<"the index of 3 is "<<lastOcc(arr,5,key)<<endl;
 }