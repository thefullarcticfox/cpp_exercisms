#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H
#include <string>
using std::string;

namespace rna_transcription {
	char	to_rna(char c);
	string	to_rna(const string& s);
}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H
