#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>

using namespace std;

int main(){

    int round;
    while(scanf("%d",&round)==1){
        if(round==-1){
            break;
        }

        string solution,guess;
        cin>>solution>>guess;

        int stroke = 0;

        for(int i=0; i<guess.size() && stroke<=6 && solution!=""; ++i){
            if(solution.find(guess[i])!=string::npos){

                solution.erase(remove(solution.begin(), solution.end(),
                                      guess[i]),solution.end());
            }
            else{
                ++stroke;
            }

        }

        cout<<"Round "<<round<<endl;
        if(stroke==7){
            cout<<"You lose."<<endl;
        }
        else if(solution==""){
            cout<<"You win."<<endl;
        }
        else{
            cout<<"You chickened out."<<endl;
        }


    }

    return 0;
}
