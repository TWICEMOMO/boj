#include <cstdio>
using namespace std;

int N;
int main(){
    scanf("%d",&N);
    int Min=1000001;
    int Max=-1000001;
    for(int i=0;i<N;i++){
        int k; scanf("%d",&k);
        if(Max<k) Max=k;
        if(Min>k) Min=k;
    }
    printf("%d %d\n",Min,Max);
    return 0;
}