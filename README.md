# student_database
A simple C-based student database management system that performs CRUD operations and stores records in a file.

# Student Database Management System

A menu-driven **Student Database Management System** developed in **C** using **Singly Linked List (SLL)** and **File Handling**. The application allows users to manage student records efficiently with persistent storage using a binary data file.

---

## Clone the Repository

Clone this repository to your local machine using Git:

```bash
git clone https://github.com/<your-username>/student_database.git
```

Navigate to the project directory:

```bash
cd student_database
```

---

## Project Features

- Add new student records
- Display all student records
- Modify student details
- Delete records by Roll Number or Name
- Sort records by Name or Marks
- Reverse the student list
- Save records to a file
- Automatically load existing records at startup

---

## Technologies Used

- C Programming
- Singly Linked List (SLL)
- Dynamic Memory Allocation
- File Handling
- Modular Programming
- Makefile

---

## Student Record Structure

Each student record stores:

- Roll Number
- Student Name
- Marks

---

## Project Structure

```
student_database/
│── stud_main.c        # Main menu and program flow
│── stud_add.c         # Add new records
│── stud_del.c         # Delete records
│── stud_mod.c         # Modify existing records
│── stud_show.c        # Display records
│── stud_save.c        # Save and sorting operations
│── stud_others.c      # Utility and file loading functions
│── header.h           # Structure definitions and function declarations
│── Makefile           # Build automation
│── student.dat        # Database file
│── README.md
```

---

## Build the Project

Compile the project using the Makefile:

```bash
make
```

---

## Run the Application

Execute the generated binary:

```bash
./exe
```

---

## Clean the Build Files

To remove object files and the executable:

```bash
make clean
```

> **Note:** If your Makefile uses `clear` instead of `clean`, use:

```bash
make clear
```

---

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

---

## Concepts Demonstrated

- Embedded C Programming
- Singly Linked List
- Dynamic Memory Allocation
- File Handling
- CRUD Operations
- Modular Programming
- Makefile-based Build System

---

## Future Enhancements

- Search by Name or Roll Number
- Input Validation
- Password Authentication
- GPA/Grade Calculation
- CSV Export
- Improved Error Handling

---

## Author

**Keshav Babu**

Embedded Software Engineer

- LinkedIn: https://www.linkedin.com/in/keshav-babu-766700230/