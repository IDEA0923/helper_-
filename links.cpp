#include <iostream>
using namespace std;
int main(){
    int a;
    int &b = a;//создание ссылки b
    //значение ссылки присываивается один раз при ее создании 
    //теперь ссылку можно использовать как обычную переменную a , но с другим именем
    b = 10;
    cout<<a<<endl;
    a = 35;
    cout<<b<<endl;
    return 0;
}