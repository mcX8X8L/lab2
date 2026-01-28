#include <iostream>
using namespace std;
int main()
{
    int a, b, t;
    cout<<"Введіть значення a: ";
    cin>>a;

    cout<<"Введіть значення b: ";
    cin>>b;

    t=a;
    a=b;
    b=t;

    cout<<"Після заміни: "<<endl;
    cout<<"a = "<< a <<endl;
    cout<<"b = "<< b <<endl;

    return 0;
}