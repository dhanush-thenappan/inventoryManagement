#include <stdio.h>
#include "CRUDproducts.h"
#include <stdlib.h>


int main(){
    ProductInfo *pr1 = (ProductInfo*)malloc(sizeof(ProductInfo));
    int returnVal;
    returnVal = createProduct(pr1);
    if(!returnVal){
        printf("\nID : %d\nName : %s\nMRP : $%.2f\nQuantity : %d\nTotal Cost : $%.2f\n", pr1->id, pr1->productName, pr1->mrp, pr1->quantity, pr1->totalCost);
    }
    else{
        printf("Error occured while reading input\n");
        return 1;
    }
    return 0;
}
