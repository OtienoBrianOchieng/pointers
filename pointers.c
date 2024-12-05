#include <stdio.h>

void findChangeValue(int* age) {
    *age = 4 * 4;
    }

int main () {
    // int age = 34;
    // // %p- used to print the memory adress where a variable is stored
    // printf("%p", &age);

    // int* pAge = &age;
    // printf("Adress: \n%p", pAge);
    // printf("VAlue %d", *pAge);
    // *pAge = 55;
    //  printf("VAlue %d", *pAge);

    int numbers [5] = {1,2,3,4,5};
    for (int i=0; i<5; i++) {
        printf("%d=%p\n", numbers[i], &numbers[i]);
    }

    *numbers = 20;
    *(numbers + 1) = 67;

        for (int i=0; i<5; i++) {
        printf("%d=%p\n", numbers[i], &numbers[i]);
    }

    int oldAge = 54;

    findChangeValue(&oldAge);
    printf("%d" , oldAge);


    return 0;
    }