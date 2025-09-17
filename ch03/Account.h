#include <string>
class Account {
public:
	void setName(std::string theName) {
		name = theName;
	}
	std::string getName() const {
		return name;
	}
private:
	std::string name;
};