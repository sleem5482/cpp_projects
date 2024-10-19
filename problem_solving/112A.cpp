# include<iostream>
# include<string>
# include<cctype>
using namespace std ;
int main ()
{ 
    string a ,b;
   cin >>a >>b;for(char &c :a) c= tolower(c)  ;for (char c: a ) static_cast<int> (c);
for(char &d :b) d= tolower(d);    for (char d: b)static_cast<int> (d);
  if (a>b) cout <<1;
  else if (b>a)cout <<-1;
  else cout <<0;
  
}