# student_database
A simple C-based student database management system that performs CRUD operations and stores records in a file.

# Student Database Management System

A menu-driven **Student Database Management System** developed in **C** using **Singly Linked List (SLL)** and **File Handling**. The application allows users to efficiently manage student records with persistent storage using a binary data file.

## Features

- Add new student records
- Display all student records
- Modify student details
- Delete records by Roll Number or Name
- Sort records by Name or Marks
- Reverse the student list
- Save records to a file
- Load existing records automatically at startup

## Technologies Used

- C Programming
- Singly Linked List (SLL)
- Dynamic Memory Allocation
- File Handling
- Modular Programming
- Makefile

## Student Record Structure

Each student record contains:

- Roll Number
- Student Name
- Marks

## Project Structure

```
student_database/
│── stud_main.c        # Main menu and program flow
│── stud_add.c         # Add new records
│── stud_del.c         # Delete records
│── stud_mod.c         # Modify existing records
│── stud_show.c        # Display records
│── stud_save.c        # Save, sort and exit operations
│── stud_others.c      # File loading and utility functions
│── header.h           # Structure definitions and function declarations
│── Makefile           # Build automation
│── student.dat        # Database file
│── README.md
```

## Build Instructions

Compile the project using the provided Makefile:

```bash
make
```

Run the executable:

```bash
./exe
```

To remove object files:

```bash
make clear
```

## Menu Options

- Add Record
- Delete Record
- Modify Record
- Show Records
- Save Records
- Sort Records
- Delete All Records
- Reverse Records
- Exit

## Concepts Demonstrated

- Embedded C Style Programming
- Linked List Operations
- Dynamic Memory Management
- File Handling
- CRUD Operations
- Modular Code Organization
- Makefile-based Project Compilation

## Future Improvements

- Search functionality
- Input validation
- Password protection
- GPA/Grade calculation
- CSV/Excel export
- Better error handling

## Author

**Keshav Babu**

Embedded Software Engineer

- LinkedIn: https://www.linkedin.com/in/keshav-babu-766700230/
