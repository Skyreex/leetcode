#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> output(n);
		for (int i = 1; i <= n; ++i) {
			string input = "";
			if (!(i % 3)) input += "Fizz";
			if (!(i % 5)) input += "Buzz";
			if (input.empty()) input = to_string(i);
			output[i - 1] = input;
		}
		return output;
	}
};
