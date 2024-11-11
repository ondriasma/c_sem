#include <stdio.h>

int main(){
    FILE *my_file = fopen("vyroba.lp", "r");
    if(my_file == NULL){
        printf("error");
        return 1;
    }

    char buffer[255];
    while(fgets(buffer, sizeof(buffer), my_file)){
        printf("%s", buffer);
        if (strncmp(buffer, "Minimize", 8) == 0 || strncmp(buffer, "Maximize", 8) == 0) {

        }
    }

}

void process_min(FILE *f){

}