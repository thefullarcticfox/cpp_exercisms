#include "armstrong_numbers.h"
#include <vector>

namespace armstrong_numbers {
	bool	is_armstrong_number(const long n) {
		long	tmp = n;
		long	sum = 0;
		std::vector<long>	digits;
		digits.reserve(20);

		//	push digits to vector
		while (tmp != 0) {
			digits.push_back(tmp % 10);
			tmp /= 10;
		}

		tmp = n;
		//	find sum of digits powered by their count
		for (size_t i = 0; i < digits.size(); i++) {
			long	pow = 1;
			for (size_t j = 0; j < digits.size(); j++)
				pow *= digits.at(i);
			sum += pow;
		}

		return (n == sum);
	}
}  // namespace armstrong_numbers
