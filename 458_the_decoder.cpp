#include<iostream>
#include<string>
using namespace std;

int main(){

    //Accepted
    string inputStr="";
    string outputStr="";
    char ch;

    while(getline(cin,inputStr)){

        int length=inputStr.length();

        for(int i=0;i<length;i++){
            ch=inputStr[i]-7;
            outputStr+=ch;
        }

        cout<<outputStr;
        inputStr="";
        outputStr="";
        cout<<endl;
    }


    return 0;
}
