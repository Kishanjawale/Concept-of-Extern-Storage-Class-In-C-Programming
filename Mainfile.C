#include<stdio.h>

extern int iValue1; //Accessing the value of iValue1 from  Extern.c file
extern int iValue2; //Accessing the value of iValue2 from  Extern.c file
 int main()
 {
     
     int iAns= iValue1+iValue2;

    printf("Addition of A and  B is %d",iAns);

     return 0;

 }