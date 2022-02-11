#include "main.h"

    char employeename[40]; /// string to store name of the employee
 
    long int recordsize; /// size of each record of 
    
     FILE *fr, *fg; /// file pointers
    char another, choice;

 void List_Record(){
     rewind(fr); ///this moves file cursor to start of the file
                while(fread(&e,recordsize,1,fr)==1){ /// read the file and fetch the record one record per fetch
                    printf("\n%s %d %.2f\n",e.name,e.age,e.bs); /// print the name, age and basic salary
                }
 }

 void Modify_Record(){
another = 'y';
                while(another == 'y'){
                    printf("Enter the employee name to modify: ");
                    scanf("%s", employeename);
                    rewind(fr);
                    while(fread(&e,recsize,1,fr)==1){ /// fetch all record from file
                        if(strcmp(e.name,employeename) == 0){ ///if entered name matches with that in file
                            printf("\nEnter new name,age and bs: ");
                            scanf("%s%d%f",e.name,&e.age,&e.bs);
                            fseek(fr,-recordsize,SEEK_CUR); /// move the cursor 1 step back from current position
                            fwrite(&e,recordsize,1,fp); /// override the record
                            break;
                        }
                    }
                    printf("\nModify another record(y/n)");
                    fflush(stdin);
                    scanf("\n%c", &another);
                }

 }

 void Delete_Record(){
another = 'y';
                while(another == 'y'){
                    flush();
                    printf("\nEnter name of employee to delete: ");
                    fgets(employeename,40, stdin);
                    fg = fopen("Temp.dat","wb");  /// create a intermediate file for temporary storage
                    rewind(fr); /// move record to starting of file
                    while(fread(&e,recordsize,1,fr) == 1){ /// read all records from file
                        if(strcmp(e.name,employeename) != 0){ /// if the entered record match
                            fwrite(&e,recordsize,1,fg); /// move all records except the one that is to be deleted to temp file
                        }
                    }
                    fclose(fr);
                    fclose(fg);
                    remove("EMP.DAT"); /// remove the orginal file
                    rename("Temp.dat","EMP.DAT"); /// rename the temp file to original file name
                    fr = fopen("EMP.DAT", "rb+");
                    printf("Delete another record(y/n)");
                    fflush(stdin);
                    scanf("\n%c", &another);
                }
 }

 void Exit(){
             fclose(fr);  /// close the file
                exit(0); /// exit from the program
 }


int main(){

 
    /// sizeo of each record i.e. size of structure variable e
    recordsize = sizeof(e);

    /** open the file in binary read and write mode
    * if the file EMP.DAT already exists then it open that file in read write mode
    * if the file doesn't exit it simply create a new copy
    */
    fr = fopen("EMP.DAT","rb+");
    if(fr == NULL){
        fr = fopen("EMP.DAT","wb+");
        if(fr == NULL){
            printf("Connot open file");
            exit(1);
        }
    }
 
    /// infinite loop continues untile the break statement encounter
    while(1){
        printf("1. Add Record\n"); /// option for add record
        printf("2. List Records\n"); /// option for showing existing record
        printf("3. Modify Records\n"); /// option for editing record
        printf("4. Delete Records\n"); /// option for deleting record
        printf("5. Exit\n"); /// exit from the program
        printf("Your Choice: "); /// enter the choice 1, 2, 3, 4, 5
        fflush(stdin); /// flush the input buffer
        scanf("\n%c", &choice); /// get the input from keyboard
        switch(choice){
            case '1':  /// if user press 1
                Add_Record();
                break;
            case '2':
                List_Record();
                break;
 
            case '3':  /// if user press 3 then do editing existing record
                Modify_Record();
                break;
            case '4':
                Delete_Record();
                break;
            case '5':
                Exit();
        }
    }
    return 0;
}