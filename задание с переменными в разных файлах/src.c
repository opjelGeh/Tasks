#include <stdio.h>
#include <locale.h>


extern int intperem3; 
extern char charperem1;
extern short shortperem2;

int main()
{
    
    setlocale(LC_ALL, "Rus");
    
    printf("int %d short %d char %c\n", intperem3, shortperem2,charperem1);

    intperem3++;
    charperem1++;
    shortperem2++;

    printf("increment for int %d short %d char %c\n", intperem3, shortperem2,charperem1);

    intperem3 = charperem1 + shortperem2;

    printf("summ int = char + short int %d short %d char %c\n", intperem3, shortperem2,charperem1);

    int temp = intperem3;
    int intperem3 = charperem1;
    charperem1 = temp;

    printf("swap int and char int %d short %d char %c\n", intperem3, shortperem2,charperem1);

    intperem3 += shortperem2; printf(" + short %d\n", intperem3);
    intperem3 -= charperem1; printf(" - char%d\n", intperem3);
    intperem3 *= charperem1; printf(" * char%d\n", intperem3);
    intperem3 /= shortperem2; printf(" / short%d\n", intperem3);

    return 0;
}