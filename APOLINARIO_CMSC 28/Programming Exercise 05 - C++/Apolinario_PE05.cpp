// JOHNRIC A. APOLINARIO | May 11, 2024 
/*This program is designed to perform basic statistical analysis on a set of user-inputted numbers, which can be either positive or negative but not zero. It calculates and returns the largest and smallest values in the set, providing a range of the data. The purpose of this program is to provide a simple and interactive way for users to quickly analyze a set of numerical data.*/

#include <iostream>
#include <cmath>

// This function gets the largest value in the array and returns it
int getLargest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    return max;
}

// This function gets the smallest value in the array and returns it
int getSmallest(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// This function calculates the average of the elements in the array
double getAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

// This function calculates the standard deviation of the elements in the array
double getStandardDeviation(int arr[], int size) {
    double mean = getAverage(arr, size);
    double sum = 0;
    for (int i = 0; i < size; i++) {
        double diff = arr[i] - mean;
        sum += diff * diff; 
    }
    return sqrt(sum / size);
}

// This function calculates the variance of the elements in the  array
double getVariance(int arr[], int size) {
    double mean = getAverage(arr, size);
    double sum = 0;
    for (int i = 0; i < size; i++) {
        double diff = arr[i] - mean;
        sum += diff * diff; 
    }
    return sum / size;
}

// This function displays the required information
void displayStatistics(int max, int min, double average, double standardDeviation, double variance) {
    std::cout << "Largest = " << max << std::endl;
    std::cout << "Smallest = " << min << std::endl;
    std::cout << "Average = " << average << std::endl;
    std::cout << "Standard deviation = " << standardDeviation << std::endl;
    std::cout << "Variance = " << variance << std::endl;
}

int main() {
    char continueInput;

    do {
        std::cout << "\n";
        std::cout << "This program will ask the user to input various numbers (positive or negative but not zero) and perform basic statistics on these numbers." << std::endl;

        int size;
        std::cout << "\n";
        std::cout << "Enter the size of array: ";
        std::cin >> size;
        std::cout << "\n";

        int* arr = new int[size];

        for (int i = 0; i < size; i++) {
            std::cout << "Input an integer: ";
            std::cin >> arr[i];
            std::cout << "\n";
            if (arr[i] == 0) {
                break;
            }
        }

        int max = getLargest(arr, size);
        int min = getSmallest(arr, size);
        double average = getAverage(arr, size);
        double standardDeviation = getStandardDeviation(arr, size);
        double variance = getVariance(arr, size);

        displayStatistics(max, min, average, standardDeviation, variance);

        delete[] arr;

        std::cout << "\n";
        std::cout << "Do you want to input another set of numbers? (Y/N): ";
        std::cin >> continueInput;
    } while (continueInput == 'Y' || continueInput == 'y');

    return 0;
}