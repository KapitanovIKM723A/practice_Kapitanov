#include <iostream>
#include <string>

int sum(int a, int b) {
    return a + b;
}

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int stringLength(const std::string& str) {
    return str.length();
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int arraySum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    std::cout << "Sum of 3 and 5: " << sum(3, 5) << std::endl;

    std::cout << "Factorial by 4: " << factorial(4) << std::endl;

    std::string testString = "badgerEnjoyer";
    std::cout << "Length of '" << testString << "': " << stringLength(testString) << std::endl;

    std::cout << "Is 7 prime? " << (isPrime(7) ? "Yes" : "No") << std::endl;

    int numbers[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << "Sum of array elements: " << arraySum(numbers, size) << std::endl;

    return 0;
}