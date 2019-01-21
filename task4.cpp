#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;
void TwoVectors (vector<int> &One, vector<int> &Two)
{
    One.insert(One.end(), Two.begin(), Two.end());
    One.erase(One.begin(), One.begin()+5);
}


int main() {
    vector <int> one = {1, 2, 3, 4, 5};
    vector <int> two = {11, 12, 13, 14, 15};
    
    TwoVectors(one, two);
    for (auto x : one)
    {
        cout << x <<" ";
    }

    return 0;
}

