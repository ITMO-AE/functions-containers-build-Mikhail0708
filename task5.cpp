
#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

void Reverse(vector<int> &v)
{
    int x;
    for (int i = 0; i <= v.size()/2; i++)
    {
        x = v[i];
        v[i] = v[v.size()-i-1];
        v[v.size()-i-1] = x;
    }
    
}




int main() 
{
    vector <int> V = {1,2,3,4,5,6,7,8,9};
    Reverse (V);
    for (auto x : V) cout << x << " ";
    
    return 0;
}

