#include <iostream>
using namespace std;

string kangroo(int x1, int v1, int x2, int v2)
{
    if (v1 <= v2)
        return "NO";

    if ((x2 - x1) % (v2- v1) == 0) {
        return "YES";
    }

    return "NO";

}

int main () 
{
    int x1, v1, x2, v2;

    cout << "Position and Velocity of kangroos\n";

    cin >> x1 >> v1 >> x2 >> v2;

    cout << kangroo(x1, v1, x2, v2);

    return 0;
}