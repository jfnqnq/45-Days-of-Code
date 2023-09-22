#include <iostream.h>

using namespace std;

int main() {
    int n,i,x,y;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y;
        if(y>x)
           cout<<x+(y-x)*2<<endl;
        else
            cout<<y<<endl;
    }
    return 0;
}
