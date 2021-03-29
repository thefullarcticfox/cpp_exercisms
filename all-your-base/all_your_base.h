#if !defined(ALL_YOUR_BASE_H)
#define ALL_YOUR_BASE_H
#include <vector>
using std::vector;
typedef unsigned int	uint;

namespace all_your_base {
	vector<uint>	convert(uint inbase, const vector<uint>& indigits, uint outbase);
}  // namespace all_your_base

#endif // ALL_YOUR_BASE_H
