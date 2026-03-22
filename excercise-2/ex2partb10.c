#include <stdio.h>
float calculateTotal(int n);
void disc(float total);

int main()
{
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);

    float total = calculateTotal(n);
    disc(total);
}
float calculateTotal(int n)
{
    int i, x, y;
    float s_total;
    float total = 0;

    printf("\nItem\tPrice\tQuantity\tSubtotal\n");

    for(i = 1; i <= n; i++)
    {
        printf("Enter the price of item %d: ", i);
        scanf("%d", &x);

        printf("Enter the quantity of item %d: ", i);
        scanf("%d", &y);

        s_total = x * y;
        total += s_total;

        printf("Item %d\t%d\t%d\t\t%.2f\n", i, x, y, s_total);
    }

    return total;
}

// Function to calculate discount
void disc(float total)
{
    float d;

    printf("\n-----------------------------------\n");
    printf("Total amount: %.f\n", total);

    if(total < 1000)
        d = 0.05 * total;
    else if(total <= 5000)
        d = 0.10 * total;
    else
        d = 0.15 * total;

    printf("Discount: %f\n", d);
    printf("Grand Total: %f\n", total - d);
}
