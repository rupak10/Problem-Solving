#include<stdio.h>

int main() {

    //Accepted
    int amp,freq,i,j,k,a,test;
    scanf("%d",&test);
    for(a=0; a<test; a++) {

        scanf("%d",&amp);
        scanf("%d",&freq);

        for(k=0; k<freq; k++) {

            //first half
            for(i=1; i<=amp; i++) {
                for(j=1; j<=i; j++) {
                    printf("%d",i);
                }
                printf("\n");
            }

            //second half
            for(i=amp-1; i>=1; i--) {
                for(j=1; j<=i; j++) {
                    printf("%d",i);
                }
                printf("\n");
            }

            if(k!=(freq-1)) {
                printf("\n");
            }

        }
        if(a!=(test-1)){
            printf("\n");
        }

    }

    return 0;
}
