#include<iostream>
#include<string>
using namespace std;

int main(){

    string line;
    bool flag=true;
    int word;
    while(getline(cin,line)){

        word=0;
        int len=line.length();
        for(int i=0;i<len;i++){
            if( (line[i]>='A'&&line[i]<='Z') || (line[i]>='a'&&line[i]<='z') ){
                if(flag){
                    ++word;
                    flag=false;
                }
            }
            else{
                flag=true;
            }
        }

        cout<<word<<endl;

    }

    return 0;
}
