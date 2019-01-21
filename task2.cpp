//      С Кириллицей почему-то не работает, и с разными регистрами я не стал заморачиваться
//      some men interpret nine memos
//      not new york, roy went on
//      niagara o roar again
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome (string &s)
{
    
    
    string s_2 = s, s_3;
    s_2.erase(remove(s_2.begin(), s_2.end(), ' '),
              s_2.end());
    s_2.erase(remove(s_2.begin(), s_2.end(), ','),
              s_2.end());
    s_3 = s_2;
    reverse_copy(s_2.begin(), s_2.end(), s_3.begin()); 
    
    
    if (s_2 == s_3) return true;
    else return false;
}

int main() 
{
    string s;
    cout << "Введите строку:" << endl;
    getline (cin, s);
    
    if (isPalindrome (s)) cout << "Это палиндром";
    else cout << "Это не палиндром";

    return 0;
}

