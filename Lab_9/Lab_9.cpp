#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    const int lim = 5;

    static int a[lim][lim];

    for (int i = 0; i < lim; ++i)
        for (int j = 0; j < lim; ++j)
        {
            cout << "A[" << i << "][" << j << "]:";
            cin >> a[i][j];
        }
    int result = 0;
    for (int j = 0; j < lim; ++j)
    {
        int i;
        for (i = 0; i < lim; ++i)
            if (a[i][j] % 2 == 0) break;
        if (i == lim)
        {
            result = j;
            break;
        }
    }
    cout << "Row: " << result << endl;
    return 0;
}