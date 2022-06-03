#ifndef NUM_H_
#define NUM_H_
#include <string>
// A rational number class
class Num
{
public:
    Num() = default;
    Num(int n, int d);
    std::string toString() const;
    // Add your members here
    Num& operator+=(const Num& rhs); 
private:
    int m_num = 0;
    int m_den = 1;
};

#endif
