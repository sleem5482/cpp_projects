# include<iostream >
# include<vector>
# include<algorithm>
using namespace std ;
int main ()
{
    vector<int > w ={1,2,4,7,90,90 ,1,1,1};
    int v=1;
    int a =count (w.begin (),w.end(),v);
    cout<<"num "<<v<<"remember"<<a ; //to say the number remember how much 
    cout <<"\n====================\n";
    sort (w.begin (),w.end ());
    for(int b :w)
    {
        cout <<b<<"\n" ; //to arrange the number
    }
cout <<"============\n ";
reverse (w.begin (),w.end ());
for(int b :w)
    {
        cout <<b<<"\n" ; //to reverse the number 
    }


}