#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

int main() {

    //Accepted
    int i;
    string s;

    while(getline(cin,s)) {
        stack<char> st;
        int len=s.size();
        for(i=0; i<len; i++) {

            if(s[i]!=' ') {
                st.push(s[i]);
            } else if(s[i]==' ') {
                while(!st.empty()) {
                    printf("%c",st.top());
                    st.pop();
                }
                if(i!=(len-1)) {
                    printf(" ");
                }
            }
        }
        while(!st.empty()) {
            printf("%c",st.top());
            st.pop();
        }
        printf("\n");

    }

    return 0;
}
