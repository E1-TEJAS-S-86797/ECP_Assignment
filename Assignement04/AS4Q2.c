    #include <stdio.h>  
    #include <math.h>  
    int main ()  
    {  
        // declare local variable  
        long int base, exp;   
        printf (" Enter the base value: ");  
        scanf (" %d", &base); // take a number from user  
          
        printf (" Enter the power value: ");  
        scanf (" %d", &exp); // take a number from user  
          
        // use pow() function to pass the base and exp variable  
        printf (" %d to the power %d is = %d ", base, exp, pow_num (base, exp));  
    }  
      
    // definition of the function  
    int pow_num (int x, int y)  
    {  
        int power = 1, i; // declare variables  
        for (i = 1; i <= y; ++i)  
        {  
            power = power * x;  
              
        }  
        return power;  
    }    
