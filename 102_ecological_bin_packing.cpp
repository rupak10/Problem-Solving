#include<stdio.h>
#include<cstring>
#define MAX_VAL 2147483647
using namespace std;


int bottles[9+3];
int count_movement(int a, int b, int c){
    int movement=0;
    for(int i=0;i<9;i++){
        if(i!=a&&i!=b&&i!=c){
            movement+=bottles[i];
        }
    }
    return movement;
}


int main(){

    //Accepted
    int i;

    while(scanf("%d",&bottles[0])!=EOF){
        for(i=1;i<9;i++){
            scanf("%d",&bottles[i]);
        }
        int movement[6];
        char combinations[6][3+2]={"BCG","BGC","CBG","CGB","GBC","GCB"};
        char output_str[5];
        int min_movement=MAX_VAL;

        movement[0]=count_movement(0,5,7);//BCG
        movement[1]=count_movement(0,4,8);//BGC
        movement[2]=count_movement(2,3,7);//CBG
        movement[3]=count_movement(2,4,6);//CGB
        movement[4]=count_movement(1,3,8);//GBC
        movement[5]=count_movement(1,5,6);//GCB

        for(i=0;i<6;i++){
            if(movement[i]<min_movement){
                min_movement=movement[i];
                strcpy(output_str,combinations[i]);
            }
        }

        printf("%s %d\n",output_str,min_movement);

    }

    return 0;
}
