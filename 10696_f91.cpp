#include<cstdio>

int main(){

    //Accepted
    int n,b;
    while(scanf("%d",&n)==1){
        if(n==0){
            break;
        }

        if(n > 100){
            b = n - 10;
        }
        else{
            b=91;
        }
        printf("f91(%d) = %d\n",n,b);
    }

    return 0;
}
