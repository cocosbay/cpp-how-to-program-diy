#include <string>
class Account2 {
public:
	explicit Account2(std::string accName):
		name{accName} {}
	void setName(std::string accName) {
		name = accName;
	}
	std::string getName() {
		return name;
	}
private:
	std::string name;
};