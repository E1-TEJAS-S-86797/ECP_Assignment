#include<stdio.h>
/*Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15 Percent Over 50 Quantities*/
int main()
{
 int level1 = 30;               // Quantity over this level are at discount1
 int level2 = 50;               // Quantity over this level are at discount2
 float discount1 = 0.10;       // 10% discount
 float discount2 = 0.15;       // 15% discount
 float price = 5.0;       // Basic unit price
 int quantity ;
 int total ;              // 0 to 30 at full price
 int a1;                  // 31 to 50 at level1 price
 int a2;                  // Over 50 at level2 price

  printf("Enter the quantity that you require: ");
  scanf("%d", &quantity);

  if (quantity > 50)                     // Quantity over 50
    total = level1;
    a1 = level2 - level1;
    a2 = quantity - level2;
  }
  else if (quantity > 30)                // Quantity is from 30 to 50
  {
    total = level1;
    a1 = quantity - level1;
  }
  else
    total = quantity;

  printf("The total price for %f items is $%.2lf\n", quantity,
  price*(total + (1.0 - discount1)*a1 + (1.0 - discount2)*a2));
  return 0;
}

