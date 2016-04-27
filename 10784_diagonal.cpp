#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

    //Logic okay
    //Output okay
    //But Time Limit exceed
    long long n,add,diagonal,line;
    bool flag;
    int c=0;

    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        if(n==1){
            printf("Case %d: 2\n",++c);
        }
        else if(n==2){
            printf("Case %d: 4\n",++c);
        }
        else{
            flag=true;
            add=2;
            diagonal=2;
            line=4;
            while(flag){
                if(n<=diagonal){
                    flag=false;
                    printf("Case %d: %lld\n",++c,line);
                }
                else{
                    ++add;
                    diagonal+=add;
                    ++line;
                }
            }

        }


    }


    return 0;
}
