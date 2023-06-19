#include<iostream>
using namespace std;

//find the max value

int getMax(int num[],int n){
    int maxi = INT16_MIN;
    for(int i=0;i<n;i++){
        maxi= max(maxi,num[i]);
        // if(num[i]>max){
            // max=num[i];
        // }
    }
 return maxi;
 }

//find the min value

int getMin(int num[],int n){
    int mini = INT16_MAX;
     for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
        // if(num[i]<min){
        //     min=num[i];
        // }
    }
    return mini;
}


int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0 ;i < size;++i){
        cin>>num[i];
    }
    cout<<"the maximum value is"<<getMax(num,size)<<endl;
    cout<<"the minimum value is"<<getMin(num,size)<<endl;
}