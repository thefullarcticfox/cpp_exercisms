#include "roman_numerals.h"
#include <map>

namespace roman_numerals {
	using t_it = std::map<int, char>::const_iterator;

	std::string	convert(int arabic_num) {
		const std::map< int, char, std::greater<int> >	roman_digits{
			{1000, 'M'},
			{500, 'D'},
			{100, 'C'},
			{50, 'L'},
			{10, 'X'},
			{5, 'V'},
			{1, 'I'}
		};

		std::string	res;
		for (auto& digit : roman_digits) {
			while (arabic_num / digit.first) {
				arabic_num -= digit.first;
				res += digit.second;
			}
		}

		return (res);
	}
}  // namespace roman_numerals
