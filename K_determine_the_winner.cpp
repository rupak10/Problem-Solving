#include<stdio.h>

int main(){

    //Logic okay
    //sample output okay
    int tc,i,j,input,point_ptr,point_gend;

    int table[5]={500,1000,1500,2000,2500};

    scanf("%d",&tc);
    for(i=1;i<=tc;i++){

        point_ptr=point_gend=0;

        for(j=0;j<5;j++){
            scanf("%d",&input);
            if(input==1){
                point_ptr+=table[j];
            }
        }

        for(j=0;j<5;j++){
            scanf("%d",&input);
            if(input==1){
                point_gend+=table[j];
            }
        }

        if(point_ptr==point_gend){
            printf("Case %d: Tie\n",i);
        }
        else if(point_ptr > point_gend){
            printf("Case %d: Petr\n",i);
        }
        else if(point_gend > point_ptr){
            printf("Case %d: Gennady\n",i);
        }


    }


    return 0;
}
