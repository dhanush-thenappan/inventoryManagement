#ifndef CRUDPRODUCTS_H

#define CRUDPRODUCTS_H
// Type definitions
// #define ProductInfo struct product ;
struct product {
    int id;
    char productName[25];
    float mrp;
    int quantity;
    float totalCost;
};

typedef struct product ProductInfo;

// Function declarations
int createProduct (ProductInfo *);

#endif