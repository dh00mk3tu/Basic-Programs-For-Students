#include<stdio.h>
#include<stdlib.h>
//Written BY DH00MK3TU | Andhera Kayam Rahe
//Program to Demonstrate how to Work with Files and file handling in C Language

//Globals
char str[100];
FILE *file_ptr;


//Function Prototypes
void add_details();
void show_details();
void about();

//Main Function
int main(){

    FILE *file_ptr;
    char ch;
    printf("\n\t\tData File Handling");
    printf("\n\t1. Add Details \n\t2. Display Details \n\t3. Find Me \n\t4. Exit\n\n");
    scanf("%c",&ch);

/*Scitch Function to work with the Main Menu*/
    switch(ch) {
        case '1' : add_details();
        break;

        case '2' :  show_details();
        break;

        case '3' : about();
        break;

        case '4' : printf("\n\tPress any key to Exit...");
        break;

        default : printf("\n\tInvalid Option");
        break;
    }
    return 0;
}


//Functions

/*  Function to add detail into the file
    Apparently you can only add one string at a time. If you will run the program again or add data to the file again,
    It will overwrite the file and WILL not append*/

void add_details() {
    int i;
    printf("\n\t Enter three names:");

    for(i=1;i<=3;i++){
        file_ptr = fopen("test.txt", "w");
        printf("Enter the name %d: \n",i);
        scanf("%s", str);
        fprintf(file_ptr, "Name  = %s\n", str);
    }
    main();
}

/*  This function will display the contents from the file.
    Modify as necessary/required. Will work only on GNU GCC */
void show_details() {

    fscanf(file_ptr,"%c", str);
    printf("Data from the file:\n%s", str);
    fclose(file_ptr);
    main();
}

//Signature By CodeBLocks
void about() {
    printf("\n\tMade By : DH00MKETU | Anirudh Rath")
    printf("\n\tGitHub | @dh00mk3tu")
}
