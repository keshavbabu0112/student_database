#include "header.h"
void modify_record(STUD **ptr)
{
    if(*ptr==0)
    {
		printf("\n*********************\n");
		printf("No data to modify\n");
		printf("\n*********************\n");
		return;
    }

    char option;
    printf("\nEnter which record to search for modification\nR/r : search a rollno\nN/n : search a name\nP/p : percentage based\n");
    scanf(" %c",&option);

    STUD *temp=*ptr;

    if(option=='r' || option == 'R')
    {
        int rollno;
        printf("Enter rollno: ");
        scanf("%d",&rollno);

        while(temp)
        {
                if(temp->rollno==rollno)
                {
                    break;
                }
        temp=temp->next;
        }

        if(temp==0)
        {
            printf("\nNo rollno found to modify data!!\n");
        }
        else
        {
            printf("Enter new name and marks: ");
            scanf("%s%f",temp->name,&temp->marks);
            return;
        }
    }
    else if(option=='n' || option == 'N')
    {
		char name[20];
		int count=0;
		printf("Enter Name: ");
		scanf("%s",name);
		while(temp)
		{
			if(strcmp(temp->name,name)==0)
			{
			    printf("%d %s %f\n",temp->rollno,temp->name,temp->marks);
                count++;
			}
			temp=temp->next;
        }

        if(count==0)
		{
			printf("\n*******************************************\n");
			printf("No name Found to modify data!!\n");
			printf("\n*******************************************\n");
		}
		else
        {
            int rollno;
            printf("Confirm the rollno to be modified: ");
            scanf("%d",&rollno);
            temp=*ptr;

            while(temp)
            {
                if((temp->rollno == rollno) && (strcmp(temp->name,name)==0))
                {
                    printf("Enter new name and marks: ");
                    scanf("%s%f",temp->name,&temp->marks);
                    return;
                }
                temp=temp->next;
            }
            printf("\nInvalid rollno\n");
        }
    }
    else if(option=='p' || option == 'P')
    {
		float marks;
		int count=0;
		printf("Enter marks: ");
		scanf("%f",&marks);
		while(temp)
		{
			if((temp->marks > marks-0.001) && (temp->marks < marks+0.001))
			{
			    printf("%d %s %f\n",temp->rollno,temp->name,temp->marks);
                count++;
			}
			temp=temp->next;
        }

        if(count==0)
		{
			printf("\n*******************************************\n");
			printf("No marks Found to modify data!!\n");
			printf("\n*******************************************\n");
		}
        else
        {
            int rollno;
            printf("Confirm the rollno to be modified: ");
            scanf("%d",&rollno);
            temp=*ptr;

            while(temp)
            {
                if((temp->rollno == rollno) && (temp->marks > marks-0.001) && (temp->marks < marks+0.001))
                {
                    printf("Enter new name and marks: ");
                    scanf("%s%f",temp->name,&temp->marks);
                    return;
                }
                temp=temp->next;
            }
            printf("\nInvalid rollno\n");
        }
    }
    else
    {
        printf("\nInvalid option\n");
    }


}
