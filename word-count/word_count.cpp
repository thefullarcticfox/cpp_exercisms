#include "word_count.h"

namespace word_count {
	std::string					str_tolowerandtrim(const std::string& str) {
		size_t i = str.find_first_not_of("\'");
		size_t j = str.find_last_not_of("\'");
		if (i > str.size())
			i = 0;
		if (j > str.size())
			j = str.size();

		std::string	res(str, i, j - i + 1);
		for (char&c : res)
			c = std::tolower(c);
		return res;
	}

	std::map<std::string, int>	words(const std::string& str) {
		std::map<std::string, int>	res;
		std::string					tmp(str);

		size_t	i = 0;
		while ((i = tmp.find_first_not_of(" \n\t\r!\"#$%&()*+,-./:;<=>?@[\\]^_`{|}~")) < tmp.size()) {
			tmp = tmp.substr(i);

			if ((i = tmp.find_first_of(" \n\t\r!\"#$%&()*+,-./:;<=>?@[\\]^_`{|}~")) > tmp.size())
				i = tmp.size();

			res[str_tolowerandtrim(tmp.substr(0, i))] += 1;
			tmp = tmp.substr(i);
		}
		return res;
	}
}  // namespace word_count
