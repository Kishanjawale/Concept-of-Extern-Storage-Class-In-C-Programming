#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//Description:This  application program Demonstrate  the concept of extern storage class in C Programming
//We can use this concept of extern storage class when we have to divide our code in two or more files.
//@Author:Kishan Jawale
//Date: 30/03/2022
/////////////////////////////////////////////////////////////////////////////////////////
 
extern int iValue1; //Accessing the value of iValue1 from  Extern.c file
extern int iValue2; //Accessing the value of iValue2 from  Extern.c file
 int main()
 {
     int iAns= iValue1+iValue2;

     printf("Addition of A and  B is %d",iAns);

     return 0;

 }
