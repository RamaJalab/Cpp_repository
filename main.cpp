#include <iostream>
#include <cmath>
#include <string>
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
// enum enginder {male,female};
// enum enstatus {single,married};
// struct stName
// {
//  string firstname;
//  string lastname;   /* data */
// };
// struct stAge
// {
//    int Age;
//    string birthday;
//    stName name; /* data */
// };
// struct stStatus
// {
//    enginder ginder;
//    enstatus Status;
//    stAge age; /* data */
// };
// struct stStudy
// {
//     string unv;
//     string certifi;
//     string exper;
//     stStatus status;
//     /* data */
// };
// string code="1234.5678";
// int num1=235;
// double num2=124.256;
// float num3=15.68;
string N="123456789";

int main() {
    cout << N.length() << endl;
    cout << N[2];
    int a=stoi(N);
    a++;
    cout <<a << endl;
   int sum= 5 + stoi(N);
    cout << sum << endl;
    string b="10.5";
    string c="11.8";
    float minus=stof(c)-stof(b);
    cout << minus <<endl;
    int d=round(minus);
    cout << d << endl;
    int e=floor(minus);
    cout << e << endl;
    int f =ceil(minus);
    cout << f << endl;
    string Full_Name;
    cout << "please enter your full name" << endl;
    cin >> Full_Name;
    //getline(cin,Full_Name);
    cout << Full_Name << endl;

    // cout << code << endl;
    // int code_int=stoi(code);
    // cout << code_int <<endl;
    // float code_float=stof(code);
    // cout << code_float << endl;
    // double code_double=stod(code);
    // cout << code_double << endl;
    // string str1,str2;
    // cout << num1 << endl;
    // str1=to_string(num1);
    // cout << str1 << endl;
    // cout << num2 << endl;
    // str2=to_string(num2);
    // cout << str2 << endl;
    // cout << num3 << endl;
    // int num4;
    // num4=int(num3);
    // cout << num4 << endl;
// stStudy person;
// person.status.age.name.firstname="Rama";
// person.status.age.name.lastname="Jalab";
// person.status.age.birthday="1999/8/25";
// person.status.age.Age=26;
// person.status.ginder=enginder::female;
// person.status.Status=enstatus::married;
// person.certifi="A1 Deutsch .. C & PYTHON from corsera";
// person.unv="Mechatronics eng";
// person.exper="Drone project";
// cout << person.status.age.name.firstname << endl;
// cout << person.status.age.name.lastname << endl;
// cout << person.status.age.birthday << endl;
// cout << person.status.age.Age << endl;
// cout << person.status.ginder << endl;
// cout << person.status.Status << endl;
// cout << person.certifi << endl;
// cout << person.unv << endl;
// cout << person.exper << endl;


   
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