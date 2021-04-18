#include "raindrops.h"
#include <sstream>

namespace raindrops {
	std::string	convert(int number) {
		std::ostringstream	oss;

		oss << number;
		return (oss.str());
	}
}  // namespace raindrops
