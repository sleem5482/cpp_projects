# include <iostream>
using namespace std;
class rectangle 
{
    int *width ,*height ;
    public:
    rectangle (int ,int );
    ~rectangle();
    int area ()
    {
        return *width * *height;
    }
};
rectangle ::rectangle(int a ,int b)//we add new in constractor
{
    width=new int ;
    height=new int ;
    *width=a;
    *height=b;
}
rectangle::~rectangle()//we add delete in destractor 
{
    delete width ;
    delete height;
}
int main()
{
   rectangle x(10 ,10);
   cout <<x.area(); 
}