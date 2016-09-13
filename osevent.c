/* CITS2002 Project 1 2016
 Names: Samir Vojdani, Kwang Zhu Ong
 Student numbers: 21567881, 21540729
 Date: date-of-submission
 */

//  Compile with: cc -std=c99 -Wall -Werror -pedantic -o osevent osevent.c

#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h>

int timequantum;
int diskrpm;
int disksectors;
int loc = 0;


int readScenario() {
    char keyword[] = { "timequantum", "diskrpm", "disksectors" };
    //int kloc = 0;
    //FILE fp = fopen("scenario.txt", "r");
    //if(fgets(fp) == NULL) {
        fprintf(stderr, "File is empty");
        exit(EXIT_FAILURE);
    //}
    
    return 0;
}

int main (void) {
    
    printf("hello world!");
}
