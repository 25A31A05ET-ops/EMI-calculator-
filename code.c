#include <stdio.h>

int main()
{
    int p, r, n, i;
    float interest, total_interest = 0, balance;

    printf("Enter the no of months: ");
    scanf("%d", &n);

    printf("Enter the rate and EMI value: ");
    scanf("%d %d", &r, &i);

    printf("Enter the principal amount: ");
    scanf("%d", &p);

    printf("\nPrincipal | Interest | EMI | Balance\n");

    balance = p;

    for (i = 1; i <= n; i++)
    {
        interest = (p * r) / 100.0;
        balance = balance - i;

        printf("%d | %.2f | %d | %.2f\n", p, interest, i, balance);

        total_interest += interest;
        p = balance;
    }

    printf("\n--------------------------------\n");

    printf("Total interest paid: %.2f\n", total_interest);
    printf("Balance amount: %.2f\n", balance);

    return 0;
}