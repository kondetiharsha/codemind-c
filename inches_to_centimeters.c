#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float f;
    cin>>n;
    f=2.54*n;
    cout<<fixed<<setprecision(2);
    cout<<f<<endl;
    return 0;
}