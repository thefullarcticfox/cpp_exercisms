#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H
#include <string>
#include <vector>
#include <map>

namespace grade_school {
	using namespace	std;
	class school {
		private:
			map<int, vector<string>>	r;
		public:
			school();

			const map<int, vector<string>>&	roster() const;
			const vector<string>			grade(int grade) const;
			void	add(const string& name, int grade);
	};
}  // namespace grade_school

#endif // GRADE_SCHOOL_H
