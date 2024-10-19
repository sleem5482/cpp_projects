# include<iostream>
#include<cstring>
using namespace std ;
/*in array of string
 strcat_s(arr1,arr2)this equal(arr1+ arr2)
strcpy_s(arr1,arr2) this equal (arr1=arr2)
*/
int main ()
{
char a[]="A";
char b[]="B";//if a>b=1 ,a<b=-1, a equal b=0 
cout<<strcmp(a,b);
}