#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of Integer: ";
    cin>>a;
    float b;
    cout<<"Enter a value in Decimal: ";
    cin>>b;
    string c;
    cout<<"Enter a String: ";
    cin>>c;
    double d;
    cout<<"Enter a Decimal Value: ";
    cin>>d;
    char e;
    cout<<"Enter a Character: ";
    cin>>e;
    bool f;
    cout<<"0 or 1?:  ";
    cin>>f;
    cout<<"The value of Integer is:"<<a<<" and Size is\t"<<sizeof(a)<<" Bytes";
    cout<<"\nThe Number in Decimal is:"<<b<<" and Size is "<<sizeof(b)<<" Bytes";
    cout<<"\nThe Letter is:"<<c<<" and Size is\t"<<sizeof(c)<<" Bytes";
    cout<<"\nThe Decimal Value is:"<<d<<" and Size is\t"<<sizeof(d)<<" Bytes";
    cout<<"\nThe Character is:"<<e<<" and Size is\t"<<sizeof(e)<<" Bytes";
    cout<<"\nThe Ans is: "<<f<<" and Size is\t"<<sizeof(f)<<" Bytes";
    return 0;
}