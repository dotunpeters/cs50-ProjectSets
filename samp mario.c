#include <stdio.h>
#include <cs50.h>
void printLeft(int height, int step);
void printRight(int step);


int main(void){
    while(true){
        printf("Height:  ");

        int height = get_int();
        if(height >= 0 ){
        int i = 0;
    //each pass p  rints the next line of #
        for(i = 0; i < height; i++){
            //passes total height and current height to function
            printLeft(height, i);
            printf("  ");
            printRight(i);
            printf("\n");

        }
        exit(0);
        }
    }
}

void printLeft(int height, int step){

    int j = 0;
    int i = 0;
    //prints spaces equal to total height - current height, this gives proper formatting of pyramid
        for(j = 0; j < height-step; j++){

            printf(" ");

        }
        //prints # equal to current height
        for(i=0; i <=step; i++){

        printf("#");
        }

}

void printRight(int step){
    int i = 0;
    for(i = 0; i <= step; i++){
        printf("#");
    }
}