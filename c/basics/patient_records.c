#include <stdio.h>

//------------------------------------------------------
// Structure Definition
//------------------------------------------------------

// A structure to store details of one patient
struct patient
{
    int id;                 // Patient ID
    char name[30];          // Patient Name
    int age;                // Patient Age
    char disease[40];       // Disease Name
    float fee;              // Consultation Fee
};

//------------------------------------------------------
// Function to Read Patient Details
//------------------------------------------------------

void read_data(struct patient p[], int n)
{
    int i;

    // Read details of all patients
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Patient %d\n", i + 1);

        printf("Enter Patient ID : ");
        scanf("%d", &p[i].id);

        printf("Enter Patient Name : ");
        scanf("%s", p[i].name);

        printf("Enter Patient Age : ");
        scanf("%d", &p[i].age);

        printf("Enter Disease : ");
        scanf("%s", p[i].disease);

        printf("Enter Consultation Fee : ");
        scanf("%f", &p[i].fee);
    }
}

//------------------------------------------------------
// Function to Display Patient Details
//------------------------------------------------------

void display(struct patient p[], int n)
{
    int i;

    printf("\n========== Patient Records ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nPatient %d\n", i + 1);

        printf("Patient ID   : %d\n", p[i].id);

        printf("Name         : %s\n", p[i].name);

        printf("Age          : %d\n", p[i].age);

        printf("Disease      : %s\n", p[i].disease);

        printf("Fee          : %.2f\n", p[i].fee);
    }
}

//------------------------------------------------------
// Function to Calculate Total and Average Fee
//------------------------------------------------------

void total_avg(struct patient p[], int n)
{
    int i;

    float sum = 0;
    float avg;

    // Calculate total consultation fee
    for(i = 0; i < n; i++)
    {
        sum = sum + p[i].fee;
    }

    // Calculate average fee
    avg = sum / n;

    printf("\nTotal Consultation Fee = %.2f", sum);

    printf("\nAverage Consultation Fee = %.2f\n", avg);
}

//------------------------------------------------------
// Function to Search Patient by ID
//------------------------------------------------------

void search(struct patient p[], int n, int searchID)
{
    int i;

    int found = 0;      // Initially patient is not found

    for(i = 0; i < n; i++)
    {
        if(p[i].id == searchID)
        {
            printf("\nPatient Found\n");

            printf("\nPatient ID : %d", p[i].id);

            printf("\nName       : %s", p[i].name);

            printf("\nAge        : %d", p[i].age);

            printf("\nDisease    : %s", p[i].disease);

            printf("\nFee        : %.2f\n", p[i].fee);

            found = 1;

            break;
        }
    }

    if(found == 0)
    {
        printf("\nPatient Not Found\n");
    }
}

//------------------------------------------------------
// Function to Display Patients Above Given Age
//------------------------------------------------------

void AboveAge(struct patient p[], int n, int agelimit)
{
    int i;

    printf("\nPatients Above Age %d\n", agelimit);

    for(i = 0; i < n; i++)
    {
        if(p[i].age > agelimit)
        {
            printf("%s (Age : %d)\n", p[i].name, p[i].age);
        }
    }
}

//------------------------------------------------------
// Main Function
//------------------------------------------------------

int main()
{
    struct patient p[20];

    int n;
    int searchID;
    int agelimit;

    printf("Enter Number of Patients : ");
    scanf("%d", &n);

    // Read patient details
    read_data(p, n);

    // Display patient details
    display(p, n);

    // Display total and average fee
    total_avg(p, n);

    // Search patient
    printf("\nEnter Patient ID to Search : ");
    scanf("%d", &searchID);

    search(p, n, searchID);

    // Display patients above given age
    printf("\nEnter Age Limit : ");
    scanf("%d", &agelimit);

    AboveAge(p, n, agelimit);

    return 0;
}