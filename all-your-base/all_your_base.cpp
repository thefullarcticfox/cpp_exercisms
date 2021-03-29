#include "all_your_base.h"
#include <stdexcept>
#include <algorithm>

namespace all_your_base {
	vector<uint>	convert(uint inbase, const vector<uint>& indigits, uint outbase) {
		if (inbase < 2 || outbase < 2)
			throw std::invalid_argument("base is lower than possible");

		uint	num = 0;		//	getting number from vector
		for (auto& x : indigits) {
			if (x >= inbase)
				throw std::invalid_argument("impossible number for inbase");
			num *= inbase;
			num += x;
		}

		vector<uint>	res;	//	returning it back in outbase
		while (num != 0) {
			res.insert(res.begin(), num % outbase);
			num /= outbase;
		}
		return (res);
	}
}  // namespace all_your_base
