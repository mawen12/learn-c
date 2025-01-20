#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// 函数签名，解决ISO C99 and later do not support implicit function declarations报错
void sayHi(char name[], int age);

// best-practice，将函数声明到调用者之前，可以明确执行顺序
void sayHi(char name[], int age) {
    printf("Hello %s %d\n", name, age);
}

int max(int num1, int num2, int num3) {
    int result;
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

struct Student {
    char name[20];
    char major[20];
    int age;
    double gpa;
};

// main 是C语言执行的入口
int main() {
    /*
    if ( 2 > 1 || 2 > 3)
        printf("True");
    else
        printf("False");

    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);

     if (op == '+') {
         printf("%f", num1 + num2);
     } else if (op == '-') {
         printf("%f", num1 - num2);
     } else if (op == '*') {
         printf("%f", num1 * num2);
     } else if (op == '/') {
         printf("%f", num1 / num2);
     } else {
         printf("Invalid operator");
     }
     */

    /*
    char grade = 'F';

    switch (grade) {
        case 'A':
            printf("You did great!");
            break;
        case 'B':
            printf("You did alright!");
            break;
        case 'C':
            printf("You did poorly");
            break;
        case 'D':
            printf("You did very bad");
            break;
        case 'F':
            printf("You Failed!\n");
            break;
        default:
            printf("Invalid Grade");
    }
    */

    /*
    struct Student student1;

    student1.age = 23;
    student1.gpa = 5.7;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    printf("%d\n", student1.age);
    printf("%s\n", student1.name);
    */

    /*
    int index = 6;
    while (index <= 5) {
        printf("%d\n", index);
        index++;
    }

    do {
        printf("%d\n", index);
        index++;
    } while (index <= 6);
    */

    /*
    int secretNumber = 4;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while (guess != secretNumber && outOfGuesses == 0) {
        if (guessCount < guessLimit) {
            printf("Enter a number:");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }

    if (outOfGuesses == 1) {
        printf("Out of guesses");
    } else {
        printf("You win");
    }
    */

    /*
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    for (int i = 0; i < 6; ++i) {
        printf("%d\n", luckyNumbers[i]);
    }
    */

    /*
    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }
    */

    /*
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("age: %p\ngpa: %p\ngradle: %p\n", &age, &gpa, &grade);
    */

    /*
    int age = 30;
    // 使用 * 来指定该值类型为 Pointer，其指向计算机的Physical Memory Address，因为使用&来获取
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory address: %p\n", &age);
    printf("Pointer pAge %p\n", pAge);

    // * 用于取消引用，转而直接获取内存地址中的内容
    printf("Pointer pAge actual value is %d\n", *pAge);

    printf("%d\n", *&age);

    printf("%d\n", *&*&age);
    */


    // 打开一个文件，并保存其文件地址，其支持模式为r -> read, w -> write, a -> append
    FILE * fpointer = fopen("/Users/mawen/Documents/github/mawen12/learn-c/employees.txt", "r");

    /*
    fprintf(fpointer, "\nHello C++!");
    */

    char line[255];
    // 使用fgets读取文件第一行内容
    fgets(line, 255, fpointer);
    printf("%s", line);

    return 0;
}
