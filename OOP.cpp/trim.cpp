# include<iostream>
#include<vector>
using namespace std ;
//trim chars for Left ,Right and All
string trim_string(string st,string direction="All",char ch=' '){
string result;
int firstCharsCount=0;
int lastCharsCount=0;
for (int i=0 ;i<st.length();i++){
if(st[i]==ch){
firstCharsCount ++;
}else{
    break;
}
}
for (int i=st.length()-1;i>=0 ;i--){
if(st[i]==ch){
lastCharsCount ++;
}else{
    break;
}
}
if (direction=="Left" || direction=="left"){
    for (int i=firstCharsCount; i<st.length();i++){
        result+=st[i];
    }
} else if(direction=="Right" ||direction=="right"){
for (int i=0; i<st.length()-lastCharsCount;i++){
        result+=st[i];
    }
    }
    else if(direction=="All" ||direction=="all"  ){
for (int i=firstCharsCount; i<st.length()-lastCharsCount;i++){
        result+=st[i];
    }
    }
return result;
}
int main ()
{
cout<<trim_string("**MOHAMED**","Left",'*')<<endl;
cout<<trim_string("***SLEEM***","all",'*')<<endl;

}
