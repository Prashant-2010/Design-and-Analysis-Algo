#include<iostream>

using namespace std;

int main(){

int arr[]={2,3,4,0,4,0,1};
int n=sizeof(arr)/sizeof(arr[0]);
int j=0;

for(int i=0;i<n;i++)
{
   if(arr[i]!=0){
      int t=arr[j];
      arr[j]=arr[i];
      arr[i]=t;
      j++;
   }
}

for(int i=0;i<n;i++){
   cout<<arr[i]<<"\t";
}
   return 0;
}