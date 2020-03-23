#include<string>

class Invoice
{
private:
    std::string no;
    std::string description;
    int num;
    int price;
public:
    Invoice(std::string no, std::string desc, int num, int price);
    void setNo(std::string);
    std::string getNo() const;
    void setDesc(std::string);
    std::string getDesc() const;
    void setNum(int);
    int getNum() const;
    void setPrice(int);
    int getPrice() const;
    ~Invoice();
};

