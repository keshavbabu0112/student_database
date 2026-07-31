#include"header.h"

int main()
{
	SLL *headptr=0;
	int op,count;

	while(1)
	{
		printf("\n*********************\n");
		printf("Enter your choice:\n");
		printf("1)Add at Begin\n2)Add at middle\n3)Add at end\n4)print node\n5)count node\n6)save in file\n7)read file\n8)reverse print\n9)print using recursion\n10)reverse using recursion\n11)delete all\n12)delete node\n13)search node\n14)sort data\n15)reverse link\n16)exit\n");
		printf("\n*********************\n");
		printf("The option is: ");
		scanf("%d",&op);
		printf("\n*********************\n");

		switch(op)
		{
			//case 1:addBegin(&headptr); break;
			//case 2:addMiddle(&headptr); break;
			case 3:addEnd(&headptr); break;
			case 4:printNode(headptr); break;
			case 5:count = countNode(headptr);
				printf("\n*********************\n");
			        printf("\nCount=%d\n", count);
				printf("\n*********************\n");
				break;
			case 6:saveFile(headptr); break;
			case 7:readFile(&headptr); break;
			case 8:reversePrint(headptr); break;
			case 9:printRec(headptr); break;
			case 10:reverseRec(headptr); break;
			case 11:deleteAll(&headptr); break;
			case 12:deleteNode(&headptr); break;
			case 13:searchNode(headptr); break;
			case 14:sortData(headptr); break;
			case 15:
			case 16:exit(0);
			default:
				printf("\n*********************\n");
				printf("Invalid option\n");
				printf("\n*********************\n");

		}
	}
}

/*
void addBegin(SLL **ptr)
{
	SLL *new;
	new=(SLL *)malloc(sizeof(SLL));

	printf("Enter rollno name and marks:\n");
	scanf("%d%s%f",&new->rollno,new->name,&new->marks);

	new->next=*ptr;
	*ptr=new;
}
*/

void printNode(SLL *ptr)
{
	if(ptr==0)
	{
		printf("\n*******************************************\n");
		printf("No data to print\n");
		printf("\n*******************************************\n");
		return;
	}
	printf("\n*******************************************\n");
	while(ptr)
	{
	printf("%d %s %.2f\n",ptr->rollno,ptr->name,ptr->marks);
	ptr=ptr->next;
	}
	printf("\n*******************************************\n");
}

int countNode(SLL *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}

void deleteAll(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("\n*******************************************\n");
		printf("No data to delete\n");
		printf("\n*******************************************\n");
		return;
	}
	int c=1;
	SLL *del=*ptr;
	while(del)
	{
		*ptr=del->next;
		printf("Node deleted: %d\n",c++);
		free(del);
		sleep(1);
		del=*ptr;
	}

}

void saveFile(SLL *ptr)
{
	if(ptr==0)
	{
		printf("\n*******************************************\n");
		printf("No data to print\n");
		printf("\n*******************************************\n");
		return;
	}

	FILE *fp;
	fp=fopen("data.txt","w");

	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
	fclose(fp);

}

void addEnd(SLL **ptr)
{
	SLL *new,*last;
	new=(SLL *)malloc(sizeof(SLL));
	printf("\n*******************************************\n");
	printf("Enter name and marks: \n");
	scanf("%s%f",new->name,&new->marks);
	printf("\n*******************************************\n");

	new->next=0;
	
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
	}

}

void readFile(SLL **ptr)
{
	SLL *new, *last;
	FILE *fp;
	fp=fopen("data.txt","r");

	if(fp==0)
	{
		printf("\n*******************************************\n");
		printf("No file present\n");
		printf("\n*******************************************\n");
		return;
	}

	while(1)
	{
		new=(SLL *)malloc(sizeof(SLL));
		if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->marks)==-1)
		{
			break;
		}
		
		new->next=0;

		if(*ptr==0)
		{
			*ptr=new;
		}
		else
		{
			last=*ptr;
			while(last->next!=0)
			{
				last=last->next;
			}
			last->next=new;
		}
	}
	fclose(fp);
}

void reversePrint(SLL *ptr)
{
	if(ptr==0)
	{
		printf("\n*******************************************\n");
		printf("No data to print\n");
		printf("\n*******************************************\n");
		return;
	}

	SLL *temp=ptr;
	int i,j,c=countNode(ptr);

	printf("\n*******************************************\n");
	for(i=0;i<c;i++)
	{	
		temp=ptr;
		for(j=0;j<c-1-i;j++)
		{
			temp=temp->next;
		}

		printf("%d %s %f\n",temp->rollno,temp->name,temp->marks);
	}
		printf("\n*******************************************\n");

}

void printRec(SLL *ptr)
{
	if(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		if(ptr->next!=0)
		{
			printRec(ptr->next);
		}
	}
	else
	{	
		printf("\n*******************************************\n");
		printf("No data to print\n");
		printf("\n*******************************************\n");
		// return;
	}
}

void reverseRec(SLL *ptr)
{
	if(ptr)
	{
		if(ptr->next!=0)
		{
			reverseRec(ptr->next);
		}
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
	}
	else
	{
		printf("\n*******************************************\n");
		printf("No Data Found!!\n");
		printf("\n*******************************************\n");
	}
}

void searchNode(SLL *ptr)
{
	if(ptr==0)
	{
		printf("\n*******************************************\n");
		printf("No Data Found!!\n");
		printf("\n*******************************************\n");	
		return;
	}

	char name[20];
	printf("Enter name to be searched: ");
	scanf("%s",name);
	int i=0;
		printf("\n*******************************************\n");

	while(ptr)
	{
		if(strcmp(ptr->name,name)==0)
		{
			i=1;
		
		printf("Node found\n");
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		}
		ptr=ptr->next;
	}
	if(i!=1)
	{
		printf("Name %s not found\n",name);
	}
		printf("\n*******************************************\n");

	
}

void sortData(SLL *ptr)
{
	if(ptr==0)
	{
		printf("\n*******************************************\n");
		printf("No Data Found!!\n");
		printf("\n*******************************************\n");	
		return;
	}

	SLL *p1=ptr,*p2,temp;
	int i,j,c=countNode(ptr);

	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			if(p1->rollno > p2->rollno)
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
}

void deleteNode(SLL **ptr)
{
	if(*ptr==NULL)
	{
		printf("\n*******************************************\n");
		printf("No Nodes Found!!\n");
		printf("\n*******************************************\n");	
		return;	
	}

	SLL *del=*ptr, *prev;
	char name[20];
	printf("Enter the data to be deleted: ");
	scanf("%s",name);
	
	while(del)
	{
		if(strcmp(del->name,name)==0)
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
			return;
		}
		prev=del;
		del=del->next;
	}
		printf("\n*******************************************\n");
		printf("No Data Found!!\n");
		printf("\n*******************************************\n");	
	
}
/*
void addMiddle(SLL **ptr)
{
	SLL *new,*last;
	new=(SLL *)malloc(sizeof(SLL));
	printf("Enter Data: \n");
	scanf("%s%f",new->name,&new->marks);
	
	

	if(*ptr==0||((*ptr)->rollno > new->rollno))
	{
		new->next=*ptr;
		*ptr=new;
	}
	else 
	{
		last=*ptr;
		while((last->next!=0) && last->next->rollno < new->rollno)
		{
			last=last->next;
		}
		new->next=last->next;
		last->next=new;
	}

}
*/
void reverseLink(SLL **ptr)
{

}






































