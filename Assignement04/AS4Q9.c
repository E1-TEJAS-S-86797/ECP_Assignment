#include <stdio.h> 

// Function is used to check whether the number given is prime or Not

int is_Prime(int num)

{

    int i, temp = 0; 

    // iterate up to num/2.

    for (i = 2; i <= num / 2; i++)

    {

        // if num has factors, 

        // update temp.

        if (num % i == 0)

        {

            temp++;

        }

    }

    return temp;

} 

int main()

{

    int num, temp = 0; 

    printf("Enter the number you want to check for Prime: ");

    scanf("%d", &num);

    // Calling function 

    temp = is_Prime(num);

    if (temp == 0 && num != 1)

    {

        printf("\n %d is a Prime Number", num);

    }

    else

    {

        printf("\n %d is Not a Prime Number", num);

    }

    return 0;

}
