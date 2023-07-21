#include<iostream>
using namespace std;

long long int square(int n){
    int s=0;int e=n;
    long long int ans=-1;
    long long int mid=s+(e-s)/2;

    while(s<=e){
        long long int sq=mid*mid;
        if(sq==n){
            return mid;
        }
        else if(sq<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

double solution(int n,int prision,int temp){
    double ans=temp;
    double factor=1;

    for(int i=0;i<prision;i++){
        factor=factor/10;

        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int temp=square(n);
    cout<<"the answer is "<<solution(n,3,temp)<<endl;
    return 0;
}