#include "header.h"

void add_record(STUD **ptr)
{
	STUD *new,*last;
	new=(STUD *)malloc(sizeof(STUD));
	printf("\n*******************************************\n");
	printf("Enter name and marks: \n");
	scanf("%s%f",new->name,&new->marks);
	printf("\n*******************************************\n");

	new->next=0;
	int rn=1;

	while(1)
    {
        int found=0;
        last=*ptr;

        while(last)
        {
            if(last->rollno==rn)
            {
                found=1;
                break;
            }
            last=last->next;
        }

        if(found==0)
        {
            new->rollno=rn;
            break;
        }
        rn++;
    }


    // add at end

    if(*ptr==0)
    {
        *ptr=new;
    }
    else
    {
        last=*ptr;
        while(last->next)
        {
            last=last->next;
        }
        last->next=new;
    }
    printf("\nRecord Added Successfully\n");

/*	new->next=0;

	if(*ptr==0)
	{
		*ptr=new;
		(*ptr)->rollno=1;
	}
	else if((*ptr)->rollno!=1)
	{
		new->rollno=1;
		new->next=*ptr;
		*ptr=new;
	}
	else
	{
		last=*ptr;
		while((last->next)!=0)
		{
			while((last->next->rollno - last->rollno)!=1)
			{
				new->rollno=last->rollno+1;
				new->next=last->next;
				last->next=new;
				return;
			}
			last=last->next;
		}
		new->rollno=last->rollno+1;
		last->next=new;
	}*/

}
