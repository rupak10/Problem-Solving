#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;

int main(){

    //Accepted
    int n,t,tc,i;
    string str;

    scanf("%d",&tc);
    getchar();

    for(t=1;t<=tc;t++){
        getline(cin,str);
        int len=str.size();

        int f=0;
        stack<char> st;
        for(i=0;i<len;i++){

           if(str[i]==' '){
            continue;
           }

           if(str[i]=='(' || str[i]=='['){
                st.push(str[i]);
            }
            else if(!st.empty() && str[i]==')' && st.top()=='('){
                st.pop();
            }
            else if(!st.empty() && str[i]==']' && st.top()=='['){
                st.pop();
            }
            else{
                f=1;
                break;
            }
        }

        if(st.empty() && f==0){
            printf("Yes\n");
        }
        else{
           printf("No\n");
        }

    }

    return 0;
}
