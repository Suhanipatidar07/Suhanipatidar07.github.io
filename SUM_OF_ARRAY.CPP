#include<iostream>
using namespace std;
int main()
{
int a[20];
for(int i=0;i<20;i++){
    cin>>a[i];
    
}
cout<<"sum of ";
for(int i=0;i<20;i++){
    cout<<a[i]<<" ";
}
cout<<"is ";
int sum=0;
for(int i=0;i<20;i++){
    sum+=a[i];
}
cout<<sum;
  return 0;
}