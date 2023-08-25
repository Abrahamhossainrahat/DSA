#include<bits/stdc++.h>
using namespace std;
int top,n;
int Stack[1000];
class stack_st{
public :
    void push(int val){
        //top++;
        if(top==n){
            cout<<"Overflow"<<endl;
        }
        top++;
        Stack[top] = val;
    }
    void pop(){
        top--;
    }
    void empty(){
        if(top==0){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Stack isn't empty"<<endl;
        }
    }
};
 void display(){
        for(int i=1;i<=top;i++){
            cout<<Stack[i]<<" ";
        }
        cout<<endl;
    }

int main()
{
    stack_st st; //Creating object
    int x;
    n=1000;
    st.push(5);
    st.push(7);
    st.push(9);
    display();
    st.pop();
    display();
    st.pop();
    st.empty();
    display();
    st.pop();
    st.empty();

    /*for(int i=0;i<5;i++){
        cin>>x;
        st.push(x);
    }
    display();*/

}
