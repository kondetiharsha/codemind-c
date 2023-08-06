#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    float xy;
    cin>>x1;
    cin>>x2;
    cin>>y1;
    cin>>y2;
    xy=sqrt(((y1-x1)*(y1-x1))+((y2-x2)*(y2-x2)));
    cout<<fixed<<setprecision(4);
    cout<<xy<<endl;
    
}