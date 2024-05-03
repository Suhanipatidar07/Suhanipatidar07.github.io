#include<iostream>
using namespace std;
int main()
{
int a[6]={1,4,6,8,10,45};
int target=13;
for(int i=0;i<4;i++){
  int ans=target-a[i];
  int start=i+1,end=5;
  while(start<end){
    if(a[start]+a[end]==ans){
      cout<<a[i]<<" "<<a[start]<<" "<<a[end];
      break;
    }
    else if(a[start]+a[end]>ans)
    end--;
    else
    start++;
  }
}

  return 0;
}