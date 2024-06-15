// Electricity Bill Calculaator : Swati Bhat
 /* Considerations made: 
 default meter charge -100Rs
  0 to 200 units  - 100+0.80/unit
200 to 300 units - 100+0.80/unit + 0.90/unit
 units > 300 units - 1Rs/unit
 amount > 400Rs - total + 0.15 * total*/
#include<stdio.h>
int electricity_bill(int units)
{// Electricity Bill Calculator
// Considerations:
// 1. Default meter charge: 100 Rs
// 2. Unit charges:
//    - 0 to 200 units: 0.80 Rs per unit
//    - 200 to 300 units: 0.90 Rs per unit
//    - Above 300 units: 1.00 Rs per unit
// 3. Surcharge:
//    - If the total amount exceeds 400 Rs, an additional 15% of the total amount is added as a surcharge.

#include<stdio.h>  // Required for input and output functions like printf and scanf

// Function to calculate the electricity bill based on units consumed
int electricity_bill(int units) {
    // Calculate the bill for units <= 200
    if (units <= 200) {
        return units * 0.80;
    }
    // Calculate the bill for units between 200 and 300
    else if (units <= 300) {
        return (200 * 0.80) + (units - 200) * 0.90;
    }
    // Calculate the bill for units above 300
    else {
        return (200 * 0.80) + (100 * 0.90) + (units - 300) * 1.00;
    }
}

int main() {
    int units, baseCharge = 100;  // Base charge is fixed at 100 Rs
    printf("Enter the units: ");
    scanf("%d", &units);
    
    // Calculate the total bill including the base charge
    int total = baseCharge + electricity_bill(units);
    
    // Check if the total exceeds 400 Rs and apply a surcharge if necessary
    if (total > 400) {
        total += total * 0.15;
    }
    
    // Print the final electricity bill
    printf("The electricity bill is: %d\n", total);
    return 0;
}

    if (units < 200)
    {
        return units * 0.80;
    }
    else if (200 <= units < 300)
    {
        return (200*0.80) + (units - 200) * 0.90;
    }
    else
    {
        return (1*units);
    }
}
int main()
{
    int units;
    printf("Enter the units: ");    
    scanf("%d", &units);
    int total=100 + (electricity_bill(units));
    if((electricity_bill(units)) > 400)
    {
        total = total + (total*0.15);
    }
    printf("The electricity bill is: %d\n", total);
    return 0;
}