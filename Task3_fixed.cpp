#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


vector<string> PalindromFilter (vector<string> words, unsigned long minLength)
{
    vector<string> Result;
    string buffer;
    for (auto x : words)
    {
        buffer = x;
        reverse(buffer.begin(), buffer.end());

        if (buffer == x && buffer.size() >= minLength) Result.push_back(buffer);
    }
    return Result;
}

int main()
{
    vector<string> Input;
    string buffer1;
    unsigned long minLength;
    cout << "Введите минимальную длину слова" << endl;
    cin >> minLength;

    cout << "Введите слова. По окончанию ввода введите 0" << endl;

    while (true)
{
    cin >> buffer1;
    if (buffer1 != "0") {

        Input.push_back(buffer1);
        buffer1.clear();
    }

    else break;

}

    vector<string> Result = PalindromFilter( Input, minLength);
    for (auto x : Result)
    {
        cout << x << endl;
    }


    return 0;
}

