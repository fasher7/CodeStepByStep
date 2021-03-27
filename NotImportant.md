#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout); 
    int a[5];
    for(int i:a)
    {
        cin >> i;
        cout << i << " ";
    }
}
