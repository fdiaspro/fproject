#include <iostream>

using namespace std;

 
int func2(void)
{
	int rows = 5, cols = 5;
	int **arr;
	// allocate and initialize the array
	arr = new int * [rows];
	for (int r = 0; r < rows; r++) {
		arr[r] = new int[r + 1];
		for(int c = 0; c <= r; c++)
			arr[r][c] = (r + 1) * 10 + c + 1;
	}
	// print the array
	for(int r = 0; r < rows; r++) {
		for(int c = 0; c <= r; c++)
			cout << arr[r][c] << " ";
		cout << endl;
	}
	// free the array
	for(int r = 0; r < rows; r++)
		delete [] arr[r];
	delete [] arr;
	return 0;
}

int func3(void){
	float f = 123.456;
	float g = 1e100;
	int i = f;
	int j = g;
        
	cout << i << endl; 
	cout << j << endl; 
	return 0; 

}

void func()
{
    cout << "This computing enviroment uses:" << endl;
    cout << sizeof(char) << " bytes for chars" << endl;
    cout << sizeof(short int) << " bytes for shorts" << endl;
    cout << sizeof(int) << " bytes for ints" << endl;
    cout << sizeof(long int) << " bytes for longs" << endl;
    cout << sizeof(float) << " bytes for floats"  << endl;
    cout << sizeof(double) << " bytes for doubles"  << endl;
    cout << sizeof(bool) << " byte for bools" << endl;
    cout << sizeof(int *) << " bytes for pointers" << endl;
    return ;
}
    

int main(void) {
    int pow = 1;
    
    func3();
    
    for(int exp = 0; exp < 16; exp++) {
        cout << "2 to the power of " << exp << " is " << pow << endl;
        pow *= 2;
    }
    return 0;
}
