//Part b 

#include <stdio.h>
#include <stdlib.h> //libs 
#define EOL 999999


int main (int argument , char *argv[]) {

    int noFilesToIterate; 
    if (argument <= 1) { //to see if there are no files at run time ... no files were specified 
        printf("Sorry, but there was no specification of file."); //handles error 
        exit(0); //exit cmmand 
    }


//for looop 
    for (noFilesToIterate = 1; noFilesToIterate <argument ; noFilesToIterate++) { //for loop to go thrugh all the files given AND READ 


        FILE *fp = fopen(argv[noFilesToIterate],"r"); //read the file as you open 

//error 
        if (fp == NULL ) { //check is there is any errors while doing above 
            printf("CANT OPEN ", argv [noFilesToIterate] ); //if so, print can not open 
            exit(1); 
        }


        else { //else reqad through the file until the end of file 
            char buffer [EOL]; 
            while (fgets(buffer, EOL, fp))
            printf("%s", buffer); 
        }

        fclose(fp); 

    }
    exit(0); 
}