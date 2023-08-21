#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void shorten(char *w);

int main(){
    int n;

    scanf("%d", &n);

    char ** words= (char **) malloc(sizeof(char *)*n);  //array of pointer to strings

    for(int i=0; i<n; i++){
        //array of strings
        char * word = (char *) malloc(sizeof(char)*101); //101 because 1 char for \n
        scanf("%s", word);
        words[i] = word;
    }

    for(int i=0; i<n; i++){
        if(strlen(words[i]) > 10){
            shorten(words[i]);    
        }
        else{
            printf("%s\n", words[i]);
        }
    }

    for(int i=0; i<n; i++){ //free "word" before "words" since words stores the "address to word".
        free(words[i]);
    }
    free(words);
}


void shorten(char * w){
    printf("%c%lu%c\n", w[0], strlen(w)-2, w[strlen(w)-1]);
}