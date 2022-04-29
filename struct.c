#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    char name[30];
    int age;
    long ph_no;
    int salary;
}employee;
int main()
{
    int n;
    printf("Enter the no. of employee ");
    scanf("%d",&n);
    employee e[n];
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++)
    {
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%s",e[i].name);
        printf("age: ");
        scanf("%d",&e[i].age);
        printf("phone no.: ");
        scanf("%ld",&e[i].ph_no);
        printf("Salary: ");
        scanf("%d",&e[i].salary);
        printf("\n");
    }
    printf("All Employees Details\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",e[i].name);
        printf("age \t: ");
        printf("%d \n",e[i].age);
        printf("phone no. \t: ");
        printf("%ld \n",e[i].ph_no);
        printf("Salary \t: ");
        printf("%.d \n",e[i].salary);
        printf("\n");
    }
    return 0;
}
