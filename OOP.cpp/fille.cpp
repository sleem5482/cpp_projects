# include <iostream>
# include<fstream>
using namespace std;

int main (){
 //this first code
/*ofstream sleem("nfile");
char name[10];
int id;
cout <<"enter the student stutus \n";
cout <<"press ctrl z to exit ";
while (cin >>name >>id)
{
   sleem<<name <<"  "<<id <<endl;
}*/
//with fille 2
int arr[20];
int i =0;
ifstream fin("test.txt",ios::binary);
fin.read((char* )&arr,10*sizeof(int));
for (int i = 10; i < 20; i++) arr[i]=i*10;
for (int i = 0; i < 20; i++) cout<<arr[i]<<endl;
fin.close();


}