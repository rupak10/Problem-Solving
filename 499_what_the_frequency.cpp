#include<iostream>
#include<map>
using namespace std;

int main(){

    string line;
    int i,top;
    while(getline(cin,line)){

        int len=line.length();
        top=0;
        map<char,int> mp;

        for(i=0;i<len;i++){
            if((line[i]>='A' && line[i]<='Z') || (line[i]>='a' && line[i]<='z')){
                mp[line[i]]++;
                top=max(top,mp[line[i]]);
            }
        }

        map<char,int>::const_iterator itr;
        for(itr=mp.begin();itr!=mp.end();++itr){
            if((*itr).second==top){
                cout<<(*itr).first;
            }
        }
        cout<<" "<<top<<endl;

    }

    return 0;
}
