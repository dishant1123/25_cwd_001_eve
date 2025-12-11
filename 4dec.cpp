/*
data type  : 

1. int  
2. float 
3. char / string  
4. double  
5. bool 
6. long int 
*/
/*
#include<iostream>
using namespace  std; 
int main()
{
    int a=90; 
    float b; 
    cout<<"enter the b value :"<<endl;
    cin>>b;

    cout<<"value  of  a is :"<<a<<endl;
    cout<<"value  of  b is :"<<b<<endl;
    
    return 0; 
}
*/

// switch  : 
/*
menu driven  : 

1. addition  
2. sub
3. mul 

switch (choice)
{
    case 1: 

    default :
        cout<<
        break
 }

conditional statement : 

if (con)
{
cout<< 
}
else 
{
cout<<
}

==========================

if (con)
{
cout<<
}
else if (con)
{
cout<<
}
else 
{
cout<<
}
*/

// que  : 
/*
Write a C++ program to calculate the monthly gross pay, annual income, and income tax of an employee using the following rules: 
ask user to enter the  grade and city type. 

1. Salary Components
Gross Pay =
Basic Pay + House Rent Allowance (HRA) + Dearness Allowance (DRA) + Other Allowances + Transport Allowance (TA) – Professional Tax – Provident Fund (PF)

| Grade | Basic Pay (₹) | Other Allowances (₹) |
| ----- | ------------- | -------------------- |
| A     | 60000         | 8000                 |
| B     | 50000         | 7000                 |
| C     | 40000         | 6000                 |
| D     | 30000         | 5000                 |
| E     | 20000         | 4000                 |
| F     | 10000         | 3000                 |

2. Constants & Formulas

Professional Tax = ₹200
Transport Allowance TA = ₹900
Provident Fund PF = 0.11 × Basic Pay
Dearness Allowance DRA = 0.5 × Basic Pay

HRA depends on city type:
City 1 (Tier 1) → HRA = 0.30 × Basic Pay
City 2 (Tier 2) → HRA = 0.20 × Basic Pay
City 3 (Tier 3) → HRA = 0.10 × Basic Pay 

3. Annual Income
Annual Income = Gross Pay × 12 

4. Income Tax Slabs (AY 2022–23)
| Annual Income           | Tax                                    |
| ----------------------- | -------------------------------------- |
| Up to ₹2,50,000         | 0%                                     |   // 8lpa  =12500 
| ₹2,50,001 – ₹5,00,000   | 5% of (Income – 2,50,000)              |
| ₹5,00,001 – ₹7,50,000   | 10% of (Income – 5,00,000) + 12,500    | // 25000+12500 +7500 =45000 
| ₹7,50,001 – ₹10,00,000  | 15% of (Income – 7,50,000) + 37,500    |
| ₹10,00,001 – ₹12,50,000 | 20% of (Income – 10,00,000) + 75,000   |// 1050000
| ₹12,50,001 – ₹15,00,000 | 25% of (Income – 12,50,000) + 1,25,000 |
| Above ₹15,00,001        | 30% of (Income – 15,00,000) + 1,87,500 |

*/
#include<iostream>
using namespace std;
int main()
{
    char grade; 
    int city; 
    float basic =0 ,other =0; 
    cout<<"enter the grade :(A,B,C,D,E,F)"<<endl;
    cin>>grade; 

    cout<<"enter the city type :(1,2,3)"<<endl;
    cin>>city; 
    // switch grade; 
    switch(grade)
    {
        case 'A':
            basic =60000;
            other =8000;
            break;
        case 'B':
            basic =50000;
            other =7000;
            break;
        case 'C':
            basic =40000;
            other =6000;
            break;
        case 'D':
            basic =30000;
            other =5000;
            break;
        case 'E':
            basic =20000;
            other =4000;
            break;
        case 'F':
            basic =10000;
            other =3000;
            break;
    }
    // for  HRA switch :
    float hra;
    switch(city)
    {
        case 1:
            hra =0.30*basic;
            break; 
        case 2:
            hra =0.20*basic;
            break;
        case 3: 
            hra =0.10*basic;
            break;
    }
    float da = 0.5*basic; 
    float pf =0.11*basic;
    float ta = 900 ; 
    float prof_tax=200; 

    float gross_pay = basic +hra+da +other +ta -prof_tax -pf;
    float annual_income = gross_pay*12;

    // income tax calculation : 


}
/*

output  : 
select  A grade : 
city  type  :1 
gross pay :110100. 0 
annula income  : 1321200.00 
income tax  :142800 

*/
