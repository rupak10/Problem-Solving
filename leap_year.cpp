#include<stdio.h>

using namespace std;

int main(){

    int year;
    bool l_year,h_year,b_year;

    while(scanf("%ld",&year)==1){

        l_year=false;
        h_year=false;
        b_year=false;

        if( (year%4==0 && year%100!=0) || (year%400==0) ){
            l_year=true;
        }
        if(year%15==0){
            h_year=true;
        }
        if(l_year && (year%55)==0){
            b_year=true;
        }


        if(!l_year && !h_year){
            printf("This is an ordinary year.\n");
        }
        else{
            if(l_year){
                printf("This is leap year.\n");
            }
            if(h_year){
                printf("This is huluculu festival year.\n");
            }
            if(b_year){
                printf("This is buluculu festival year.\n");
            }
        }

        printf("\n");

    }

    return 0;
}
