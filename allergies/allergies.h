#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include <map>
#include <unordered_set>
using std::string;
using std::map;
using std::unordered_set;
typedef unsigned int	uint;

namespace allergies {
	class allergy_test {
	private:
		int						score;
		const map<string, uint>	allergens;
	public:
		allergy_test(uint score);
		bool					is_allergic_to(const string& allergen) const;
		unordered_set<string>	get_allergies() const;
	};
}  // namespace allergies

#endif // ALLERGIES_H
