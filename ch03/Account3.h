#include <string>
class Account3 {
public:
	Account3(std::string accName, int iniBalance)
		:name{accName} {
		if (iniBalance > 0) balance = iniBalance;
	}
	int getBalance() const {
		return balance;
	}
	std::string getName() const {
		return name;
	}
	void deposit(int depoAmount) {
		if (depoAmount > 0) balance += depoAmount;
	}
	void setName(std::string accName) {
		name = accName;
	}
private:
	std::string name;
	int balance{ 0 };
};