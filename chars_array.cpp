#include <iostream>
using namespace std;
//чаще всего когда мы просто создаем символьный массив, мы скорее всего указываем его размер больше , чем размер текста , который будет хранится в нем 
//программа понимает где заканчивается текст по элементу с нулевым кодом --  \0
//пример
int main(){
    char a[] = "hellohhhf";
    //при указании имени сивольного массива без указания элемента , выводится весь массив до \0
    cout<<a<<endl;
    a[5] = '\0';
    cout<<a<<endl;
    
    return 0;
}