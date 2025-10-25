class Solution {
public:
    int totalMoney(int n) {
        int fullWeeks{n / 7};
        int remainingDays{n % 7};

        int fullWeeksSum = 28 * fullWeeks + 7 * (fullWeeks * (fullWeeks - 1) / 2);
        int leftoverSum = remainingDays * fullWeeks +
                          ((remainingDays + 1) * remainingDays) / 2;

        return fullWeeksSum + leftoverSum;
    }
};
