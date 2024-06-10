#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    // printf("%0.3lf\n", a);
    cout << a << endl;
    cout << fixed << setprecision(4) << a << endl;
    return 0;
}