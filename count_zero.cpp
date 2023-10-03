#include<iostream>
using namespace std;

int count_zero(int arr[],int n){
     int s=0,e=n-1;
    int mid,ans=-1;
    while(s<=e){
       mid=(s+e)/2;
       if(arr[mid]==0 && arr[mid-1]==1){
          cout<<n-mid;
          break;
           
       }  
       else if(arr[mid]>0){
        s=mid+1;
       }
       else{
        e=mid-1;
       }
    }
    return ans;
    
}
int main()
{
   int arr[]={1,1,1,1,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
   count_zero(arr,n);
    
    return 0;
}