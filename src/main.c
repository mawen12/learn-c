#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <typeDefDemo.h>

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

struct Demo {
    // void 代表任意类型，* 代表一个指针
    void *ptr;
};

void incVal(int val) {
    val++;
}

// 使用 * 声明指向int类型的指针
void incVal2(int *val) {
    *val = *val + 1;
}

// 使用 ** 声明指向指针的指针
void incVal3(int **val) {
    **val = **val + 1;
}

typedef char *sds;

#define ZERO 0;

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
    FILE *fpointer = fopen("/Users/mawen/Documents/github/mawen12/learn-c/employees.txt", "r");

    /*
    fprintf(fpointer, "\nHello C++!");
    */

    /*
    char line[255];
    // 使用fgets读取文件第一行内容
    fgets(line, 255, fpointer);
    printf("%s", line);
    */

    /*
    struct Demo demo;
    demo.ptr = "NXA";

    char *opt = demo.ptr;
    printf("%c %c %c\n", opt[0], opt[1], opt[2]);
    printf("%p\n", &opt);

    int a = 10;
    if (a >= 5) {
        printf("a %d is better than 5", a);
    }
    else if (a >= 6) {
        printf("a %d is better than 6", a);
    }
    */

    /*
    int val = 10;
    incVal(val);
    // print 10
    printf("%d\n", val);

    incVal(*&val);
    // print 10
    printf("%d\n", val);

    int *val2 = &val;
    // 使用 & 获取变量的内存地址
    incVal2(val2);
    // print 11
    printf("%d\n", *val2);

    incVal3(&val2);
    // print 12
    printf("%d\n", *val2);

    int type = ZERO;
    if (0 == type) {
        printf("is 0\n");
    }

    char str[] = "Mawen";
    sds s = str;
    unsigned char c = s[-1];
    printf("%d\n", c);
    printf("%c\n", c);
    */

    char c = 'A';
    size_t cs = sizeof(c);
    printf("%d\n", cs); // 1 byte

    char name[] = "Hello World";
    size_t len = strlen(name);
    printf("%d\n", len);// 11 bytes

    int num = 1;
    size_t len1 = sizeof(num);
    printf("%d\n", len1);// 4 bytes

    unsigned int numu = 1;
    size_t numus = sizeof(numu);
    printf("%d\n", numus);// 4 bytes

    long numl = 4;
    size_t numlz = sizeof(numl);
    printf("%d\n", numlz); // 8 bytes

    float f = 1.99;
    size_t fz = sizeof(f);
    printf("%d\n", fz); // 4 bytes

    double d = 1.99;
    size_t dz = sizeof(d);
    printf("%d\n", dz); // 8 bytes

    long long nll = 317584931803ll;
    size_t nllz = sizeof(nll);
    printf("%d\n", nllz); // 8 bytes


    char cc = '8';
    // 将char转换为int
    printf("%d\n", cc - '0');


    int n = 1;
    printf("1<<0 is %d\n", n << 0);
    printf("1<<1 is %d\n", n << 1);
    printf("1<<2 is %d\n", n << 2);

    printf("%d\n", (0 << 8 | n));
    printf("%d\n", (1 << 8 | 1 << 1));


    return 0;
}
