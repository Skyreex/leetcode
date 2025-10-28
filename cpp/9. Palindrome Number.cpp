class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x < 10) return true;
        if (x < 100) return x % 11 == 0;

        short leftDigit{0};
        short rightDigit{0};
        short digitsCount = getDigitsCount(x);

        for (int i = 1; i <= digitsCount / 2; i++)
        {
            leftDigit = static_cast<int>(x % static_cast<int>(pow(10, i)) / pow(10, i - 1));
            rightDigit = static_cast<int>(x % static_cast<long>(pow(10, digitsCount - i + 1)) / pow(10, digitsCount - i));

            if (leftDigit != rightDigit) return false;
        }

        return true;
    }

    int getDigitsCount(int number)
    {
        int digitsCount{1};
        long multiplier{10};

        while (number % multiplier != number)
        {
            digitsCount++;
            multiplier *= 10;
        }

        return digitsCount;
    }
};
