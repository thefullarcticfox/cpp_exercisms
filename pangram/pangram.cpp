#include "pangram.h"
#include <set>

namespace pangram {
	bool	is_pangram(const std::string& str) {
		std::set<char>	letters;
		for (char letter : str)
			if (std::isalpha(letter))
				letters.insert(std::tolower(letter));
		return (letters.size() == 26);
	}
}  // namespace pangram
