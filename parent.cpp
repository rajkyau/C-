#include <iostream>
using namespace std;
int main()
{
    int arr[10], index;
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cin >> index;

    cout << "Data = " << arr[index] << endl;

    if (index == 0)
        cout << "This is a Root." << endl;
    else
    {
        int parent = (index - 1) / 2;
        cout << "Parent = " << arr[parent] << endl;
    }

    return 0;
}
