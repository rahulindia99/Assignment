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
 * Author: Rahul kumar
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
     int rollno;
     double cgpa;
     printf("enter name:");
     scanf("%s",name);
     printf("enter rollno:");
     scanf("%d",&rollno);
     printf("enter cgpa:");
     scanf("%lf",&cgpa);
     printf("mr %s,your roll no is %d and your cgpa is %4.2lf",name,rollno,cgpa);
     return 0;
}

// Program End
