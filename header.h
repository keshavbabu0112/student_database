#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

typedef struct Student
{
	int rollno;
	char name[20];
	float marks;
	struct Student *next;
}SLL,STUD;

void addBegin(SLL **);
void printNode(SLL *);
int countNode(SLL *);
void deleteAll(SLL **);
void saveFile(SLL *);
void addEnd(SLL **);
void readFile(SLL **);
void reversePrint(SLL *);
void printRec(SLL *);
void reverseRec(SLL *);
void searchNode(SLL *);
void sortData(SLL *);
void deleteNode(SLL **);
void addMiddle(SLL **);


void showlist(STUD *);
void add_record(STUD **);
void delete_record(STUD **);
void delete_all_records(STUD **);
void save_details(STUD *);
char func_exit(void);
void sort_details(STUD *);
void modify_record(STUD **);
int count_node(STUD *);
void reverse_records_list(STUD **);

#endif




















