#include <stdio.h>
/* prints out the inventory
   prints out the prices of items
   adds the total together
*/
// void printInventory(struct inventory list);
struct inventory {

       char item[20];
       char category[20];
       int price;
};
void printInventory(struct inventory list);
int main(){

    struct inventory flour = {"wheat-flour ","perishable",200};
    struct inventory cups = {"melamine ","fragile ",100};
    struct inventory plates = {"plastic ", "fragile ",100};

    printInventory(flour);
    printInventory(cups);
    printInventory(plates);

    return(0);
}
void printInventory(struct inventory list){
printf("Item: %s\n", list.item);
printf("category: %s\n", list.category);
printf("each @%d\n\n", list.price);

}
