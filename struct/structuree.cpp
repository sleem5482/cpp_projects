# include<iostream>
using namespace std ;
struct stadress
{
    string street;
    string city;
};
struct stcontact
{
    string email;
    string phone;
    string age;
};
struct stperson
{
    string firstn;
    string secoundn;
    stadress adress;
    stcontact contact;

};



int main ()
{stperson person;
person.firstn="sleem";
person.secoundn="hashem";
person.adress.street="bani hamid";
person.adress.city="bani seuf";
person.contact.phone="01154825799";
person.contact.age=19;
person.contact.email="jsxijns";
cout<<person.adress.street;
//easy man

}