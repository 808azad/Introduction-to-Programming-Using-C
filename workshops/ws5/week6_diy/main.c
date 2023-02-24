#include <stdio.h>
#include "classList.h"
#include "utils.h"
int main(void) {
    int i;
    printf("Subject Performance report\n");
    printf("-------------------------\n");
    do {
        subjectMarksReport();
        printf(" Exit? ");
    } while (!yes());
    return 0;
}