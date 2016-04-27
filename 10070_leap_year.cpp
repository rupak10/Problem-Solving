#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main(){

    char number[1000000];
    long flag,leap,mod4,mod100,mod400,mod15,mod55,len,i;
    int print=0;

    while(cin>>number){

        if(print!=0){
            printf("\n");
        }
        print=1;

        leap=flag=mod4=mod100=mod400=mod15=mod55=0;
        len=strlen(number);

        for(i=0;i<len;i++){
            mod4=((mod4*10)+(number[i]-'0'))%4;
            mod100=((mod100*10)+(number[i]-'0'))%100;
            mod400=((mod400*10)+(number[i]-'0'))%400;
            mod15=((mod15*10)+(number[i]-'0'))%15;
            mod55=((mod55*10)+(number[i]-'0'))%55;
        }

        if( (mod4==0&&mod100!=0) || mod400==0 ){
            printf("This is leap year.\n");
            leap=1;
            flag=1;
        }
        if(mod15==0){
          printf("This is huluculu festival year.\n");
          flag=1;
        }
        if(leap==1 && mod55==0){
            printf("This is buluculu festival year.\n");
        }
        if(flag==0){
            printf("This is an ordinary year.\n");
        }


    }

    return 0;
}
