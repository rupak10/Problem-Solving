#include<iostream>
#include<cstring>
#include<string>
#include<map>

using namespace std;

int main(){

    string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2="A   3  HIL JM O   2TUVWXY51SE Z  8";

    map<char,char> M;
    for(int i=0;i<s1.size();i++){
        M[s1[i]]=s2[i];
    }

    char orS[21];
    bool palindrome,mirrored;
    int length;

    while(cin>>orS){
        palindrome=mirrored=1;
        length=strlen(orS);
        for(int j=0;j<=length/2;j++){
            if(orS[j]!=orS[length-1-j]){
                palindrome=0;
            }
            if(orS[length-1-j]!=M[orS[j]]){
                mirrored=0;
            }
        }

        if(palindrome&&mirrored){
            cout<<orS<<" -- is a mirrored palindrome."<<"\n\n";
        }
        else if(palindrome&&!mirrored){
            cout<<orS<<" -- is a regular palindrome."<<"\n\n";
        }
        else if(!palindrome&&mirrored){
           cout<<orS<<" -- is a mirrored string."<<"\n\n";
        }
        else{
           cout<<orS<<" -- is not a palindrome."<<"\n\n";
        }


    }

    return 0;
}
