// Create a class complex which stores real and imaginary part of a complex
// number. Input 10 complex numbers and display them.

#include<iostream>
using namespace std;
class Complex{
public:
    int realNumber;
    int imagNumber;
    
     void input()
    {
        cout<<"Enter the real part of the complex number: \n";
		cin>>realNumber;
	        cout<<"Enter the imaginary part of the complex number: \n";
	
        cin>>imagNumber;
    }


    void display()
    {
        cout<<realNumber<<"+"<<imagNumber<<"i"<<endl;
    }


    
    };
int main()
    {
        Complex arr[5];
        cout<<"Enter 5 complex numbers\n";
		for(int i=0; i<5; i++){
			cout<<"Complex number:  "<<(i+1)<<endl;
			arr[i].input();
        
		}
		cout<<"The 5 entered complex numbers are\n";
		for(int i=0; i<5; i++){
			arr[i].display();
		}
    return 0;
    }