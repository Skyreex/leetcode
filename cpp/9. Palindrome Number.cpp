#include <cmath>
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x < 10) return true;
        if (x < 100) return x % 11 == 0;

        long halfPartLeft{0};
        long halfPartRight{0};
        long numberOfDigits = getNumberOfDigits(x);

        for (int i = 1; i <= numberOfDigits / 2; i++)
        {
            halfPartLeft += static_cast<long>(x % static_cast<long>(pow(10, i)) / pow(10, i - 1)) * pow(10, numberOfDigits - i);
            halfPartRight += static_cast<long>(x % static_cast<long>(pow(10, numberOfDigits - i + 1)) / pow(10, numberOfDigits - i)) * 
                pow(10, numberOfDigits - i);
        }

        return halfPartRight == halfPartLeft;
    }

    int getNumberOfDigits(int number)
    {
        int numberOfDigits{1};
        long multiplier{10};

        while (number % multiplier != number)
        {
            numberOfDigits++;
            multiplier *= 10;
        }

        return numberOfDigits;
    }
};
