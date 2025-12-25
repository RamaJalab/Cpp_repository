#include <iostream>
using namespace std;
string name="Rama";
int age=26;
float monthlysalary=5.500;
char gender='f';
bool is_maried=true;
string your_work;
int your_birth_month;
int a=25,b=5;

int main() {
    cout << "a+b= " << a+b << endl;
    cout << "a-b= " << a-b << endl;
    cout << "a*b= " << a*b << endl;
    cout << "a/b= " << a/b << endl;
    cout << "size of int " << sizeof(int) << endl;
    cout << " INT Range : (" << INT_MIN <<"," << INT_MAX <<")\n";
    cout << "HelloWorld!\n" ;
    cout << "name is " << name << "\n";
    cout << "age is "  <<age << endl;
    cout << "monthlysalary is " <<monthlysalary << endl;
    cout << "yearlysalary is " << monthlysalary*12  << endl;
    cout <<"gender is " << gender << endl;
    cout <<"is maried? " << is_maried << endl; 
    cout << "your birth month is "  << your_birth_month << endl;
    

    return 0;
}