#include <stdio.h>

void helloWorld();
void testingBasicOperators();
void creatingBasicVariablesAndArrays();
void printingMyNameAsString();
void conditionals();
void iterationStatements();
void passByValue();

//Structure, the "alternative" to classes
struct point {
    int x;
    int y;
};

struct line {
    struct point start;
    struct point end;
};

//Union
union value {
    int i;
    float f;
};

//The infamous goTo, infinite loop

//int main(int argc, char*argv[]) {
//    int x = 5;
//    int z=3;
//    goToDestination:if (z=3){
//        printf("z is %i \n",z++);
//        goto goToDestination;
//    }
//    return 0;
//}


//Running all the small programs written below

int main(int argc, char*argv[]) {
    printf("Calling 'helloWorld' function \n");
    helloWorld();
    printf("Calling 'testingBasicOperators' function \n");
    testingBasicOperators();
    printf("Calling 'creatingBasicVariablesAndArrays' function \n");
    creatingBasicVariablesAndArrays();
    printf("Calling 'printingMyNameAsString' function \n");
    printingMyNameAsString();
    printf("Calling 'conditionals' function \n");
    conditionals();
    printf("Calling 'iterationStatements' function \n");
    iterationStatements();
    printf("Calling 'passByValue' function \n");
    passByValue();

    printf("Experimenting with structured types \n");
    printf("Structure: \n");
    struct point origin;
    origin.x = 0;
    origin.y = 0;
    printf("origin.x=%i and origin.y=%i\n",origin.x,origin.y);
    struct line line1;
    line1.start.x = 1;
    line1.start.y = 2;
    line1.end.x = 3;
    line1.end.y = 4;
    printf("line1.start.x=%i, line1.start.y=%i, line1.end.x=%i and line1.end.y=%i \n",line1.start.x,line1.start.y,line1.end.x,line1.end.y);

    printf("Union: \n");
    union value v;
    v.i = 123; // Set v to bits of integer 123
    printf("%i\n", v.i);
    //ToDo find out why the code below prints 0.00000 when the book stated otherwise
    printf("%f\n", v.f); // Set v to bits of integer 123
    return 0;
}


//Classic hello world

void helloWorld() {
    printf("Hello, World!\n");
    printf("\n");
}

//Basic operators

void testingBasicOperators() {
    printf("%d\n", 3 < 2);           // 0
    printf("%d\n", 2 < 3);           // 1
    printf("%d\n", 1 && 0);          // 0
    printf("%d\n", 1 || 0);          // 1
    printf("%d\n", 0 && 123);        // 0
    printf("%d\n", 0 || 123);        // 1
    printf("%d\n", 1 < 2 && 2 < 3);  // 1
    printf("\n");
}

//Basic variables and arrays

void creatingBasicVariablesAndArrays() {
    int x = 1;
    float f = 3.14159;
    int numbers[3] = { 1, 2, 3 };
    char letters[5] = { 'a', 'b', 'c', 'd', 'z' };
    printf("x is %i and f is %f and the first element of numbers is %i and the first element of letters is %c \n",x,f,numbers[0],letters[0]);
    numbers[1] = 99;               // { 1, 99, 3 }
    numbers[2] += 1;
    printf("numbers[1] = %i and numbers[2] = %i \n",numbers[1],numbers[2]);
    int multidimensionalArray [1][1];
    multidimensionalArray [0][0]=5;
    printf("Element in position 0,0 of multidimensional array : %i \n", multidimensionalArray[0][0]);
    printf("\n");
}

//Strings

void printingMyNameAsString() {
    char name[] ="Peter";
    printf("Just printing my name: %s \n",name);
    printf("\n");
}

//Conditionals

void conditionals() {
    int x = 0;
    if (x) {
        printf("x is true \n");
    } else {
        printf("x is false \n");
    }
    int y = 1;
    if (y) {
        printf("y is true \n");
    } else {
        printf("y is false \n");
    }

    int z = 2;

    switch (z) {
        case 1:
            printf("First case \n");
        case 2:
            printf("Second case \n");
        case 3:
            printf("Third case \n");
        case 4:
            printf("Fourth case \n");
            break;
        case 5:
            printf("Fifth case \n");

    }
    printf("\n");

}

//Iteration statements

void iterationStatements() {
    int x=5;
    while (x){
        printf("x is %i \n",x);
        x--;
    }
    do{
        printf("In the do-while x is %i \n",x);
    }while(x);

    for(int i=0;i<7;i++){
        if (i==3){
            printf("i is 3 so a continue command will be executed \n");
            continue;
        }
        printf("i is %i \n",i);
    }
    printf("\n");

}

//Basic function use

int double_it(int x) {
x = 2*x;
return x;
}

void passByValue() {
int i = 10;
int j = double_it(i);
printf("i=%d, j=%d\n", i, j);
printf("\n");

}




