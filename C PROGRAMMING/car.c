#include <stdio.h>   // Header file for printf() and scanf()

//------------------------------------------------------
// Function 1 : Store Parking Occupancy Data
//------------------------------------------------------
void storeData(int arr[], int n)
{
    int i;   // Loop variable

    printf("Enter parking occupancy for %d hours:\n", n);

    // Read parking data for every hour
    for(i = 0; i < n; i++)
    {
        printf("Hour %d : ", i + 1);

        // Store the entered value in the array
        scanf("%d", &arr[i]);
    }
}

//------------------------------------------------------
// Function 2 : Display Parking Data
//------------------------------------------------------
void displayData(int arr[], int n)
{
    int i;

    printf("\n----- Parking Occupancy Data -----\n");

    // Print every element of the array
    for(i = 0; i < n; i++)
    {
        printf("Hour %d --> %d vehicles\n", i + 1, arr[i]);
    }
}

//------------------------------------------------------
// Function 3 : Find the Busiest Hour
//------------------------------------------------------
void busiestHour(int arr[], int n)
{
    int i;

    // Assume first hour has maximum vehicles
    int max = arr[0];

    // Assume busiest hour is Hour 1
    int hour = 1;

    // Compare remaining elements
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];      // Update maximum value
            hour = i + 1;      // Save hour number
        }
    }

    printf("\nBusiest Hour : Hour %d\n", hour);
    printf("Maximum Vehicles Parked : %d\n", max);
}

//------------------------------------------------------
// Function 4 : Calculate Average Occupancy
//------------------------------------------------------
void averageOccupancy(int arr[], int n)
{
    int i;

    int sum = 0;

    float avg;

    // Find total vehicles
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    // Calculate average
    avg = (float)sum / n;

    printf("\nAverage Parking Occupancy = %.2f vehicles\n", avg);
}

//------------------------------------------------------
// Function 5 : Check Threshold
//------------------------------------------------------
void thresholdCheck(int arr[], int n, int threshold)
{
    int i;

    // Flag variable
    // 0 = No hour found
    // 1 = At least one hour found
    int found = 0;

    printf("\nHours where occupancy exceeded %d vehicles:\n", threshold);

    for(i = 0; i < n; i++)
    {
        // Check whether current value is greater than threshold
        if(arr[i] > threshold)
        {
            printf("Hour %d --> %d vehicles\n", i + 1, arr[i]);

            found = 1;
        }
    }

    // If no hour satisfied the condition
    if(found == 0)
    {
        printf("No hour exceeded the threshold.\n");
    }
}

//------------------------------------------------------
// Main Function
//------------------------------------------------------
int main()
{
    // Array to store parking data
    int occupancy[100];

    // Number of hours
    int hours;

    // User-defined threshold
    int threshold;

    printf("Enter number of hours to analyze : ");
    scanf("%d", &hours);

    // Read parking data
    storeData(occupancy, hours);

    // Display parking data
    displayData(occupancy, hours);

    // Find busiest hour
    busiestHour(occupancy, hours);

    // Calculate average occupancy
    averageOccupancy(occupancy, hours);

    // Read threshold value
    printf("\nEnter occupancy threshold : ");
    scanf("%d", &threshold);

    // Check threshold
    thresholdCheck(occupancy, hours, threshold);

    return 0;
}