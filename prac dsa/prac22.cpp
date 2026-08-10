#include <iostream>
using namespace std;

int main()
{
    int n, target;

    cout << "Enter number of book codes: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted book codes: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target code: ";
    cin >> target;

    int low = 0;
    int high = n - 1;
    int pos = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == target)
        {
            pos = mid;
            break;
        }
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(pos != -1)
        cout << "Target found at position " << pos;
    else
        cout << "Target not found.";

    return 0;
}