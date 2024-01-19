#include <iostream>
using namespace std;
int ukazateli(){
    int A;
    int * b;//объявление указателя
    // чтобы получить адрес переменной A надо ----&a
    b =&A; //присваеваем b адрес переменной A
    *b = 10 ; //изменяем/ получаем значение переменной A через указатель
    cout<<*b<<endl;//выводим значение переменной A через указатель b
    cout<<b<<endl;//выводим адрес переменной A
    return 0;
}
int main(){
    int a;
    a = ukazateli();
    return 0;
}