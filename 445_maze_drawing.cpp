#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int counter=0,i,j;
    while(getline(cin,str)){

        int len = str.length();

        for(i=0;i<len;i++){

            switch(str[i]){
            case '1':
                counter+=1;
                break;
            case '2':
                counter+=2;
                break;
            case '3':
                counter+=3;
                break;
            case '4':
                counter+=4;
                break;
            case '5':
                counter+=5;
                break;
            case '6':
                counter+=6;
                break;
            case '7':
                counter+=7;
                break;
            case '8':
                counter+=8;
                break;
            case '9':
                counter+=9;
                break;
            case '!':
                cout<<"\n";
                break;
            case 'b':
                for(j=1;j<=counter;j++){
                    cout<<" ";
                }
                counter=0;
                break;
            default:
                for(j=1;j<=counter;j++){
                    cout<<str[i];
                }
                counter=0;
                break;

            }

        }

        cout<<"\n";

    }


    return 0;
}
