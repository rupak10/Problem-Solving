#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;

int main() {

    //Accepted
    char letter[10000];
    int line,i,j;
    int freq[26];
    priority_queue<pair<int, int> > pq;

    for(i=0;i<26;i++){
        freq[i]=0;
    }

    cin>>line;
    for(i=0;i<=line;i++){

        gets(letter);
        for(j=0;letter[j];j++){
            if(isalpha(letter[j])){
                freq[toupper(letter[j])-'A']++;
            }
        }
    }

    for(i=0;i<26;i++){
        if(freq[i]>0){
            pq.push(make_pair(freq[i], -(i+'A')));
        }
    }

    while(!pq.empty()){
        printf("%c %d\n",-pq.top().second,pq.top().first);
        pq.pop();
    }


    return 0;
}
