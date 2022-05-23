//Sahil Sah
//sah.sa@northeastern.edu

/*C Program to read and print the employee details using structure and dynamic memory allocation*/
#include <stdio.h>
#include <stdlib.h>
/*structure to hold the details of an employee*/
typedef struct employee
{
    int empId;
    char Name[100];
    char Designation[100];
    char Dept[10];

}employee_t;
/* Read the employee details using scanf*/
void readData(int n, employee_t* s)
{
    int i;
    for( i = 0; i < n; i++){
        printf("Enter the employeeId, Name,designation and Department of Employee %d:\n", i+1);
	scanf("%d",&s[i].empId);
	scanf("%s",&s[i].Name);
	scanf("%s",&s[i].Designation);
	scanf("%s",&s[i].Dept);	     

    }
    
}
/* Function to print the employee details*/
void display(int n, employee_t * s)
{
    int i;
    for( i = 0; i < n; i++){
         printf("The details of Employee %d\n", i+1);
         printf("empID: %d\n",s[i].empId);
         printf("Name: %s\n",s[i].Name);
         printf("Designation: %s\n",s[i].Designation);
         printf("Department: %s\n",s[i].Dept);

    }
    
    
}

/*----------Main Program--------*/
int main()

{

	int n; //number of employees
	printf("Enter the number of employees\n");
	scanf("%d",&n);    
	employee_t *s = (employee_t*)malloc(n* sizeof(employee_t));
	if(s != NULL){
	     readData(n,s);
	     display(n,s);
	     free(s);			
	}
	return 0;
}

