#include <stdexcept>
#include <cmath>
#include <limits>
#include "triangle.h"

namespace triangle {
	bool	doublecmp(double x, double y){
		return fabs(x - y) <= std::numeric_limits<double>::epsilon();
	}

	flavor	kind(double x, double y, double z) {
		if (x <= 0 || y <= 0 || z <= 0 ||
			z > x + y || x > y + z || y > x + z)
			throw std::domain_error("invalid triangle");
		if (doublecmp(x, y) && doublecmp(y, z))
			return flavor::equilateral;
		if (doublecmp(x, y) || doublecmp(y, z) || doublecmp(x, z))
			return flavor::isosceles;
		return flavor::scalene;
	}
}  // namespace triangle
