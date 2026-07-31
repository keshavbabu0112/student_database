#include "header.h"

int main()
{
	STUD *headptr=0;
	readFile(&headptr);

	char option,exit_option;

	while(1)
	{
        printf("\na/A : add new record\nd/D : delete a record\ns/S : show the list\nm/M : modify a record\nv/V : save\ne/E: exit\nt/T: sort the list\nl/L : delete all the records\nr/R : reverse the list\n");
		printf("\nEnter your choice: ");
		scanf(" %c",&option);
		printf("\n");
		switch(option)
		{
			case 'a':
			case 'A':add_record(&headptr); break;
			case 'd':
			case 'D':delete_record(&headptr); break;
			case 's':
			case 'S':showlist(headptr); break;
			case 'm':
			case 'M':modify_record(&headptr); break;
			case 'v':
			case 'V':save_details(headptr); break;
			case 'e':
			case 'E': exit_option=func_exit();
                    if(exit_option=='s' || exit_option== 'S')
                    {
                        save_details(headptr);
                        return 0;
                    }
                    else if(exit_option=='e' || exit_option== 'E')
                    {
                        return 0;
                    }
                    else
                    {
                        printf("\nInvalid Option\n");
                    }
                    break;
			case 't':
			case 'T':sort_details(headptr); break;
			case 'l':
			case 'L':delete_all_records(&headptr); break;
			case 'r':
			case 'R':reverse_records_list(&headptr); break;
			default: printf("Invalid option \n");
		}
	}
}

















