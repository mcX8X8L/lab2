#include <iostream>
using namespace std;
int main()
{
    double a;
    cout<<"Введіть ваше число:\n";
    cin>>a;
    cout<<endl;
    double b;
    cout<<"Введіть ваше друге число:\n";
    cin>>b;
    cout<<endl;

    cout<<"Сума: "<< a + b<<endl;
    cout<<"Різниця: "<< a - b<<endl;
    cout<<"Добуток: "<< a * b<<endl;

    if (b != 0) {
        cout<< "Частка: "<< a / b<<endl;
    } else {
        cout<<"На нуль ділити не можна!"<<endl;
    }
    return 0;
}