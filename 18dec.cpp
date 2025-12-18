// nested loop  : 

// amg number in range : 153 

/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int start,end,i,temp ,sum,count; 
    cout<<"enter the start number :"<<endl;
    cin>>start;
    cout<<"enter the end number :"<<endl;
    cin>>end;

    for(i=start; i<=end; i++) // 100 -10000 
    {
        temp =i; 
        count=0;
        while (temp >0 ) // 153 > 0 
        {
            temp = temp /10 ; 
            count++; 
        }
        temp =i; 
        sum=0 ; 
        while (temp >0) // 0  >0 
        {
            long int  r= temp %10;  //r = 1 
            sum =sum +pow(r,count); // sum = 153
            temp = temp /10;   // temp = 0 
        }
        if (sum==i)
        {
            cout<<"amg number :"<<i<<endl;
        }
    }
    return 0; 
}
*/

// harshard number  in range : 
/*
#include<iostream>
using namespace std;
int main()
{
    int  start,end, i,temp,sum; 
    cout<<"enter the start number :"<<endl;
    cin>>start;
    cout<<"enter the end number :"<<endl;
    cin>>end;

    for(i=start; i<=end; i++) // 100 -10000
    {
        temp =i; 
        sum =0 ; 
        while(temp >0 )
        {
            int  r= temp %10; 
            sum =sum +r; 
            temp =  temp /10; 
        }
        if (i %sum ==0)
        {
            cout<<i<<endl; 
        }
    }
    return 0; 

}
*/ 
//100  -10000 disarium number  in range :

/*
*                 *
* *             * *
* * *         * * * 
* * * *     * * * *
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 *
*/   
