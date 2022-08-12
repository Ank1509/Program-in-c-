// Create a class which stores name, roll number and total marks for a student.
// Input the data for a student and display it.

#include<iostream>
#include<string.h>
using namespace std;
class stu{
	char name[30];
	int roll;
	float total;
	public:
		void getdata(char *x,int y,float z){
			strcpy(name,x);
			roll=y;
			total=z;
		}
		void showdata(){
			cout<<"NAME:"<<name<<endl;
			cout<<"ROLL:"<<roll<<endl;
			cout<<"TOTAL:"<<total<<endl;
		}
};
int main(){
	stu s;
	s.getdata("RAM",21053268,450);
	s.showdata();
}