#include<iostream>
using namespace std;

long long makeReverse(long long num) {
    long long temp=num;
    long long d,revrs=0;

    while(temp>0) {
        d=temp%10;
        temp/=10;
        revrs=revrs*10+d;
    }
    return revrs;
}


int main() {

    //Accepted
    long long org_num,new_num,sum;
    int tc,counter;
    bool flag;

    cin>>tc;
    while(tc--) {

        cin>>org_num;
        new_num=makeReverse(org_num);

        flag=true;
        counter=0;
        sum=0;
        while(flag){
            sum=org_num+new_num;
            ++counter;
            if(sum==makeReverse(sum)){
                flag=false;
                cout<<counter<<" "<<sum<<endl;
            }
            else{
                org_num=sum;
                new_num=makeReverse(org_num);
            }
        }


    }



    return 0;
}

