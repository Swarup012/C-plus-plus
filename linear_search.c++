#include<iostream>
using namespace std;

bool search(int arr[],int n,int key ){
for(int i=0;i<n;i++){
    if (arr[i]==key) {
        return true;
    }
}
return false;
}


int main(){
    int arr[10]={2,5,7,98,6,1,9,-4,3,88};

cout<<"enter the key"<<endl;int key;cin>>key;

bool found=search(arr,10,key);

if(found){
    cout<<"key is present"<<endl;
}else{
    cout<<"key is absent"<<endl;
}

}