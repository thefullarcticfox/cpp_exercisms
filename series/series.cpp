#include "series.h"

namespace series {
	std::vector<int>	digits(const std::string& number) {
		std::vector<int>	res;
		for (char digit : number)
			res.push_back(digit - '0');
		return res;
	}
}  // namespace series
