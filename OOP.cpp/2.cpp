# include<iostream>
using namespace std ;
class triangler
{
private:
float base ;
float height ;
public:
triangler(const triangler &a){//this copy constractor we use to declared attributes
base=a.base;
height =a.height;
}
triangler(){
    base =0;
    height=0;
}
void setWH(float n,float h){
   base=n;height=h ;  
}
triangler(float n,float h){
    cout <<"one place is base and another is height "<<endl;
 base=n;height=h ;
}
float area (){
    return 0.5*height*base;
}
void print (){
cout <<"base = "<<base<<"\n height = "<<height<<endl;
cout <<"area = 1/2 *"<<base<<" * "<<height<<" = "<<area();
}

};

int main ()
{  
triangler x(10 ,20);/*triangler b;
b.setWH(10,10);
b.print();
//cout<<x.area();
x.print();*/
triangler c(x);//here in copy constructor we must add object
c.print();
}