#include<bits/stdc++.h>
#define z 50
using namespace std;
void deletElement(int a[],int &n,int position);
void display(int a[],int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a[z]={5,3,6,45,78,56,8};
    int n=7,position = 6;
    cout<<"Before delete an element from array : "<<endl;
    display(a,n);

    deletElement(a,n,position);
    cout<<endl<<"After delete an element from array : "<<endl;
    display(a,n);
}
void deletElement(int a[],int &n,int position){
    int i;
    for(i=0;i<n;i++){
        /* if(i>position-1)
            a[i-1]=a[i];
         if(i==n-1)
            break;*/
         if(i==position-1)
            break;
    }
  //  n=n-1;
    if(i<n){
        n=n-1;
        for(int j=i;j<n;j++){
            a[j]=a[j+1];
        }
    }
}


