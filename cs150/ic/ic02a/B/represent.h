#include <string>
#include <bitset>
// Converts a value to a string of bits
template <typename T>
std::string toBits(const T& val)
{
    union rep {
        T v;
        long long r;
    } N{val};

    return std::bitset<sizeof(T) * 8>(N.r).to_string();
}
