#include <iostream>
#include <vector>

// Function to calculate the sum of elements in a vector
int getSum(const std::vector<int>& vec) {

    int sum = 0;
    
    for (int element : vec) {
        sum += element;
    }
    
    return sum;
}



// Function to calculate the average of elements in a vector
double getAverage(const std::vector<int>& vec) {

    // division by zero
    if (vec.empty()) {
        return 0.0; 
    }

    int sum = getSum(vec);
    return static_cast<double>(sum) / vec.size();
}


int main() {

    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


    int sum = getSum(numbers);
    std::cout << "The sum of elements in the vector is: " << sum << std::endl;


    double average = getAverage(numbers);
    std::cout << "The average of elements in the vector is: " << average << std::endl;

    return 0;
}

