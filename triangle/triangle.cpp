#include <stdexcept>
#include <limits>
#include "triangle.h"

namespace triangle {
	bool	almost_equal(double x, double y,
		double abs_epsilon = std::numeric_limits<double>::epsilon(),
		double rel_epsilon = std::numeric_limits<double>::epsilon())
	{
		double diff = std::abs(x - y);
		if (diff <= abs_epsilon)
			return true;
		return diff <= std::max(std::abs(x), std::abs(y)) * rel_epsilon;
	}

	flavor	kind(double x, double y, double z) {
		if (x <= 0 || y <= 0 || z <= 0 ||
			z > x + y || x > y + z || y > x + z)
			throw std::domain_error("invalid triangle");
		if (almost_equal(x, y) && almost_equal(y, z))
			return flavor::equilateral;
		if (almost_equal(x, y) || almost_equal(y, z) || almost_equal(x, z))
			return flavor::isosceles;
		return flavor::scalene;
	}
}  // namespace triangle
