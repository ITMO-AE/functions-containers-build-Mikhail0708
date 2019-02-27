#include <iostream>
#include <vector>

using namespace std;

vector<string> PalindromFilter (vector<string> words, int minLength)
{
    vector<string> Result;
    string buffer;
    char c;
    unsigned int vector_size = words.size();
    unsigned int buffer_size, k = 0;
    for (int i = 0; i < vector_size; i++)
    {
        buffer = words[i];
        buffer_size = buffer.size();
        while (k < buffer_size/2)
        {
            c = buffer[k];
            buffer[k] = buffer[buffer_size - k];
            buffer[buffer_size - k] = c;
        }
        
        if (buffer == words[i] && buffer_size < minLength) Result.push_back(buffer);
        
    }
}

int main() 
{
    vector<string> Input (100);
    string buffer1;
    int minLength;
    cout << "Введите минимальную длину слова" << endl;
    cin >> minLength;
    
    
    do{
    cout << "Введите слова. По окончанию ввода введите пустое слово" << endl;
    getline (cin, buffer1);
    if (buffer1 != "") Input.push_back(buffer1);
    }while (buffer1 != "");
    
    PalindromFilter( Input, minLength);

    
    return 0;
}

