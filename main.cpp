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

int main() {

    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


    int sum = getSum(numbers);
    std::cout << "The sum of elements in the vector is: " << sum << std::endl;


    return 0;
}

