#include "rna_transcription.h"

namespace rna_transcription {
	char	to_rna(char c) {
		if (c == 'G')
			c = 'C';
		else if (c == 'C')
			c = 'G';
		else if (c == 'T')
			c = 'A';
		else if (c == 'A')
			c = 'U';
		return (c);
	}

	string	to_rna(const string& s) {
		string	res(s);
		for (size_t i = 0; i < res.size(); i++)
			res.at(i) = to_rna(res.at(i));
		return (res);
	}
}  // namespace rna_transcription
