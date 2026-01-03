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
// string N="123456789";
// void fun1()
// {
//     cout << "this is my first function in cpp " << endl;
// }
// void fun2()
// {
//     cout << "my favourite hobby is coding :-)" << endl;
// }
// string fun3()
// {
//     cout << "this function return string variable\n";
//     return "this is my first returing function\n";
// }
// int fun4()
// {
//     int a=10,b=5;
//     cout << "this function return multi between a & b\n";
//     return a*b;
// }
// float fun5()
// {
//     float c=6.4,d=3.7;
//     cout << "this function return minus between c & d \n";
//     return ceil(c-d);
// }
// int fun6()
// {
//    int y=fun4()+fun5();
//     return y;
// }
// float fun7()
// {
//     float num1,num2;
//     cout << "enter num1 \n";
//     cin >> num1;
//     cout << "enter num2 \n";
//     cin >> num2;
//     return num1/num2;
// }
// int fun8(int n1, int n2)
// {
//     return n1+n2;
// }
// int f=50;
// int fun9()
// {
//     int f=5;
//     cout << "f in fun9 =" << f <<endl;
//     return f;
// }
// void  Swapfun(int &a,int &b,int &c)
// {
//     c=a;
//     a=b;
//     b=c;
//     cout << " a = " << a << "  "  << "b = " << b << endl;
// }
// void incfun(int x,int &r)
// {
//     r=x+1;
//     cout << " r =" << "  " << r << endl;
// }
// void resfun(int &n1,int &n2,int &n3)
// {
//     n1=n2=n3=0;
//     cout << "n1 =" << n1 << "n2 =" << n2 << "n3 =" << n3 <<endl;
// }
// struct stper
// {
//   string fullname;
//   int age;
//   char gender;  /* data */
// };
// void READperfun(stper &info ) 
// {
//     cout << "enter fullname : \n";
//     getline(cin, info.fullname);
//     cout << "enter age : \n";
//     cin >> info.age;
//     cout << "enter gender : \n";
//     cin >> info.gender;

// }
// void PRINTperfun(stper info)
// {
//     cout <<"****************************\n";
//     cout << "fullname is : " << info.fullname <<endl;
//     cout << "age is :" << info.age << endl;
//     cout << "gender is :" << info.gender <<endl;
//     cout <<"****************************\n";
// }
// void readfun(float x[30])
// {
//     cout << "enter x[0] =\n";
//     cin >> x[0];
//     cout << "enter x[1] =\n";
//     cin >> x[1];
//     cout << "enter x[2] =\n";
//     cin >> x[2];
// }
// float avefun(float x[3],float &ave)
// {
//     ave=  (x[0]+x[1]+x[2])/3;
//     return ave;
// }
// void printfun(float ave)
// {
//     cout << "ave is :" << ave;
// }
//int x[3];
// struct stper
// {
//   string firstname;
//   string lastname;
//   int age;
//   char gender;  /* data */
// };
// void infofun(stper &info)
// {
//     cout << "enter first name : \n";
//     cin.ignore(1,'\n');
//     getline(cin, info.firstname);
//     cout << "enter last name : \n";
//     getline(cin,info.lastname);
//     cout << "enter age : \n";
//     cin >> info.age;
//     cout << "enter gender : \n";
//     cin >> info.gender;  
// }
// void READperfun(stper person[2] ) 
// {
//     infofun(person[0]);
//     infofun(person[1]);
   
// }
// void printfun(stper info)
// {
//     cout <<"****************************\n";
//     cout << "first name is : " << info.firstname <<endl;
//     cout << "last name is :"  << info.lastname << endl;
//     cout << "age is :" << info.age<< endl;
//     cout << "gender is :" <<info.gender <<endl;
//     cout <<"****************************\n";

// }
// void printperfun(stper person[2])
// {
//     printfun(person[0]);
//     printfun(person[1]);
// }
enum encolor {red=1,blue=2,green=3,yellow=4};
int main() {
int s;
encolor color;

cin >>s;

color=(encolor)s;
if(color==encolor::red)
{
    system("color 4F");
}
else if(color==encolor::blue)
{
    /* code */system("color 1F");
}
else if(color==encolor::green)
{
    /* code */system("color 2F");
}
else if(color==encolor::yellow)
{
    /* code */system("color F");
}
else{
    cout << "Sorry:-( \n";
}
    // int x=6;
    // if(x<2)
    // {
    //     cout << "x>2\n";
    // }
    // else if(x==5)
    // {
    //     cout << "x<5\n";/* code */
    // }
    // else if(x>3)
    // {
    //  cout << "ok :-)\n";   /* code */
    // }
    
    
    // stper person[2];
    // READperfun(person);
    // printperfun(person);
  //  float x[3];
    // float ave;
    // readfun(x);
    // avefun(x,ave);
    // printfun(ave);

    // cout << "enter x[0] =\n";
    // cin >> x[0];
    // cout << "enter x[1] =\n";
    // cin >> x[1];
    // cout << "enter x[2] =\n";
    // cin >> x[2];
    // int average_x;
    // average_x=(x[0]+x[1]+x[2])/3;
    // cout << "average_x =" << average_x <<endl;
    // stper perinfo;
    // READperfun(perinfo);
    // PRINTperfun(perinfo);
    
//     int s=5;
//     int q=10;
//     int m;
//    Swapfun(s,q,m);
//     cout <<" s = " << s <<  "  "  << "q = " << q << endl;
//     int y=5,p;
//     incfun(y,p);
//     cout << "p =" << "  " << p << endl;
//     int a,b,c;
//     resfun(a,b,c);
//     cout << "a =" << a << "b = " << b <<"c = " << c <<endl;
//     int f=20;
//     cout << "local f =" << f << endl;
//     cout << "global f=" << ::f << endl;
//     fun9();
//     fun1();
//     fun2();
//     fun3();
//     //fun4();
//    // fun5();
//    //fun7();
//    int n3=fun8(5,10);
//    cout << n3 << endl;
//     int g=fun5();
//     cout << g << endl;
//     int res=fun4() + 5;
//     cout << res << endl;
//     int x=fun6();
//     cout << x << endl;
//     float z=fun7();
//     cout << z <<endl;

//     cout << N.length() << endl;
//     cout << N[2];
//     int a=stoi(N);
//     a++;
//     cout <<a << endl;
//    int sum= 5 + stoi(N);
//     cout << sum << endl;
//     string b="10.5";
//     string c="11.8";
//     float minus=stof(c)-stof(b);
//     cout << minus <<endl;
//     int d=round(minus);
//     cout << d << endl;
//     int e=floor(minus);
//     cout << e << endl;
//     int f =ceil(minus);
//     cout << f << endl;
//    string Full_Name;
//    int age;
//    string country;
//    char gender;
//    cout << "enter your gender \n";
//    cin >> gender;
//    cout << "please enter your full name \n";
//    cin >> Full_Name;
//    cin.ignore(1,'\n');
//     getline(cin,Full_Name);
//     cout << "enter your age \n";
//     cin >> age;
//     cout << "enter your country \n";
//     cin >> country;

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