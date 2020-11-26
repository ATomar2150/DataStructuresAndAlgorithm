/*
Operations:
1. Display
2. Add(x) / Append(x)
3. Insert (index, x)
4. Delete (index)
5. Search
6. Get (index)
7. Set (index, x)
8. Max() / Min()
9. Reverse()
10. Shift() / Rotate()
*/

#include <iostream>
using namespace std;
 
class Array
{
 
private:
    int* A;
    int size;
    int length;
 
public:
    Array(int size)
    {
        this->size = size;
        A = new int [size];
    }
 
    void create()
    {
        cout << "Enter number of elements: " << flush;
        cin >> length;
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }
 
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
    }
 
    ~Array()
    {
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

    int main() 
    {
        Array arr(10);
        arr.create();
        arr.display();
        
        return 0;
    }