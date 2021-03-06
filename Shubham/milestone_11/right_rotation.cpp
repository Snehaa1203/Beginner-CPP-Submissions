#include<cstdlib>
#include<iostream>

using namespace std;
void right_rotation(int*, int);
void print(int*, int);
int main()
{
    //left rotation of array
    int n, d;

    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of index number " << i << ":\t";
        cin >> arr[i];
    }
    cout << "Left rotation wrt : ";
    cin >> d;
    for(int i=1; i<=d; i++)
        right_rotation(arr, n);

    print(arr, n);


}

void print(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void right_rotation(int *arr, int size)
{
    int temp = arr[size-1], i;
    for(i=size-1; i>=0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}
