#include <iostream>
#include <cmath>
using namespace std;
// string name="Rama";
// int age=26;
// float monthlysalary=5.500;
// char gender='f';
// bool is_maried=true;
// string your_work;
// int your_birth_month;
// float a=2,b=5,g,h,r,m,u;
// bool A=1,B=0;
// int q,s;
// double area;
// double sec,minute,hour,day;
enum enginder {male,female};
enum enstatus {single,married};
struct stName
{
 string firstname;
 string lastname;   /* data */
};
struct stAge
{
   int Age;
   string birthday;
   stName name; /* data */
};
struct stStatus
{
   enginder ginder;
   enstatus Status;
   stAge age; /* data */
};
struct stStudy
{
    string unv;
    string certifi;
    string exper;
    stStatus status;
    /* data */
};



int main() {
stStudy person;
person.status.age.name.firstname="Rama";
person.status.age.name.lastname="Jalab";
person.status.age.birthday="1999/8/25";
person.status.age.Age=26;
person.status.ginder=enginder::female;
person.status.Status=enstatus::married;
person.certifi="A1 Deutsch .. C & PYTHON from corsera";
person.unv="Mechatronics eng";
person.exper="Drone project";
cout << person.status.age.name.firstname << endl;
cout << person.status.age.name.lastname << endl;
cout << person.status.age.birthday << endl;
cout << person.status.age.Age << endl;
cout << person.status.ginder << endl;
cout << person.status.Status << endl;
cout << person.certifi << endl;
cout << person.unv << endl;
cout << person.exper << endl;


   
    // mystatus=enstatus::single;
    // myginder=enginder::female;
    // cout << mystatus << " " << myginder;


    //  struct car
    // {
    //  string brand;
    //  string  model;
    //  int year;  /* data */
    // };
    // car mycar;
    // mycar.brand="BMW";
    // mycar.model="X5";
    // mycar.year=2000;
    // cout << mycar.brand << " " << mycar.model << " " << mycar.year << endl;
    // struct CV
    // {
    //  string name;
    //  int age;
    //  string study;
    //  int birthmonth;  /* data */
    // };
    
    // CV yourcv;
    // cout << "your name: " <<endl;
    // cin >> yourcv.name;
    // cout << "your age:" << endl;
    // cin >> yourcv.age;
    // cout << "your birthmonth:" <<endl;
    // cin >> yourcv.birthmonth;
    // sec=5000;
    // minute=600.75;
    // hour=70.5;
    // day=5.25;
    // sec=sec+(minute*60)+(hour*3600)+(day*24*3600);
    // cout << sec << endl;
    
    // cout << "enter s" << endl;
    // cin >> s;
    // cout << "enter q" << endl;
    // cin >> q;
    // area=s*(sqrt(pow(q,2)-pow(s,2))); 
    // cout <<  "area =" << area << endl;
    // cout << (A && B) << endl;
    // cout << (A || B) << endl;
    // cout << !(A && B) << endl;
    // cout << !(A || B) << endl;
    // // int w=10;
    // // cout << "w : "  << w << endl;
    // //  int z=w++;
    // // cout <<"z=w++ : " << z << endl;
    // //  cout <<"w : " << w << endl;
    // // z=++w;
    // // cout << "z=++w : " << z << endl;
    // // cout <<"w : " << w << endl;
    // // z=w--;
    // //   cout << "z=w-- : " << z << endl;
    // // cout <<"w : " << w << endl;
    // // z=--w;
    // //   cout << "z=--w : " << z << endl;
    // // cout <<"w : " << w << endl;
    // // cout << (a==b) << endl;
    // // cout << (a>=b) << endl;
    // // cout << (a<=b) << endl;
    // // cout << (a!=b) << endl;

    // //cout << "enter n1" << endl;
    // //cin >> r;
    // //cout << "enter n2" << endl;
    // //cin >> m;
    // u=r;
    // r=m;
    // m=u;
    // cout << "r : " << r << endl << "m : " << m << endl;

    // cout << "a+b= " << a+b << endl;
    // cout << "a-b= " << a-b << endl;
    // cout << "a*b= " << a*b << endl;
    // cout << "a/b= " << a/b << endl;
    // //cout << "please enter num1" << endl;
    // //cin >> g ;
    // //cout << "please enter num2" << endl;
    // //cin >> h;
    // cout << "g+h= " << g+h << endl;
    // cout << "g-h= " << g-h << endl;
    // cout << "g*h= " << g*h << endl;
    // cout << "g/h= " << g/h << endl;
    // cout << "size of int " << sizeof(int) << endl;
    // cout << " INT Range : (" << INT_MIN <<"," << INT_MAX <<")\n";
    // cout << "name is " << name << "\n";
    // cout << "age is "  <<age << endl;
    // cout << "monthlysalary is " <<monthlysalary << endl;
    // cout << "yearlysalary is " << monthlysalary*12  << endl;
    // cout <<"gender is " << gender << endl;
    // cout <<"is maried? " << is_maried << endl; 
    // cout << "your birth month is "  << your_birth_month << endl;
    

    return 0;
}