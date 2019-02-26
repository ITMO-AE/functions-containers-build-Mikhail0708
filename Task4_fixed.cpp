#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int length;

void TwoVectors (vector<int> &One, vector<int> &Two)
{
    Two.insert(Two.end(), One.begin(), One.end());
    One.erase(One.begin(), One.begin()+length);
}


int main() {
    vector <int> one = {1, 2, 3, 4, 5};
    vector <int> two = {11, 12, 13, 14, 15};
  length = static_cast<int>(one.size());

    TwoVectors(one, two);
    for (auto x : two)
    {
        cout << x << " ";
    }

    return 0;
}

