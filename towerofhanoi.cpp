#include <iostream>
using namespace std;


/*
    PROGRAM: Tower of Hanoi

    PURPOSE:
    To move n disks from the source rod to the
    destination rod using a helper rod.

    RULES:
    1. Only one disk can be moved at a time.
    2. Only the top disk can be moved.
    3. A larger disk cannot be placed on a smaller disk.

    CONCEPT USED:
    Recursion
*/


// Function to solve Tower of Hanoi
//
// n           -> number of disks
// source      -> source rod
// helper      -> helper rod
// destination -> destination rod

void towerOfHanoi(int n, char source, char helper, char destination)
{

    // BASE CASE
    // If there is only one disk,
    // directly move it from source to destination.

    if (n == 1)
    {
        cout << "Move disk from "<< source << " to "<< destination << endl;

        return;
    }


    // STEP 1
    // Move n-1 disks from source to helper.
    //
    // Here destination acts as the helper.

    towerOfHanoi(n - 1, source, destination, helper);


    // STEP 2
    // Move the largest remaining disk
    // from source to destination.

    cout << "Move disk from "<< source << " to "<< destination << endl;


    // STEP 3
    // Move the n-1 disks from helper
    // to destination.
    //
    // Here source acts as the helper.

    towerOfHanoi(n - 1, helper, source, destination);
}


int main()
{

    // Variable to store number of disks
    int n;


    // Ask the user for number of disks
    cout << "Enter the number of disks: ";
    cin >> n;


    // Start Tower of Hanoi
    //
    // A = Source
    // B = Helper
    // C = Destination

    towerOfHanoi(n, 'A', 'B', 'C');


    return 0;
}