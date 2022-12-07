#ifndef NUM_H_
#define NUM_H_
#include <string>
// A rational number class
class Num
{
public:
    Num() = default;
    Num(int n, int d);
    Num(int n);
    std::string toString() const;
    Num& operator+=(const Num& rhs);
private:
    int m_num = 0;
    int m_den = 1;
};



// Add your nonmember operators here;
const Num operator+(const Num& lhs , const Num& rhs);

#endif
