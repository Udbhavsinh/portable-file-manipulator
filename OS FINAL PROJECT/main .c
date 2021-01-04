#include <stdio.h>
#include <string.h>
#include "createFile.h"
#include "deleteFile.h"
#include "renameFile.h"
#include "copyFile.h"
#include "moveFile.h"
#include "appendText.h"
#include "removeText.h"



void main() {
	char command[1024]; 
        
        
	printf("Welcome the POFM.\n");
	printf("Feel free to exit from program by writing \"exit\" at main menu .\n");
	printf("Feel free to back main menu anytime by writing \"back\"\n");
	printf("If you need any help about commands, just write \"help-COMMAND\"\n");
	printf("Please choose operation from below.\n\n");
    printf("+-----------------------+---------+\n");
    printf("| Operations\t\t| Command |\n");
    printf("+-----------------------+---------+\n");
	printf("| Create a new file\t|\    1    \|\n");
	printf("+-----------------------+---------+\n");
	printf("| Delete a file\t\t|\    2    \|\n");
	printf("+-----------------------+---------+\n");
	printf("| Rename a file\t\t|\    3    \|\n");
	printf("+-----------------------+---------+\n");
    printf("| Copy a file\t\t|\    4    \|\n");
    printf("+-----------------------+---------+\n");
    printf("| Move a file\t\t|\    5    \|\n");
    printf("+-----------------------+---------+\n");
    printf("+-----------------------+---------+\n");
    printf("| TXT Only Operations\t| Command |\n");
    printf("+-----------------------+---------+\n");
	printf("| Append text to the end|\    EN   \|\n");
	printf("+-----------------------+---------+\n");
	printf("| Remove all text \t|\    RM   \|\n");
	printf("+-----------------------+---------+\n\n");

	printf("Waiting for your command: ");
	scanf("%s", command);

	while(1)
    {
        if ((strcmp("1",command)==0) || (strcmp("1",command)==0))
            {
			createFile();
            }
        else if ((strcmp("2",command)==0) || (strcmp("2",command)==0))
            {
            deleteFile();
            }
        else if ((strcmp("3",command)==0) || (strcmp("3",command)==0))
            {
            renameFile();
            }
        else if ((strcmp("4",command)==0) || (strcmp("4",command)==0))
            {
            copyFile();
            }
        else if ((strcmp("5",command)==0) || (strcmp("5",command)==0))
            {
            moveFile();
            }
        else if ((strcmp("EN",command)==0) || (strcmp("EN",command)==0))
            {
            appendText();
            }
        else if ((strcmp("RM",command)==0) || (strcmp("RM",command)==0))
            {
            removeText();
            }
        else if (strcmp("exit",command)==0)
            {
                break;
            }
	else
            {
            printf("Command not recognized. Please give a command from the TABLE.\n\n");
            }
        printf("Waiting for your command: ");
        scanf("%s", command);
    }
    return;
}
