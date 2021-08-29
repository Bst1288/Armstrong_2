#include<stdio.h>
#include<math.h>

int Check_Armstrong(int);
int main() {
    int num, sum = 0;
    printf("Enter number : ");
    scanf_s("%d", &num);

    sum = Check_Armstrong(num);
    printf("sum = %d\n", sum);

    if (num == sum)
        printf("\n%d is Armstrong Number\n", num);
    else
        printf("\n%d isn't a Armstrong Number\n", num);

    return 0;

}

int Check_Armstrong(int num) {
    int x, r, e = 0, sum = 0;

    x = num;
    while (x != 0)
    {
        x = x / 10;
        e++;
    }

    x = num;
    for (x = num; x > 0; x / 10)
    {
        r = x % 10;
        sum = sum + pow(r, e);
        x = x / 10;
    }
    return sum;
}