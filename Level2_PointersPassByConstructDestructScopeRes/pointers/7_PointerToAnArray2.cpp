#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    arr[0] = 12;
    arr[1] = 27;
    arr[2] = 6;
    arr[3] = 86;
    arr[4] = 23;
    
    int *ptr;

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying addresses and values using pointers: "<< endl;
    for (int i = 0; i < 5; ++i)
    {
    	ptr = ptr + i;
        cout << "ptr + " << i << " = "<< ptr <<*ptr <<endl;
    }

    return 0;
}
