#include "raindrops.h"
#include <sstream>

namespace raindrops {
	std::string	convert(int number) {
		std::ostringstream	oss;

		if (number % 3 == 0)
			oss << "Pling";
		if (number % 5 == 0)
			oss << "Plang";
		if (number % 7 == 0)
			oss << "Plong";

		if (oss.str().empty())
			oss << number;
		return (oss.str());
	}
}  // namespace raindrops
