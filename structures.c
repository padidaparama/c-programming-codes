#include <stdio.h>
#include <stdlib.h>

typedef struct Employee
{
    int Employeenumber;
    float BasicSalary, DA, HRF, PF, TotalSalary;
    char Employeename[100];
    char department[100];
    char designation[100];
}e;

int main()
{
    int i,n,getid,flag=0;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    e emparr[n];
    for(i=0;i<n;i++)
    {
        printf("%d. Enter Employee number:",i+1);
        scanf("%d",emparr[i].Employeenumber);
        printf("%d. Enter Employee name:",i+1);
        scanf("%s",emparr[i].Employeename);
        printf("%d. Enter Employee designation:",i+1);
        scanf("%s",emparr[i].designation);
        printf("%d. Enter Employee department:",i+1);
        scanf("%s",emparr[i].department);
        printf("%d. Enter Employee BasicSalary:",i+1);
        scanf("%f",emparr[i].BasicSalary);
        printf("%d. Enter Employee DA:",i+1);
        scanf("%f",emparr[i].DA);
        printf("%d. Enter Employee HRF:",i+1);
        scanf("%f",emparr[i].HRF);
        printf("%d. Enter Employee PF:",i+1);
        scanf("%f",emparr[i].PF);
        emparr[i].TotalSalary=emparr[i].BasicSalary+emparr[i].DA+emparr[i].HRF+emparr[i].PF;
    }
    printf("Enter the ID of the employee whose details you have to see: ");
    scanf("%d",&getid);
    for(i=0;i<n;i++)
    {
        if(getid==emparr[i].Employeenumber)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Employee not found");
    else
        printf("Employee Number:%d\nName:%s\nDepartment:%s\nDesignation:%s\nBasic Salary:%.2f\nDA:%.2f\nHRF:%.2f\nPF:%.2f\nTotal Salary:%.2f");
}