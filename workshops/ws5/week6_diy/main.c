#include <stdio.h>
#include "classList.h"
#include "utils.h"
int main(void) {
    printf("Subject Performance report\n");
    printf("-------------------------\n");
    do {
        subjectMarksReport();
        printf(" Exit? ");
    } while (!yes());
    return 0;
}