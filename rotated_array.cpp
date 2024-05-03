#include <iostream>
using namespace std;
int main()
{
  int arr[6] = {4, 6, 8, 10, 19, 2};

  int start = 0, end = 5;
  int mid, ans = arr[0];
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] >= arr[0])
    { // left side sorted
      start = mid + 1;
    }
    else if (arr[mid] < arr[0])
    { // right side sorted
      ans = arr[mid];
      end = mid - 1;
    }
  }
  cout << ans;
  return 0;
}