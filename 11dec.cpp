/*
loop  :  

1. for  
2. while  
3. do while 
*/

// prime  perfect amg twin  rev pelindrome strong 

//strong number  : 145  ==> 1 24 120 ==> sum =145 
/*
#include<iostream>
using  namespace std; 
int main()
{
    int n,fact,sum=0,temp,r,i;
    cout<<"enter the number :"<<endl;
    cin>>n; 

    temp =n;   //145 
    while(temp >0)  // 0  > 0
    {
        r = temp %10;   // r = 1  %10 =1  
        fact =1 ;    // fact =1 
        for(i=1; i<=r; i++)  // 1 1 <=1 
        {
            fact =fact *i;  // fact =1 
        }
        sum =sum +fact;  // sum =144 +1=145 
        temp = temp /10; // temp =1 /10 =0 

    }
    if (n ==sum) // 145 ==145 
    {
        cout<<"strong number :"<<n<<endl;
    }
    return 0; 
}
*/ 

/*
2. C++ Program to Print All Harshad Numbers Between 1 and 100

A Harshad number is divisible by the sum of its digits.

Example:
18 → digits sum = 1 + 8 = 9
18 % 9 == 0 → Harshad number

step : 
1. take the number
2. temp = n  
3. while (temp > 0 )  
4. r= temp %10 
5 .sum =sum +r 
6. temp =  temp /10 
7. if(n % sum ==0)

*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n,temp ,r,sum=0; 
    cout<<"enter the number :"<<endl;
    cin>>n; 

    temp =n; 
    while (temp >0) 
    {
        r = temp %10;
        sum =sum +r;
        temp =temp /10;
    }
    if (n %sum ==0)
    {
        cout<<"Harshad number :"<<n<<endl;
    }
    return 0; 
}
*/
// que :3 
/*
C++ Program to Print All Disarium Numbers Between 1 and 100

A number is Disarium if:
sum of each digit raised to the power of its position = number
Example: 175 → 1¹ + 7² + 5³ = 175
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,temp , r,sum=0,count= 0; 
    cout<<"enter the number  : "<<endl;
    cin>>n; 

    temp = n; 
    while (temp > 0)
    {
        temp=temp /10 ;
        count ++;
    }
    temp =n; 
    while (temp >0)
    {
        r= temp %10; 
        sum = sum +pow(r,count);
        count --;
        temp = temp /10;
    }
    if (n ==sum)
    {
        cout<<"Disarium number :"<<n<<endl;
    }
    return 0;

}