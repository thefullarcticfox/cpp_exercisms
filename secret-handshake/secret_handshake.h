#if !defined(SECRET_HANDSHAKE_H)
#define SECRET_HANDSHAKE_H
#include <string>
#include <vector>
using std::string;
using std::vector;

namespace secret_handshake {
	vector<string>	commands(unsigned int bits);
}  // namespace secret_handshake

#endif // SECRET_HANDSHAKE_H
