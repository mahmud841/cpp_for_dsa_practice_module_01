#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    // if (x == 1)
    // {
    //     cout << "one";
    // }
    // else if (x == 2)
    // {
    //     cout << "two";
    // }
    // else if (x == 3)
    // {
    //     cout << "three";
    // }
    // else if (x == 4)
    // {
    //     cout << "four";
    // }
    // else if (x == 5)
    // {
    //     cout << "five";
    // }

    switch (x)
    {
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    case 4:
        cout << "four" << endl;
        break;
    case 5:
        cout << "five" << endl;
        break;
    case 6:
        cout << "six" << endl;
        break;

    default:
        cout << "no match" << endl;
    }
    return 0;
}