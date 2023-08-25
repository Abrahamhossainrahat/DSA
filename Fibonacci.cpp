#include<bits/stdc++.h>
using namespace std;
int fibonacce(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibonacce(n-1)+fibonacce(n-2);
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
         cout<<fibonacce(i)<<" ";
    }

}
