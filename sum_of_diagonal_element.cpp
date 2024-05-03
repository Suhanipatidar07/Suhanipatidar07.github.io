#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {5, 8, 3, 9, 6, 2, 8, 4, 5, 3, 2, 2, 2, 8, 1, 9};
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += arr[i][i];
    }
    int total = 0;
    int j = 3;
    for (int i = 0; i < 4; i++)
    {
        
        while (j >= 0)
        {
            total += arr[i][j];
            --j;
        }
    }

    cout << sum << endl
         << total;
    return 0;
}