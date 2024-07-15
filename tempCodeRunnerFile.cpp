#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long int n;
        cin >> n;
        string str;
        cin >> str;
        long int i=0, count=0;
        while(i<str.size()-1){
            if(str[i]=='0'){
                for(long int j=i+1; j<str.size(); j++){
                    if(str[j]=='0') count++;
                    else break;
                }
                if(count>=1) str.erase(i+1, count);
            }
            cout<<str<<endl;
            i++;
        }
        long int ones=0, zeroes=0;
        for(long int i=0; i<str.size(); i++){
            if(str[i]=='0') zeroes++;
            else ones++;
        }
        if(zeroes<ones) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}