Water Viewer 2

CPPS Project by Yee Hao

Project Specification

a.Brief Description
To use average water consumption by household type in Singapore in 2014 data to derive and display:
1. Average water consumption of HDB households for selected household across 12 months.
2. Water consumption of a selected household for a selected month.
3. Differences between average water consumption and water consumption of each household type for a selected month.
4. Display quarterly total(Jan-Mar, Apr-Jun, Jul-Sep, and Oct-Dec) water consumption of a selected HDB household.
5. Display the lowest water consumption and its corresponding months and household type from Jan to Dec.
6. Find the difference in water consumptions of HDB 5-room in each consecutive month. Display the highest increase amount and its corresponding month (eg. Jan-Feb,Feb_mar etc).

b.Scope of Project

Type of input data
-Average water consumption of each household, stored as float
-User menu choice (a,b,c,d,e,f) stored as character
-Total water consumption of HDB households in 12 months stored as float
-User's choice of month and household stored as integer
-Quarterly total of water consumption of selected HDb household stored as float
-Difference in average water consumption stored as float

Amount of input data
-12 months across 5 types of HDB rooms
-6 choices in the main menu


Project Analysis

Problem Statement 1 (Function 1)
What are the required output data?
Average water consumption for a selected household, across 12 months.
How is the required output(s) derived?
Using a for loop to add up all values in the selected household’s array, then dividing the total by 12.
Problem Statement 2 (Function 2)
What are the required output data?
    Water consumption of a selected household, during a selected month.
How is the required output(s) derived?
Use switch case and do-while loop to allow the user to select household and month.

Problem Statement 3 (Function 3)
What are the required output data?
Difference between average water consumption and water consumption of each household type for a selected month
How is the required output(s) derived?
Use average from function 1 and selection from function 2, then take output of function 2 - average from function 1.

Problem Statement 4 (Function 4)
What are the required output data?
Quarterly total water consumption of a selected HDB household
How is the required output(s) derived?
Use switch case to allow user to select household, then use for loop to calculate water consumption for each quarter.

Problem Statement 5 (Function 5)
What are the required output data?
Lowest water consumption and its corresponding months and household type.
How is the required output(s) derived?
    Use the findMin() function found in additional topic 1 to find the lowest water consumption.
    
    Problem Statement 6 (Function 6)
    What are the required output data?
    Difference between water consumptions of HDB 5-Room in each consecutive month, and highest increase amount and its corresponding month
    How is the required output(s) derived?
    Create new array to store differences between water consumptions of HDB 5room in each consecutive month. Use findMax() function found in additional topic 1 to find the highest increase amount, then compare with the original household[] array to find its corresponding month.
