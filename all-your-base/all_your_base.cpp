#include "all_your_base.h"
#include <stdexcept>
#include <algorithm>
#include <limits>

namespace all_your_base {
	using namespace std;
	using uint = unsigned int;

	vector<uint>	convert(uint inbase, const vector<uint>& indigits, uint outbase) {
		if (inbase < 2 || outbase < 2)
			throw invalid_argument("base is lower than possible");

		uint	num = 0;		//	getting number from vector
		for (auto digit : indigits) {
			if (digit >= inbase)
				throw invalid_argument("impossible number for inbase");

			if (num > numeric_limits<uint>::max() / inbase)
				throw overflow_error("unsigned int would overflow");
			num *= inbase;

			if (num > numeric_limits<uint>::max() - digit)
				throw overflow_error("unsigned int would overflow");
			num += digit;
		}

		vector<uint>	res;	//	returning it back in outbase
		res.reserve(20);
		while (num != 0) {
			res.push_back(num % outbase);
			num /= outbase;
		}

		reverse(res.begin(), res.end());
		return (res);
	}
}  // namespace all_your_base
