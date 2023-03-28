/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author:Rahul kumar
 * Title: project engineer
 * Last Modified Date: 20 march 2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
   char name[20];
   printf("enter name:");
   scanf("%s",name);
   int age;
   printf("enter age:");
   scanf("%d",&age);
   double cgpa;
   printf("enter cgpa:");
   scanf("%lf",&cgpa);
   printf("mr. %s,you are %d years old and your cgpa is %4.2lf.\n",name,age,cgpa); 
     return 0;
}

// Program End
