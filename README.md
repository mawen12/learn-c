# Learn C Programming

## 一、First Section

## 二、Second Section

### 1.void

void can be used as function parameter, function return value, and data type.

#### void function parameter

the function takes nothing.
```c++
int myFunc(void)
```

#### void function return value

the functions returns nothing
```c++
void myFunc(int)
```

#### void data type

generic data pointer, 'data' is a pointer to data of unknown type, and cannot be dereferenced.
```c++
void * data
```

### 2.\0

The null character '\0'(also 'null' terminator), abbreviated 'NULL', is a control character with the value zero.

### 3.Pointer with * & **

'Pointer' is a variable that stores/points the address of another variable.
It is like a variable, but it can store only the address not the data.

'int A;' declares a normal variable so it will store the data.
'int *B;' declares a pointer variable so it will store only the address not the data.

'A = 10;' variable a has the value 10(data) stored in it.
'B = &A;' The & helps to give you the address of the variable. As variable B is declared as a pointer variable, address of the variable A will be stored in it.

'int C; C = *B;' The * help tp give you the real data of the address. This process is also called 'Dereferencing or Value at address'. 

'**' Pointer to pointer is also a variable that stores/points the address of another pointer variable.
This may not efficient to above kind of simple programs, but really helpful when you want to process a large amount of list data like arrays, linked list.

```c++
int a, *b, **c;
a = 10; ---> variable
b = &a; ---> pointer variable
c = &b; ---> pointer to pointer variable
```

```c++
#include <stdio.h>
void fill_data(int **x);

int main()
{
    int a = 0;
    int *b;
    b = &a;
    printf("%d\n", a); /* display as 0 */
    fill_data(&b);
    printf("%d\n", a); /* display as 20 */
    
    return 0;
}

// technically it will be x = &b but b = &a so b is an ptr var
void fill_data(int **x) {
    **x = 20; // a is initialized as 20 indrectly
}
```

#### variable
'int i' declares as int.
'int *p' declares a pointer to an int.

#### method declare
'void foo(int i)' declares a function taking an int(by vale, i.e. as a copy).
'void foo(int *p)' declares a function taking a pointer to an int.
'void foo(int **p)' declares a function taking a pointer to pointer.

#### method call
'foo(i)' calls 'void foo(int p)'. The parameter is passed as a copy.
'foo(&i)' takes the address of the int 'i', and calls 'void foo(int *p)' with that address.
'foo(&&i)' takes the pointer of the pointer 'i'

### 4.#define

'#define' is a preprocessor directive is usded to define macros.
The macros are the identifiers defined by #define which are replaced by their value before compilation.
When we used the variable, 

#### define constants

```c++
#define MACRO_NAME value
```

#### define expressions

```c++
#define MACRO_NAME (expression with brackets)
```

#### define expressions with parameters

```c++
#define MACRO_NAME(ARG1, ARG2,..) (expression with brackets)
```

#### example

```c++
#include <stdio.h>

#define CIRCLE_AREA(r) (3.14 * r * r)
#define PI 3.14159265359

int main()
{
    int radius = 21;
    int area;
    
    area = PI * radius * radius;
    
    printf("Area of Circle of radius %d: %d", radius, area);
    
    area = CIRCLE_AREA(radius);
    printf("Area of Circle of radius %d: %d", radius, area);
    
    return 0;
}
```

### 5.data type

#### Integer
| Data Type | Length       | Description                                                                                     | Example |
|----------|--------------|-------------------------------------------------------------------------------------------------|---------|
| char     | 1 byte       | -128 to 127, or 0 to 255, Stores a single character/letter/number, or ASCII values              | 'A'     |
| unsigned char | 1 byte | 0 to 255                                                                                        | 'A'     |
| singed char | 1 byte | -128 to 127                                                                                     | 'A'     |
| int      | 2 or 4 bytes | -32768 to 32767 or -2147483648 to 2147483647 Stores whole numbers, without decimals             | 1       |
| unsigned int | 2 or 4 bytes | 0 to 65535 or 0 to 4294967295 | 1       |
| short | 2 bytes | -32768 to 32767 | 1       |
| unsigned short | 2 bytes | 0 to 65535 | 1 |
| long | 8 bytes | -9223372036854775808 to 9223372036854775807 | 8 | 
| float    | 4 bytes      | Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits | 1.99    |
| double   | 8 bytes      | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits | 1.99    |

#### Floating-Point
| Data Type | Length       | Description                                                                                     | Example |
|----------|--------------|-------------------------------------------------------------------------------------------------|---------|
| float    | 4 bytes      | Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits | 1.99    |
| double   | 8 bytes      | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits | 1.99    |
| long double | 10 bytes | 3.4E-4932 to 1.1E+4932 | |


### 6.size_t

It used with 'sizeOf', save the length bytes of dest.

```c++
char a = 'A';
size_t az = sizeOf(a);
printf("%d\n", az); // 1

char[] cc = "Hello World";
size_t cz = sizeOf(cc);
printf("%d\n", cz); // 11

int num = 10;
size_t nz = sizeOf(num);
printf("%d\m", nz); // 4 
```

