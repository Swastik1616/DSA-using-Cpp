#include <bits/stdc++.h>
using namespace std;

// Helper function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    // Loop from 2 up to the square root of the number
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; // Found a divisor, so it's not prime
        }
    }
    return true; // No divisors found, so it's prime
}

// Function to find the next prime number
int nextPrime(int n) {
    // Start checking from the number immediately after n
    int nextP = n + 1;
    
    // Loop indefinitely until a prime number is found
    while (true) {
        if (isPrime(nextP)) {
            return nextP; // Found the next prime, return it
        }
        // If not prime, check the next number
        nextP++;
    }
}

int main() {
    int n;
    cin >> n;
    int nextP = nextPrime(n);
    std::cout << "The next prime number after " << n << " is " << nextP;
}