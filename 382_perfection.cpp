#include<stdio.h>

int main() {

    //Accepted
    int sum,j,i,t,arr[100+10];
    t = 0;

    while(t<=110) {
        scanf("%d",&arr[t]);
        if(arr[t]==0) {
            break;
        }
        t++;
    }

    printf("PERFECTION OUTPUT\n");
    for(i=0; i<t; i++) {
        sum=0;

        for(j=1; j<=arr[i]/2; j++) {
            if(arr[i]%j==0) {
                sum+=j;
            }

        }

        if(sum==arr[i]) {
            printf("%5d  PERFECT\n",arr[i]);
        } else if(sum < arr[i]) {
            printf("%5d  DEFICIENT\n",arr[i]);
        } else if(sum > arr[i]) {
            printf("%5d  ABUNDANT\n",arr[i]);
        }


    }

    printf("END OF OUTPUT\n");


    return 0;
}
