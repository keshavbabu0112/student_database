#include "header.h"

char func_exit(void)
{

    char option;
    printf("S/s : save and exit\nE/e : exit without saving\n");
    scanf(" %c",&option);

    return option;
}

void save_details(STUD *ptr)
{
	if(ptr==0)
	{
		printf("\n*********************\n");
        printf("File saved successfully with no records\n");
		printf("\n*********************\n");
	}
	else
    {
		printf("\n*********************\n");
        printf("\nFile saved successfully\n");
        printf("\n*********************\n");
    }
	FILE *fp;
	fp=fopen("student.dat","w");

	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}

	fclose(fp);

}

void sort_details(STUD *ptr)
{
    if(ptr==0)
    {
		printf("\n*********************\n");
		printf("No nodes to search\n");
		printf("\n*********************\n");
		return;
    }

    char option;
    printf("\nN/n : sort by name\nP/p : sort by percentage\n");
    scanf(" %c",&option);

    int i,j,c=count_node(ptr);
    STUD temp,*p1,*p2;

    if(option=='p' || option == 'P')
    {
    	p1=ptr;
        for(i=0;i<c-1;i++)
        {
            p2=p1->next;
            for(j=0;j<c-1-i;j++)
            {
                if(p1->marks > p2->marks)
                {
                    temp.rollno=p1->rollno;
                    strcpy(temp.name,p1->name);
                    temp.marks=p1->marks;

                    p1->rollno=p2->rollno;
                    strcpy(p1->name,p2->name);
                    p1->marks=p2->marks;

                    p2->rollno=temp.rollno;
                    strcpy(p2->name,temp.name);
                    p2->marks=temp.marks;
                }
                p2=p2->next;
            }
            p1=p1->next;
        }
        printf("\nSorted according to percentage\n");
    }
    else if(option =='n' || option == 'N')
    {
    	p1=ptr;
        for(i=0;i<c-1;i++)
        {
            p2=p1->next;
            for(j=0;j<c-1-i;j++)
            {
                if(strcmp(p1->name,p2->name) > 0)
                {
                    temp.rollno=p1->rollno;
                    strcpy(temp.name,p1->name);
                    temp.marks=p1->marks;

                    p1->rollno=p2->rollno;
                    strcpy(p1->name,p2->name);
                    p1->marks=p2->marks;

                    p2->rollno=temp.rollno;
                    strcpy(p2->name,temp.name);
                    p2->marks=temp.marks;
                }
                p2=p2->next;
            }
            p1=p1->next;
        }
        printf("\nSorted according to name\n");

    }
    else
    {
        printf("\nInvalid option\n");
    }
}

int count_node(STUD *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}

void reverse_records_list(STUD **ptr)
{
    if(*ptr==0)
    {
		printf("\n*********************\n");
		printf("No nodes to reverse list\n");
		printf("\n*********************\n");
		return;
    }

    STUD *prev=0,*curr=*ptr,*next=0;

    while(curr)
    {
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    *ptr=prev;

    printf("\nSuccessfully reversed the list\n");
}






























