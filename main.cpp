#include <iostream>
#include <iomanip>
#include <cstdlib> // for atoi
using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " <list of numbers>" << endl;
        return 1;
    }

    int n = argc - 1;       // number of integers
    int *pa = new int[n];   // dynamic allocation

    // Fill the array from argv
    for (int i = 0; i < n; i++) {
        pa[i] = atoi(argv[i + 1]); // convert string to int
    }

    // Print original array
    cout << "Original: ";
    for (int i = 0; i < n; i++) {
        cout << setw(3) << pa[i];
    }
    cout << endl;

    // Reverse the array
    for (int i = 0; i < n / 2; i++) {
        int temp = pa[i];
        pa[i] = pa[n - 1 - i];
        pa[n - 1 - i] = temp;
    }

    // Print reversed array
    cout << "Reversed: ";
    for (int i = 0; i < n; i++) {
        cout << setw(3) << pa[i];
    }
    cout << endl;

    // Free allocated memory
    delete[] pa;

    return 0;
}
