# include<iostream>
# include<string>
using namespace std ;
struct stinfo
{
    string fname;
string sname ;
string phone;
int age;
};


void contactinfo (stinfo &info)
{
    cout <<"ent first name"<<endl;
    cin >>info.fname;
    cout <<"ent second name"<<endl;cin >>info.sname;
    cout <<"ent phone"<<endl;cin >>info.phone;
    cout <<"ent age"<<endl;cin >>info.age;
    cout <<"\n****************\n";
}
void printinfo(stinfo info)
    {
cout <<"\n*****************\n";
cout <<"first name: "<<info.fname<<endl;
cout <<"second name: "<<info.sname<<endl;
cout <<"phone: "<<info.phone<<endl;
cout <<"age: "<<info.age<<endl;
 cout <<"\n*****************\n";
    }
    void readpersoninfo (stinfo person_info[2])
    { 
        contactinfo (person_info[0]);
           contactinfo (person_info[1]);
    }
    void printpersoninfo(stinfo person_info[2])
    {
       
       printinfo (person_info[0]);
      printinfo (person_info[1]);  
    }
  
 main ()
{
 stinfo person_info[2];
 readpersoninfo(person_info);
 printpersoninfo(person_info);
}