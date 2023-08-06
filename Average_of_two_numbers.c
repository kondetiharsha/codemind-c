#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    float ab;
    cin>>a;
	cin>>b;
    ab=(a+b)*0.5;
    cout<<fixed<<setprecision(2);
    cout<<"Average of "<<a<<" and "<<b<<" is: "<<ab;
}