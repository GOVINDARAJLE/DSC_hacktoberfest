#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >>s;
        int na=0,nb=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                na=na+1;
            }
            else if(s[i]=='b'){
                nb=nb+1;
            }
        }
        cout <<min(na,nb) <<endl;
    }
	return 0;
}
