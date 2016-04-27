#include<cstdio>
#include<iostream>
using namespace std;

int main(){

    int n,i,j,sum,row_problem,column_problem,row,column;
    int mat[150][150];

    while(scanf("%d",&n)==1){

        if(n==0){
            break;
        }
        row_problem=0;
        column_problem=0;

        //matrix input
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                cin>>mat[i][j];
            }
        }

        //Finding faulty row
        for(i=1;i<=n;i++){
            sum=0;
            for(j=1;j<=n;j++){
                sum+=mat[i][j];
            }
            if(sum%2!=0){
                row=i;
                row_problem++;
            }
        }

        //Finding faulty column
        for(j=1;j<=n;j++){
            sum=0;
            for(i=1;i<=n;i++){
                sum+=mat[i][j];
            }
            if(sum%2!=0){
                column=j;
                column_problem++;
            }
        }

        if(row_problem==0 && column_problem==0){
            printf("OK\n");
        }
        else if(row_problem==1 && column_problem==1){
            printf("Change bit (%d,%d)\n",row,column);
        }
        else{
            printf("Corrupt\n");
        }


    }

    return 0;
}
