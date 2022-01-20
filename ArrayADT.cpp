#include <iostream>
using namespace std;
 
class Array{
 
private:
    int* A; //here we can also customise the size of array, not neccessary to take it as pointer.
    int size;
    int length;
 
public:
    Array(int size){
        this->size = size;
        A = new int [size];
    }
 
    void create(){
        cout << "Enter number of elements: " << flush;
        cin >> length;
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++){
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }
 
    void display(){
        for (int i = 0; i < length; i++){
            cout << A[i] << " ";
        }
    }
 
    ~Array(){
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

int main() {
 
 //This is main function
    Array arr(10);
    arr.create();
    arr.display();
 
    return 0;
}
