#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//defining the structure with 2 entries
typedef struct result_table{
    char *keyword;
    int count;
}table;

void init_table(int argc, char **argv, table  *result) {
    //Initializing the keywords and the count
    int i;
    for(i = 0; i < argc-1; i++){
        result[i].keyword = argv[i+1];
        result[i].count = 0;
    }
}

void process_table(int argc, table* result) {
    char *line=NULL;
    size_t maxlen=0;
    // ssize_t n;
    char *token;
    int i;
    
    while ((/*n = */getline(&line, &maxlen, stdin))>0) {
        token = strtok(line," ");   //strtok: A library function breaks the string into 
        while(token != NULL){       //a serires of tokens using delimiter.
            // printf("%s\n", token );
            for(i=0; i < argc-1; i++){
                token[strcspn(token, "\n")] = 0; //strcspn:Function to remove the '\n' from the tokens.
                if(strcmp(token, result[i].keyword)== 0){  //strcmp:Function to compare the keywords and token.
                    result[i].count++;  //updating the keyword count.
                }
            }
            token = strtok(NULL, " ");

        }
    }
    free(line);
}

void display_table(int argc, table* result) {
    int i;
    for (i = 0; i < argc-1; i++) {     // Printing the Array of keyword and count.
        printf("%s =", result[i].keyword);
        printf("%d \n", result[i].count);     
    }
}


int main(int argc, char **argv){    //Read the keywords provided as the command line argument
    table *result = malloc(argc * sizeof *result);  /*Dynamic memory allocation of the Array*/
    init_table(argc, argv, result);

    process_table(argc, result);

    display_table(argc, result);

    free(result); //Library function to deallocate the memory.

    return 0;
}