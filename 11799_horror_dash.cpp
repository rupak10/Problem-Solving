#include<iostream>
#include<queue>

using namespace std;

int main(){

    int test,student,speed;
    cin>>test;
    for(int i=1;i<=test;i++){
        cin>>student;
        priority_queue<int> st;
        for(int j=1;j<=student;j++){
            cin>>speed;
            st.push(speed);
        }

        cout<<"Case "<<i<<": "<<st.top()<<endl;
    }

    return 0;
}
