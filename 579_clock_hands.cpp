#include<stdio.h>

int main(){

    //Accepted
    float h,m,i,j,a;
    while(scanf("%f:%f",&h,&m)==2){

        if(h==0 && m==0){
            break;
        }

        i=(h*30)+(m/2);
        j=m*6;
        a=i-j;

        if(a<0){
            a*=-1;
        }
        if(a>180){
            a=360-a;
        }

        printf("%.3f\n",a);

    }

    return 0;
}
