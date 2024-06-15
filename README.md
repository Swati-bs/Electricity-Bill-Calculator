# Electricity-Bill-Calculator
This C program calculates electricity bills with a fixed 100 Rs meter charge. Rates: 0-200 units at 0.80 Rs/unit, 200-300 units at 0.90 Rs/unit, above 300 units at 1.00 Rs/unit. Includes a 15% surcharge if total exceeds 400 Rs, ensuring precise billing based on consumption.


**NOW LET'S DIVE INTO IT IN DETAIL** 


**Electricity Bill Calculator in C**
Welcome to my Electricity Bill Calculator project! This C program is designed to calculate electricity bills based on specific unit consumption rates and predefined charges. Below, you'll find a detailed description of how the program works and the considerations made for the calculations.

**Key Considerations:**
Default Meter Charge: Every bill includes a fixed meter charge of 100 Rs.
Unit Charges:
0 to 200 units: 0.80 Rs per unit
200 to 300 units: 0.90 Rs per unit
Above 300 units: 1.00 Rs per unit
Surcharge:
If the total amount exceeds 400 Rs, an additional 15% surcharge is applied to the total amount.

**Detailed Description:**
Including Standard I/O Library: The program begins by including the standard input/output library (<stdio.h>), which is necessary for using printf and scanf functions for input and output operations.

**Electricity Bill Calculation Function:**

-->Units <= 200: Multiplies the units by 0.80 Rs to get the total cost for the first 200 units or less.
-->Units between 200 and 300: Charges the first 200 units at 0.80 Rs each, and any additional units (up to 100) at 0.90 Rs each.
-->Units above 300: Charges the first 200 units at 0.80 Rs each, the next 100 units at 0.90 Rs each, and any additional units above 300 at 1.00 Rs each.

**Main Function:**
-->Prompts the user to enter the number of units consumed.
-->Adds a base charge of 100 Rs to the total bill calculated by the electricity_bill function.
-->Checks if the total bill exceeds 400 Rs. If it does, it adds a 15% surcharge to the total amount.
-->Prints the final electricity bill amount.

**Benefits:**
-->Accurate Billing: Calculates the electricity bill based on the exact unit consumption and predefined rates.
-->Surcharge Calculation: Automatically adds a surcharge for higher consumption, ensuring the bill reflects accurate charges.
-->User-Friendly: Simple input prompts and clear output make it easy to use.
