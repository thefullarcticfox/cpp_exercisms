#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H
#include <string>
#include <vector>
#include <utility>
using std::string;
using std::vector;
using std::pair;

namespace queen_attack {
	class chess_board {
	private:
		vector<string>	arr;
	public:
		explicit
		chess_board(const pair<int, int>& w = {0, 3},
					const pair<int, int>& b = {7, 3});

		operator		std::string() const;

		pair<int, int>	white() const;
		pair<int, int>	black() const;

		bool			can_attack() const;
	};

}  // namespace queen_attack

#endif // QUEEN_ATTACK_H
