
class Account
{
public:
	Account(int balance)
		: balance(balance)
	{
	}
	int getBalance()
	{
		return balance;
	}

	void depoist(int money)
	{
		balance += money;
	}

	void withdraw(int money)
	{
		balance -= money;
	}

private:
	int balance = 10000;
};

#ifndef GTEST_INCLUDE_GTEST_GTEST_H_
int main(int argc, char* argv[])
{
	return 0;
}
#endif