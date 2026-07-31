#include "header.h"

void readFile(STUD **ptr)
{
	STUD *new,*last;
	FILE *fp;
	fp=fopen("student.dat","r");

	if(fp==0)
	{
		printf("\n*********************\n");
		printf("No File present\n");
		printf("\n*********************\n");
		return;
	}
	while(1)
	{
		new=(STUD *)malloc(sizeof(STUD));

		if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->marks)==-1)
		{
			free(new);
			break;
		}

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
		new->next=0;
	}

	fclose(fp);
}
