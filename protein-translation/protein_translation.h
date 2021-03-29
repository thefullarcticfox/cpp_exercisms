#if !defined(PROTEIN_TRANSLATION_H)
#define PROTEIN_TRANSLATION_H
#include <vector>
#include <string>
using std::string;
using std::vector;

namespace protein_translation {
	vector<string>	proteins(const string& rna);
}  // namespace protein_translation

#endif // PROTEIN_TRANSLATION_H
