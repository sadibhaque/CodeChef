#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;

    for(int z=0; z<n; z++){
        int a,b;
        int ctr1=0,ctr2=0,ctr3=0;
        string str;
        cin>>str;
        int x = str.length();


        for(int y=0; y<x; y++){
            if(str[y] == '1'){
                ctr1++;
            }
            else if(str[y] == '0'){
                ctr2++;
            }
        }
        for(int i=0; i<x; i++){
            if(str[i] == '1'){
                a=i;
                break;
            }
        }
        for(int j=a; j<x; j++){
            if(str[j] == '0'){
                b=j;
                break;
            }
        }

        for(int r=b+1; r<x; r++){
            if(str[r] == '1'){
                ctr3++;
            }
        }


        if(ctr2 == 0){
            cout<<"YES"<<endl;
        }
        else if(ctr1 ==0){
            cout<<"NO"<<endl;
        }
        else if(ctr3 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
