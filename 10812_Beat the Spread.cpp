#include<iostream>

using namespace std;

int main(){

    int n,s,d,x,y;
    cin>>n;
    while(n--){
        cin>>s>>d;
        if(s>=d && (s+d)%2==0){
           x=(s+d)/2;
           y=(s-d)/2;
           cout<<x<<" "<<y<<endl;
        }
        else{
            cout<<"impossible"<<endl;
        }
    }

    return 0;
}
