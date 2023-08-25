#include<bits/stdc++.h>
using namespace std;
#define z 50
//void insertAtBegin(int a[],int &length,int binsert);
//void inserAtLast(int a[],int &n,int binsert);
void insertAtMiddle(int a[],int &n,int binsert,int position);
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a[z]={5,3,6,45,78,56,8},length,binsert,position;
    length = 7;
    binsert = 54;
    position = 5;
    cout<<"Before insert in array : ";
    display(a,length);
    //insertAtBegin(a,length,binsert);
    //inserAtLast(a,length,binsert);
    insertAtMiddle(a,length,binsert,position);
    cout<<endl<<"After insert in array : ";
    display(a,length);

}
/*void insertAtBegin(int a[],int &n,int binsert){
    n=n+1;
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=binsert;
}*/
/*void inserAtLast(int a[],int &n,int binsert){
    n=n+1;
    a[n-1]=binsert;
}*/
void insertAtMiddle(int a[],int &n,int binsert,int position){
    n=n+1;
    int i;
    for(i=n-1;i>=position;i--){
        a[i]=a[i-1];
    }
    a[i]=binsert;
}

