#include <stdio.h>

//Classic hello world

//int main() {
//    printf("Hello, World!\n");
//    return 0;
//}

//Basic operators

//int main() {
//    printf("%d\n", 3 < 2);           // 0
//    printf("%d\n", 2 < 3);           // 1
//    printf("%d\n", 1 && 0);          // 0
//    printf("%d\n", 1 || 0);          // 1
//    printf("%d\n", 0 && 123);        // 0
//    printf("%d\n", 0 || 123);        // 1
//    printf("%d\n", 1 < 2 && 2 < 3);  // 1
//    return 0;
//}

//Basic variables and arrays

//int main(int argc, char*argv[]) {
//    int x = 1;
//    float f = 3.14159;
//    int numbers[3] = { 1, 2, 3 };
//    char letters[5] = { 'a', 'b', 'c', 'd', 'z' };
//    printf("x is %i and f is %f and the first element of numbers is %i and the first element of letters is %c \n",x,f,numbers[0],letters[0]);
//    numbers[1] = 99;               // { 1, 99, 3 }
//    numbers[2] += 1;
//    printf("numbers[1] = %i and numbers[2] = %i \n",numbers[1],numbers[2]);
//    int multidimensionalArray [1][1];
//    multidimensionalArray [0][0]=5;
//    printf("Element in position 0,0 of multidimensional array : %i", multidimensionalArray[0][0]);
//    return 0;
//}

//Strings

//int main(int argc, char*argv[]) {
//    char name[] ="Peter";
//    printf("Just printing my name: %s",name);
//    return 0;
//}

//Conditionals

//int main(int argc, char*argv[]) {
//    int x = 0;
//    if (x) {
//        printf("x is true \n");
//    } else {
//        printf("x is false \n");
//    }
//    int y = 1;
//    if (y) {
//        printf("y is true \n");
//    } else {
//        printf("y is false \n");
//    }
//
//    int z = 2;
//
//    switch (z) {
//        case 1:
//            printf("First case \n");
//        case 2:
//            printf("Second case \n");
//        case 3:
//            printf("Third case \n");
//        case 4:
//            printf("Fourth case \n");
//            break;
//        case 5:
//            printf("Fifth case \n");
//
//    }
//
//}

    //Iteration statements

//    int main(int argc, char*argv[]) {
//        int x=5;
//        while (x){
//            printf("x is %i \n",x);
//            x--;
//        }
//        do{
//            printf("In the do-while x is %i \n");
//        }while(x);
//
//        for(int i=0;i<7;i++){
//            if (i==3){
//                printf("i is 3 so a continue command will be executed \n");
//                continue;
//            }
//            printf("i is %i \n",i);
//        }
//    return 0;
//    }

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


int main(int argc, char*argv[]) {
    int x = 5;
    int z=3;
    goToDestination:if (z=3){
    printf("z is %i \n",z++);
    goto goToDestination;
}
    return 0;
}