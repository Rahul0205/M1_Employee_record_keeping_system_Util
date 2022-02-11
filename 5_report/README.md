# Description

The "Employee Record System Project in C" mini-project is a console programme written in the C programming language. The GCC compiler was used to compile this project in Code Blocks. You can use this console programme to perform basic Employee Record functions such as adding employee information, viewing newly added employees, and searching for employees. This programme is based on file handling in C, and it uses file-related functions such as fopen, fread, fwrite, and so on. The good news is that "Employee Record System Project" is password-protected, allowing only authorised users to access it. I've also divided the programme into distinct functions to make it easier to read. Each project function is heavily reliant on the file handling function, making it an excellent project for learning about file management.

## Swot analysis

1.strength
 * To increase the efficiency of the machine.
 * convenient and simple for the users.
 * To make a automated system i.e less dependence on manpower.

2. Weakness 
 * Need many system setup(eg internet) .
 * This facility is mostly available to urban people.

3. Opportunities
 * Try to expand this facility  to cover more such industries .

4. Threats
 * There are possibilities of misuse due to negligiance.
 * Failure of the server is a bigger threat.

## 4 w's and 1 H

who
 * The large industries with big number of employees.

what
 * To build a robust machine that can keep a tract of employees records.

When
 * It can be used to keep the record of employees who joins or leaves the company.

where
 * In every company or organisation.

How
 * By creating a platform to give records of every employee.


## High Level requirements
 * The Application will allow to make a choice from the given options.
 * It will allow the user to enter information.
 * The Application will allow user find the  list all the employee.
 * The Application will allow the user to modify an employee records.

## Low level requirements
 * This application will allow the user to choose their Choices:
 1. Add Record		
 2. List Record		
 3. Modify Record		
 4. Delete Record		
 5. Exit 
 * The application will ask user to enter information like  Enter name, Enter age, Enter salary.
 * It will show all details of an employees.
 * It will ask the user enter name for making changes.


  ## Testplan And Output

 |TEST ID|TEST CASE OBJECTIVE|INPUT DATA        |EXPECTED OUTPUT|ACTUAL OUTPUT|STATUS|
 |-------|-------------------|------------------|---------------|-------------|------|
 |TC_01  |for entering name  |enter name: abc   |abc            |abc          |pass  |
 |TC_02  |for entering name  |enter name: abc   |abc            |-            |fail  |
 |TC_03  |for entering age   |enter age: 12     |12             |12           |pass  |
 |TC_04  |for entering age   |enter age: 12     |12             |-            |fail  |
 |TC_05  |for entering salary|enter salary: 5000|5000           |5000         |pass  |
 |TC_06  |for entering salary|enter salary: 5000|5000           |-            |fail  |
 |TC_07  |for listing record |abc 12 5000	    |abc 12 5000    |abc 12 5000  |pass  |
 |TC_08  |for listing record |abc 12 5000       |abc 12 5000    |abc 5000 12  |fail  |
 |TC_09  |for listing record |abc 12 5000       |abc 12 5000    |12 abc 5000  |fail  |
