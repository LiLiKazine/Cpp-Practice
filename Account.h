class Account
{
private:
    int balance;

public:
    Account(int);
    ~Account();

    void credit(int num);
    void debit(int num);
    int getBalance() const;
};