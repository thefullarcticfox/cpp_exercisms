#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H
#include <string>

namespace phone_number {
	class phone_number {
	private:
		std::string	_number;
	public:
		phone_number(const std::string& phone_number);

		const std::string&	number() const;
		std::string			area_code() const;

		operator std::string() const;
	};
}  // namespace phone_number

#endif // PHONE_NUMBER_H
