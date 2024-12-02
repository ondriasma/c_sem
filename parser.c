#include "parser.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_VAR_LENGTH 255 /*nejdelší přijatelná délka proměnné podle specifikace formátu LP*/

#define INIT_SIZE 5

#define REALLOC_SIZE 3


/*
void parse(char *file, struct variable vars[], struct bound bounds[], struct function, struct constraint cons[]){

}

*/

void remove_spaces(char *line){/*unused right now*/
    int i = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        if(line[i] != ' ' || line[i] != '*'){
            line[++i] = line[i];
        }

        line[i] = '\0';
    }
}

void parse_variables(char *line, struct list *l){
    list_init(l, 0, MAX_VAR_LENGTH * sizeof(char));
    char *var;
    var = strtok(line, " ");
    while(var != NULL){
        list_append(l, (char *)var);
        var = strtok(NULL, " ");
    }
}



int parse_constraint(char *line, struct list *l){
    struct constraint c;
    struct list l;
    int negative = 1;

    /*Získání operátorů nerovnosti a pravé strany rovnice TODO opačné znaménko nerovnosti*/
    char *rightside = strchr(line, '<');
    if (rightside == NULL) {
        rightside = strchr(line, '>');
        if(rightside == NULL){
            printf("%s", "syntax error");
            return 1;
        }
    }
    printf("Pravá strana rovnice: %s\n", rightside);

    /*Získání jména omezení zadáno uživatelem - nepodstatná informace, dále se s ní nepracuje*/
    char *name = strtok(line, " ");
    printf("Jméno omezení: %s\n", name);
    if(name == NULL){
        printf("%s", "syntax error");
        return 1;
    }

    /*Získání levé strany rovnice*/
    char *leftside = strtok(NULL, "<>");
    if (leftside != NULL) {
        printf("Levá strana rovnice: %s\n", leftside);/*TODO všechny printy pouze pro debug, poté odstranit*/
    }

    struct token *tokens = list_init(INIT_SIZE, sizeof(struct token));


    

}


int tokenize(char *line, struct token *tokens){
    size_t length = strlen(line);
    size_t i = 0;
    char *tok;
    enum type current = NUMBER;
    int tokstart;
    int tokend;
    size_t tokens_size = INIT_SIZE;
    size_t tokens_used = 0;

    for(;;){
        char name[10];

        if(isspace(line[i])){
            i++;
            continue;   /*ignorujeme mezery*/
        }

        if(isdigit(line[i])){
            enum type current = NUMBER;
            struct token new_tok;
            new_tok.type = current;
            tokstart = i;
            tokend = i;
            do{
                tokend++;
                i++;

            } while (isdigit(line[i]) || line[i] == '.');/*tečka kvůli desetinným číslům*/
            strncpy(new_tok.value, line[tokstart], i - tokstart);
            add_token(tokens, new_tok, tokens_size, tokens_used);
            new_tok.type = OPERATOR2;
            new_tok.value = "*";
            add_token(tokens, new_tok, tokens_size, tokens_used);


        }

        if(isalpha(line[i])){
            struct token new_tok;
            enum type current = VARIABLE;
            new_tok.type = current;
            tokstart = i;
            do{
                i++;
            } while(!isoperator(line[i]) && !isparenthesis(line[i]));

            strncpy(new_tok.value, line[tokstart], i - tokstart);
            add_token(tokens, new_tok, tokens_size, tokens_used);
        }

        if(isoperator(line[i])){
            struct token new_tok;
            if(line[i] == "*"){
                enum type current = OPERATOR2;
            }
            else{
                 enum type current = OPERATOR1;
            }

            new_tok.type = current;
            strncpy(new_tok.value, line[i], 1);
            add_token(tokens, new_tok, tokens_size, tokens_used);
            i++;

        }

        if(isparenthesis(line[i])){
            struct token new_tok;
            if(line[i] == "(" || line[i] == '[' || line [i] == '{'){
                enum type current = OPPAR;
                strncpy(new_tok.value, "(", 1); /*dále budu pracovat pouze s jednoduchými závorkami*/
            }
            else{
                enum type current = CLPAR;
                strncpy(new_tok.value, ")", 1);
            }

            new_tok.type = current;
            add_token(tokens, new_tok, tokens_size, tokens_used);
            i++;

        }

        if(i == length){
            break;
        }

    }

}

int add_token(struct token **tokens, struct token token, size_t *size, size_t *used){
    if(*used >= *size){
        *size += REALLOC_SIZE;
        struct token *temp = realloc(*tokens, *size * sizeof(struct token));
        if(!temp){
            printf("%s", "Memory allocation failed\n");
        }
        *tokens = temp;
    }

    *tokens[++(*size)] = token;

}

int isoperator(int c) {
    const char *chars = "+-*";

    
    if (strchr(chars, c)) {
        return 0; 
    }

    return 1; 
}

int isparenthesis(int c) {
    const char *chars = "()[]{}";

    
    if (strchr(chars, c)) {
        return 1; 
    }

    return 0; 
}


int shunting_yard(struct token **tokens, size_t size){
    struct token *temp_tok = malloc(size * sizeof(struct token));/*je špatně, to je moc*/
    struct stack *operator_stack = stack_init(4, sizeof(struct token));
    size_t tokens_size = INIT_SIZE;
    size_t tokens_used = 0;
    /*memcpy(temp_tok, *tokens, siz)*/


    for(size_t i = 0; i < size; i++){

        if((tokens[i])->type == VARIABLE || (tokens[i])->type == NUMBER){
            add_token(temp_tok, *tokens[i], tokens_size, tokens_used);
        }
        else if((tokens[i])->type == OPERATOR1){
            struct token top = stack_top(operator_stack);
            if(top.type == OPERATOR2){

            }
            stack_push(operator_stack, *tokens[i]);
        }




    }
    

    /*free původní array*/
}
