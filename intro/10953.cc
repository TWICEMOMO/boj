#include <iostream>
#include <string>
using namespace std;

int T;
int main(){
    cin>>T;
    for(int i=0;i<T;i++){
        string s; cin>>s;
        int A=s[0]-'0';
        int B=s[2]-'0';
        cout<<A+B<<endl;
    }
    return 0;
}