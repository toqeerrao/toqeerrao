#include <iostream>
using namespace std;
class Student
{
	protected:
    string Name;
    int Roll_No;
    int Avg;
    public:
    void set_data()
 {
    Name =  "Toqeer";
    Roll_No = 43;
    Avg = 15;
 }
 void print_data()
 {
 	cout<<"Name of Student is = "<<Name<<endl;
 	cout<<"Roll Number of Student is = "<<Roll_No<<endl;
 	cout<<"Avg of Student is = "<<Avg<<endl;
 	
 }
};

class Graduate_Student : public Student
{
	protected:
	int Semester;
	int Year;
	public:
		void set_data1()
		{
			set_data();
			Semester = 2;
			Year = 1;
		}
		void print_data1()
		{
			print_data();
			cout<<"Semester of Student is = "<<Semester<<endl;
			cout<<"Year of Study of Student is = "<<Year<<endl;
		}
};

class BS_Student :public Graduate_Student
{
	int newid;
	public:
		void set_data2()
		{
			set_data1();
			newid = 5654;
		}
		void print_data2()
		{
			print_data1();
			cout<<"New id of Student is = "<<newid<<endl;
		}
};
 
int main() 
{
    Student Toqeer;
    Toqeer .set_data();
    Toqeer .print_data();
    
    cout<<"______________"<<endl;
    cout<<"              "<<endl;
    
    BS_Student toqeer;
    toqeer.set_data2();
    toqeer.print_data2();
    return 0;
}
