#include "bob.h"

namespace bob {
	bool		hasnoletters(const std::string& str) {
		for (char c : str)
			if (std::isalpha(c))
				return true;
		return false;
	}

	bool		isallupperstr(const std::string& str) {
		if (hasnoletters(str))
			return false;
		for (char c : str)
			if (std::islower(c))
				return false;
		return true;
	}

	std::string	hey(const std::string& query) {
		if (query.back() == '?') {
			if (isallupperstr(query))
				return "Calm down, I know what I'm doing!";
			return "Sure.";
		}
		if (isallupperstr(query))
			return "Whoa, chill out!";
		return "Whatever.";
	}
}  // namespace bob
