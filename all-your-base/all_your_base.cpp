#include "all_your_base.h"
#include <stdexcept>
#include <algorithm>

namespace all_your_base {
	using std::vector;
	using uint = unsigned int;

	vector<uint>	convert(uint inbase, const vector<uint>& indigits, uint outbase) {
		if (inbase < 2 || outbase < 2)
			throw std::invalid_argument("base is lower than possible");

		uint	num = 0;		//	getting number from vector
		for (auto digit : indigits) {
			if (digit >= inbase)
				throw std::invalid_argument("impossible number for inbase");
			num *= inbase;
			num += digit;
		}

		vector<uint>	res;	//	returning it back in outbase
		res.reserve(20);
		while (num != 0) {
			res.push_back(num % outbase);
			num /= outbase;
		}

		std::reverse(res.begin(), res.end());
		return (res);
	}
}  // namespace all_your_base
