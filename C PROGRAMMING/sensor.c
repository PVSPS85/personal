#include <stdio.h>

//------------------------------------------------------
// Function to read sensor values
//------------------------------------------------------

// ptr -> Pointer to first element of array
// n   -> Number of sensors

void readSensors(float *ptr, int n)
{
    int i;

    printf("Enter temperature readings:\n");

    // Read all sensor values
    for(i = 0; i < n; i++)
    {
        printf("Sensor %d : ", i + 1);

        // Store value using pointer arithmetic
        scanf("%f", (ptr + i));
    }
}

//------------------------------------------------------
// Function to display sensor values
//------------------------------------------------------

void displaySensors(float *ptr, int n)
{
    int i;

    printf("\n------ Sensor Temperature Data ------\n");

    for(i = 0; i < n; i++)
    {
        // *(ptr+i) means value at current sensor
        printf("Sensor %d --> %.2f Degree Celsius\n",
               i + 1,
               *(ptr + i));
    }
}

//------------------------------------------------------
// Function to find highest, lowest and average
//------------------------------------------------------

void calculateData(float *ptr, int n)
{
    int i;

    float max;
    float min;
    float sum = 0;
    float avg;

    // Assume first sensor value is highest and lowest
    max = *ptr;
    min = *ptr;

    for(i = 0; i < n; i++)
    {
        // Highest temperature
        if(*(ptr + i) > max)
            max = *(ptr + i);

        // Lowest temperature
        if(*(ptr + i) < min)
            min = *(ptr + i);

        // Add every value
        sum = sum + *(ptr + i);
    }

    // Calculate average
    avg = sum / n;

    printf("\nHighest Temperature = %.2f C", max);
    printf("\nLowest Temperature  = %.2f C", min);
    printf("\nAverage Temperature = %.2f C\n", avg);
}

//------------------------------------------------------
// Function to update one sensor value
//------------------------------------------------------

void updateSensor(float *ptr, int index, float newValue)
{
    // Replace old temperature with new one
    *(ptr + index) = newValue;
}

//------------------------------------------------------
// Main Function
//------------------------------------------------------

int main()
{
    int n;
    int index;

    float sensors[100];
    float newTemp;

    printf("Enter number of sensors : ");
    scanf("%d", &n);

    // Read data
    readSensors(sensors, n);

    // Display data
    displaySensors(sensors, n);

    // Display statistics
    calculateData(sensors, n);

    // Update one sensor
    printf("\nEnter sensor number to update : ");
    scanf("%d", &index);

    printf("Enter new temperature : ");
    scanf("%f", &newTemp);

    // index-1 because array starts from 0
    updateSensor(sensors, index - 1, newTemp);

    printf("\nUpdated Sensor Data\n");

    displaySensors(sensors, n);

    return 0;
}