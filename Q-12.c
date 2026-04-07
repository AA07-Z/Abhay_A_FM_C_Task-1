#include <stdio.h>

struct Product
{
    int productID;
    char productName[50];
    int quantity;
    float price;
};

int main()
{
    int n, i;
    float totalValue = 0;

    printf("Enter number of products: ");
    scanf("%d", &n);

    struct Product p[n];

    // Input product details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details for product %d\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &p[i].productID);

        printf("Product Name: ");
        scanf("%s", p[i].productName);

        printf("Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Price: ");
        scanf("%f", &p[i].price);

        totalValue += p[i].quantity * p[i].price;
    }

    int maxQtyIndex = 0;
    int maxPriceIndex = 0;

    // Find product with highest quantity and price
    for(i = 1; i < n; i++)
    {
        if(p[i].quantity > p[maxQtyIndex].quantity)
        {
            maxQtyIndex = i;
        }

        if(p[i].price > p[maxPriceIndex].price)
        {
            maxPriceIndex = i;
        }
    }

    // Display total inventory value
    printf("\nTotal Inventory Value = %.2f\n", totalValue);

    // Product with highest quantity
    printf("\nProduct with Highest Quantity:\n");
    printf("ID: %d\n", p[maxQtyIndex].productID);
    printf("Name: %s\n", p[maxQtyIndex].productName);
    printf("Quantity: %d\n", p[maxQtyIndex].quantity);
    printf("Price: %.2f\n", p[maxQtyIndex].price);

    // Product with highest price
    printf("\nProduct with Highest Price:\n");
    printf("ID: %d\n", p[maxPriceIndex].productID);
    printf("Name: %s\n", p[maxPriceIndex].productName);
    printf("Quantity: %d\n", p[maxPriceIndex].quantity);
    printf("Price: %.2f\n", p[maxPriceIndex].price);

    return 0;
}
