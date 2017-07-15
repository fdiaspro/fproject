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
    


int func4(void) { 
      string str1, str2; 
      cout << "Enter 2 lines of text:" << endl; 
	getline(cin,str1); 
	getline(cin,str2); 
	cout << "You've entered:'" << endl; 
	if(str1 == str2) 
		cout << "\"" << str1 << "\" == \"" << str2 << "\"" << endl; 
	else if(str1 > str2) 
		cout << "\"" << str1 << "\" > \"" << str2 << "\"" << endl; 
	else 
		cout << "\"" << str2 << "\" > \"" << str1 << "\"" << endl; 
      return 0; 
}


void printInfo(string &s) { 
        cout << "length = " << s.length() << endl; 
        cout << "capacity = " << s.capacity() << endl; 
        cout << "max size = " << s.max_size() << endl; 
        cout << "---------" << endl; 
} 

int func5(void) { 
        string TheString = "content"; 
        printInfo(TheString); 
        for(int i = 0; i < 10; i++) 
                TheString += TheString; 
        printInfo(TheString); 
        return 0; 
} 
int func6() {
	string S = "ABC"; 
	cout << S.compare(1,1,"BC") << S.compare(2,1,S,2,2) << endl;
	return 0;
}



class base {
    string S;
public:
      void print() { std::cout << "base" << std::endl ;} ;
};

class derived :public base {
    string S;
public:
      void print() { std::cout << "derived" << std::endl ;} ;
};


   string fun7(string &t, string s = "", int r = 2) {
        while(--r)
            s += s;
        t = t + s;
        return s;
    }
    
    int fun8() {
        string name = "x";
        cout << fun7(name, name);
        cout << name << endl;
        return 0;
    }
    
 


int main(void) {
    int pow = 1;
        string s1 = "1";
        string s2 = "12";
        
        base* b= new derived;
        derived* d = static_cast<derived*> ( new base );
        b->print();
        d->print();
        
        cout << endl<<s1.compare(s2)<<endl;
        fun8();
    return 0;
    for(int exp = 0; exp < 16; exp++) {
        cout << "2 to the power of " << exp << " is " << pow << endl;
        pow *= 2;
    }
    return 0;
}
