#include <stdio.h>
#include <math.h>
 
int main()
{   
    int number;
    printf("Введи число, не рекомендую вводить больше 100:\n");
    scanf("%d", &number);
    int workNumber = number;
    int remainders[100];
    int remIndex = 0;
    for(int i = 2; i <= 16; i++){ //Первый цикл записывает остатки от чисел в массив
        printf("%d:", i);
        while(workNumber > 0){
            remainders[remIndex] = workNumber % i;
            workNumber = workNumber / i;
            remIndex += 1;
        }
        workNumber = number;
        for(int i = remIndex - 1; i >= 0 ; i --){ //Второй цикл печает цифры, записанные в первом массиве в обратном
            printf("%d", remainders[i]);            // порядке, т.е происходит ревёрс.
        }
        remIndex = 0;
        printf("\n");
    } 
    return 0;
}
