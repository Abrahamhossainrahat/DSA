#include<bits/stdc++.h>
using namespace std;
int top,check;
int Stack[1000];
class stack_st{
public :
    void push(int val){
        top++;
        Stack[top]=val;
    }
    pop(){
        top--;
    }

    int operation(char s,int a,int b){
        check--;
        if(s=='+'){
            return a+b;
        }
        else if(s=='-'){
            return a-b;
        }
        else if(s=='*'){
            return a*b;
        }
        else if(s=='/' && b!=0){
            return a/b;
        }
        else if(s=='^'){
            return pow(a,b);
        }
    }
    int topp(){
        return Stack[top];
    }
    bool isoperand(char s){
        if(s>='0' && s<='9')
            return true;
        else
            return false;
    }
};
int main()
{
    stack_st st;    //Creating object
    int result = 0,k=0;
    string str;
    getline(cin,str);

    for(int i=0;i<str.size();i++){
        if(str[i]==' ' || str[i]==','){
            continue;
        }
        else if(st.isoperand(str[i])){
           int x = str[i]-'0';
           int j=i+1;
           while(st.isoperand(str[j])){
            x = x*10 + (str[j]-'0');
            j++;
           }
           st.push(x);
           i=j-1;
           check++;
        }
        else{
            int b = st.topp();
            st.pop();
            int a = st.topp();
            st.pop();
            if(top<0){
                k=1;
                break;
            }
            result = st.operation(str[i],a,b);
            st.push(result);
        }
    }
    if(k!=1 && check==1){
        cout<<result;
    }
    else{
        cout<<"This expression is wrong"<<endl;
    }
}
