#include <iostream> 
using namespace std;

int main() 
{ 
    setlocale(0, ""); 
    /*7*/ int a, b; // объявление двух переменных a и b целого типа данных. 
    cout << "Введите первое число: "; 
    cin >> a; // пользователь присваивает переменной a какое-либо значение. 
    cout << "Введите второе число: "; 
    cin >> b; 
    /*12*/  int c = a + b; // новой переменной c присваиваем значение суммы введенных пользователем данных. 
    cout << "Сумма чисел = " << c << endl; // вывод ответа. 
    return 0; 
}