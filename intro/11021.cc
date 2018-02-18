#include <iostream>
using namespace std;

int T;
int main(){
    cin>>T;
    for(int i=1;i<=T;i++){
        int A, B; cin>>A>>B;
        cout<<"Case #"<<i<<": "<<A+B<<endl;
    }
    return 0;
}