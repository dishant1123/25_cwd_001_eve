// print  hello  without using  namespace std 
/*
#include<iostream>
using namespace std;
int main()
{
    std ::cout<<"hello"<<std ::endl;
    std ::cout<<"honey"; 
    return 0;
}
    */ 
// print  hello  with using  namespace std

/*
#include<iostream>
using  namespace std; 
int main()
{
    cout<<"hello"<<endl;
    cout<<"honey";
    return 0; 
}
    */ 

// variable  declaration  rules : 

/*
int a12 =90;   ==> correct 
int  12a =90  ==> not 
int  _=89  ==> correct  
int  a@s = 78  ==> not 

rules : 

1. variable  start digit , special character ==>  it is not valid ==> except ==>_
2. variable end digit ==> valid 
3. variable  end special character ==> not valid
*/

#include<iostream>
using namespace std;
int main()
{
    int __a__=90;
    cout<<"value of :"<<__a__<<"\n";
    cout<<"my name jani";
    return 0;
}