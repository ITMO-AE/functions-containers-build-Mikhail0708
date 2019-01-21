#include <iostream>

using namespace std;

int Factorial(int num)
{
    int result = 1, i;
    if (num > 0) for (i=1; i<=num; i++) result *= i;
    return result;
}

int main ()
{
    int num = 1;
    do{
    cout << "Введите число: " << endl;
    cin >> num;
    if (num > 10 || num < -10) cout << "Ошибка ввода: модуль числа не может быть больше 10" << endl;
    } while (num > 10 || num < -10);

    cout << Factorial(num);


}

