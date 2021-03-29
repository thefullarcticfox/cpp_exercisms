#include "grade_school.h"
#include <algorithm>

namespace grade_school {
	school::school() {}

	const map<int, vector<string>>&	school::roster() const {
		return (r);
	}

	const vector<string>			school::grade(int grade) const {
		try {
			return (r.at(grade));
		} catch (const std::exception& e) {
			return (vector<string>());
		}
	}

	void	school::add(const string& name, int grade) {
		r[grade].push_back(name);
		std::sort(r[grade].begin(), r[grade].end());
	}
}  // namespace grade_school
