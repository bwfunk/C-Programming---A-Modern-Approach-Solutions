/* C Programming, A Modern Approach - K. N. King
 * Chapter 2 - C Fundamentals exercise solutions (page 33)
 */

/* 1. Default code given neglects 'return 0'

#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
    return 0;
}

*/

/* 2.a) Directive: #include <stdio.h> | Statements: all printf function calls (x3), return statement
 * b) Parkinson's Law:
      Work expands so as to fill the time
      available for its completion.
*/ 

/* 3. 

#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10, volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165)/166);

    return 0;
}

*/

/* 4. int values at test: 0, 16, 581
      float values at test: 0.000000, 0.000000, -125774918608939771915927552.000000
      No discernible pattern

#include <stdio.h>

int main(void)
{
    int test1, test2, test3;
    float ftest1, ftest2, ftest3;

    printf("%d, %d, %d\n", test1, test2, test3);
    printf("%f, %f, %f\n", ftest1, ftest2, ftest3);

    return 0;
}

*/

// 5. a is not legal - starts with number; b is legal, though discouraged as it starts with an underscore

// 6. It is difficult to tell how many underscores are in the identifier

// 7. for, while; main, printf are also restricted, though not keywords (they are functions in the standard library); If has a capital 'i' and therefore not recognized as a keyword

// 8. answer, =, (, 3, *, q, -, p, *, p, ), /, 3, ; are the tokens, total of 14

// 9. answer = (3 * q - p * p) / 3;

// 10. The space between '#include' and '<stdio.h>'; 'int' and 'main'; 'int' and 'height'; 'return' and '0'; the spaces in the string literals, in order to produce the same output

/* Programming Projects solutions (page 34)
 */

/* 1.

#include <stdio.h>

int main(void) 
{
    printf("       *\n      *\n     *\n*   *\n * *\n  *\n");

    return 0;
}

*/

/* 2. If 4/3 used in fraction, result is 1 if %d or 0.000000 if %f (integer division is truncated)

#include <stdio.h>

int main(void)
{
    int radius = 10;
    float pi = 3.14f;

    printf("volume = %f", 4.0f/3.0f * pi * radius * radius * radius);

    return 0;
}

*/

/* 3. 

#include <stdio.h>

int main(void)
{
    int radius;
    float pi = 3.14f;

    printf("Please enter the radius: ");
    scanf("%d", &radius);
    printf("Volume = %f", 4.0f/3.0f * pi * radius * radius * radius);

    return 0;
}

*/

/* 4.

#include <stdio.h>

int main(void) 
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: %.2f", 1.05*amount);

    return 0;
}

*/ 

/* 5. 

#include <stdio.h>

int main(void)
{
    float x;

    printf("Please enter a value for x: ");
    scanf("%f", &x);
    printf("The polynomial value is %f.", 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6);

    return 0;
}

*/

/* 6.

#include <stdio.h>

int main(void)
{
    float x;

    printf("Please enter a value for x: ");
    scanf("%f", &x);
    printf("The polynomial value is %f.", ((((3*x + 2)*x - 5)*x -1)*x + 7)*x - 6);

    return 0;
}

*/

/* 7.

#include <stdio.h>

int main(void)
{
    int total, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &total);

    twenties = total / 20;
    tens = (total - 20*twenties) / 10;
    fives = (total - 20*twenties - 10*tens) / 5;
    ones = (total - 20*twenties - 10*tens - 5*fives);

    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", twenties, tens, fives, ones);

    return 0;
}

*/

/* 8.

#include <stdio.h>

int main(void)
{
    float loan, interest, monthly, interest_mth;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment ");
    scanf("%f", &monthly);

    interest_mth = ((interest / 100) / 12) + 1.0;

    printf("\nBalance remaining after first payment: %.2f\n", (loan*interest_mth - monthly));
    printf("Balance remaining after second payment: %.2f\n", (loan*interest_mth - monthly)*interest_mth - monthly);
    printf("Balance remaining after third payment: %.2f\n", ((loan*interest_mth - monthly)*interest_mth - monthly)*interest_mth - monthly);

    return 0;
}

*/