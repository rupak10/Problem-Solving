#include<iostream>
#include<vector>
using namespace std;

int main(){

    //Accepted
    int n,i,height,sum,moves,counter=0;
    while(cin>>n){

        if(n==0){
            break;
        }

        vector<int> myVec;
        sum=0;
        moves=0;
        for(i=1;i<=n;i++){
            cin>>height;
            sum+=height;
            myVec.push_back(height);
        }

        int avg=sum/n;
        int length = myVec.size();
        for(i=0;i<length;i++){
            if(avg>myVec[i]){
                moves+=avg-myVec[i];
            }
        }
        ++counter;
        cout<<"Set #"<<counter<<endl;
        cout<<"The minimum number of moves is "<<moves<<"."<<endl;
        cout<<"\n";

    }

    return 0;
}
