#ifndef CARDS_H
#define CARDS_H
#include <string>
//////// Card ////////////////////////////
class Card
{
public:
    Card() = default;
    Card(const string& n);
    bool isExpired() const;
    virtual void print() const;
    virtual ~Card() = default;
private:
    std::string name_;
};

class IDcard : public Card
{
public:
    IDcard() = default;
    IDcard(const std::string& n, const std::string& id);
    void print() const;
private:
    std::string IDnumber_;
};

class CallingCard : public Card
{
public:
    CallingCard() = default;
    CallingCard(const std::string& n,
        const std::string& num, const std::string& p);
    void print() const;
private:
    std::string cardNumber_;
    std::string pin_;
};

class DriverLicense : public Card
{
public:
    DriverLicense() = default;
    DriverLicense(const std::string& n,
        const std::string& expires);
    bool isExpired() const;
    void print() const;
private:
    std::string expirationDate_;
};

#endif

