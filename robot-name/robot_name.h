#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H
#include <string>
#include <set>
using std::string;
using std::set;

namespace robot_name {
	class robot {
	private:
		static set<string>	generated;
		string				_name;
		static string		generate();
	public:
		robot();

		const string&		name() const;
		void				reset();
	};
}  // namespace robot_name

#endif // ROBOT_NAME_H
