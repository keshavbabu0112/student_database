#include "header.h"

void showlist(STUD *ptr)
{
    if(ptr==0)
    {
        printf("\n*************************************************\n");
        printf("No data to print\n");
        printf("\n*************************************************\n");
        return;
    }

    printf("\n============================================================\n");
    printf("%-10s %-20s %-10s\n","ROLLNO","NAME","MARKS");
    printf("============================================================\n");

    while(ptr)
    {
        printf("%-10d %-20s %-10.2f\n",
                ptr->rollno,
                ptr->name,
                ptr->marks);

        ptr=ptr->next;
    }

    printf("============================================================\n");
}
