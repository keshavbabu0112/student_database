#include "header.h"

void delete_record(STUD **ptr)
{
	if(*ptr==NULL)
	{
		printf("\n*******************************************\n");
		printf("No Nodes Found!!\n");
		printf("\n*******************************************\n");
		return;
	}

	STUD *del=*ptr, *prev;
	char option;
	printf("R/r : enter roll no to delete\nN/n : enter name to delete\n");
	scanf(" %c",&option);

	if(option == 'r' || option == 'R')
	{
		int rollno;
		printf("Enter the rollno to be deleted: ");
		scanf("%d",&rollno);
		del=*ptr;
		prev=0;

		while(del)
		{
			if(del->rollno == rollno)
			{

				if(del==*ptr)
				{
					*ptr=del->next;
				}
				else
				{
					prev->next=del->next;
				}
				free(del);
				printf("\nNode deleted successfully\n");
				return;
			}
		prev=del;
		del=del->next;
		}
		printf("\n*******************************************\n");
		printf("No rollno Found!!\n");
		printf("\n*******************************************\n");

	}
	else if(option=='n' || option == 'N')
	{
		char name[20];
		int count=0;
		printf("Enter the name to be deleted: ");
		scanf("%s",name);

		while(del)
		{
			if(strcmp(del->name,name)==0)
			{
			    printf("%d %s %f\n",del->rollno,del->name,del->marks);
                count++;
			}
			del=del->next;
        }

		if(count==0)
		{
			printf("\n*******************************************\n");
			printf("No name Found!!\n");
			printf("\n*******************************************\n");
		}
		else
		{
            int rollno;
            printf("Confirm the rollno to be deleted: ");
            scanf("%d",&rollno);
            del=*ptr;
            prev=0;

            while(del)
            {
                if((del->rollno == rollno) && (strcmp(del->name,name)==0))
                {

                    if(del==*ptr)
                    {
                        *ptr=del->next;
                    }
                    else
                    {
                        prev->next=del->next;
                    }
                    free(del);
                    printf("\nNode deleted successfully\n");
                    return;
                }
            prev=del;
            del=del->next;
            }
			printf("\n*******************************************\n");
			printf("Invalid rollno selected\n");
			printf("\n*******************************************\n");
		}
	}
	else
	{
		printf("\nInvalid option\n");
	}
}

void delete_all_records(STUD **ptr)
{
    if(*ptr==0)
    {
        printf("\nNo nodes to delete\n");
        return;
    }
    STUD *temp=*ptr;
    int c=0;

    while(temp)
    {
        *ptr=temp->next;
        free(temp);
        printf("Node Deleted: %d\n",c++);
        temp=*ptr;
    }
}



















