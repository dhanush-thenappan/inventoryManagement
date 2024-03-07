#include <stdio.h>
#include "CRUDproducts.h"



int createProduct (ProductInfo *product) {
    printf("\nCreate a new product : \n");
    printf("Enter Product ID : ");
    scanf("%d", &(product -> id));
    printf("Enter Product name : ");
    getchar();
    scanf("%[^\n]%*c", (product -> productName));
    printf("Enter Maximum Retail Price (MRP) : ");
    scanf("%f", &(product -> mrp));
    printf("Enter the quantity to be added : ");
    scanf("%d", &(product -> quantity));
    // printf("1");
    (product -> totalCost) = (product -> mrp) * (product -> quantity);
    // printf("2");
    return 0;
}