#include<iostream>
using namespace std;

int number(int arr[],int n){
cout<<"inside the function"<<endl;

arr[0]=200;
    for (int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"going back to main function"<<endl;
}


int main(){
  int n[3]={2,4,5};
number(n,3);

cout<<"printing the main function"<<endl;
  
  for(int i=0;i<3;i++){
    cout<<n[i]<<" ";
  }cout<<endl;
}