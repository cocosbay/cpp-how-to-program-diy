#include <string>
class Account {
public:
	void setName(std::string accName) {
		name = accName;
	}
	std::string getName() const {
		return name;
	}
private:
	std::string name;
};