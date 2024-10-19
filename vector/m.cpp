# include<iostream >
# include<vector>
using namespace std ;
void sleem (vector <int> nums )
{
    int res =0;
    for (int i=0 ;i<nums.size() ;i++)
    {
        res+= nums [i];
    }
    cout <<res ;
}
int main ()
{
    int nums []= {1, 2, 3,4 ,5};  //array <int, 5> nums= {1,2,3,4,5}
    cout <<nums [1] <<"\n";
    nums [1]=70;  //nums [1 ]=70
    cout<<nums [1];
    cout<< "\n ============\n";
   // int equal [ ]= {1,2,3,4,5,6,7,8,9} 
   vector<int > equal = {1,2,3,4,5,6,7,8,9};
   sleem ( equal);

}