#include<bits/stdc++.h>
using namespace std;

void tower(int n,char start, char mid, char end){
    if(n==1){
        cout<<start<< "-->"<<end<<endl;
        return;
    }
    tower(n-1,start,end,mid);
        cout<<start<< "-->"<<end<<endl;
    tower(n-1,mid,start,end);

}

int main()
{
    cout<<"Enter the value of disk : ";
    int n;
    cin>>n;
    tower(n,'A','B','C');
}
