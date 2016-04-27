#include<iostream>
#include<stdio.h>
#include<queue>
#include<map>
#include<string.h>
using namespace std;

int main(){

    //Accepted
    char input[1020];
    int i,print=0;
    while(gets(input)){

        map<char, int> mp;
        priority_queue<pair<int, int> > pq;

        if(print!=0){
            printf("\n");
        }
        print=1;

        int len = strlen(input);

        for(i=0;i<len;i++){
            mp[input[i]]++;
        }

        map<char, int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            pq.push(make_pair(-(*it).second,(*it).first));
        }

        while(!pq.empty()){
            printf("%d %d\n",pq.top().second,-pq.top().first);
            pq.pop();
        }


    }

    return 0;
}
