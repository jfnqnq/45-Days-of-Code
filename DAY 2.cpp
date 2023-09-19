#include<iostream>
using namespace std;

int main(){
    int x,y,z,t,n;
    cout<<"Enter the cost of chocolate: ";
    cin>>z;
    cout<<"Enter the number of 5 rupee coin : ";
    cin>>x;
    cout<<"Enter the number of 50 rupee coin : ";
    cin>>y;
    t = (5*x) + (50*y);
    n = t/z;
    cout<<n<<" are the total number of chocolates";
    return 0;
};
