/**
 * CS 150 partially-filled array class template.
 * @version Spring 2022
 * @author Stephen Gilbert
 */
#ifndef AVIEW
#define AVIEW
#include <string>
#include <stdexcept>
/**
 * An array view. Similar to a vector, but NO dynamic memory.
 * Versions with exceptions or no exceptions.
 */
template <typename T>
class Aview
{
public:
    Aview(T* data, size_t capacity, size_t size=0)
        : m_data(data), m_capacity(capacity), m_size(size) {}
    size_t size() const { return m_size; }
    size_t capacity() const { return m_capacity; }

    // Replace these three functions with += and []
    // bool push_back(const T& val);  // See definition below
    // T get(size_t i) const;
    // void set(size_t i, T val);
    bool operator+=(const T& val);
    T operator[](size_t i) const;
    T& operator[](size_t i);
private:
    T* m_data;
    const size_t m_capacity;
    size_t m_size;
};


// Define your template functions here
template <typename T>
T Aview<T>::operator[](size_t i) const
{
    if (i < m_size) return m_data[i];
    throw std::out_of_range("i->" + std::to_string(i)
        + ". Valid range 0.."
        + std::to_string(m_size - 1) + ".");
}

template <typename T>
T& Aview<T>::operator[](size_t i)
{
    if (i < m_size) { return m_data[i]; }
    else
        throw std::out_of_range("i->" + std::to_string(i)
        + ". Valid range 0.."
        + std::to_string(m_size - 1) + ".");
}

// Example: out-of-line template member function defintion.
template <typename T>
bool Aview<T>::operator+=(const T& val)
{
    if (m_size < m_capacity)
    {
        m_data[m_size] = val;
        m_size++;
        return true;
    }

    return false;
}

// Ignore these (used for testing)
void _assertEquals(const std::string&, double, double);
#define assertEqualsMsg(msg, e, a) (_assertEquals(msg, e, a))
void beginTests();
void beginFunctionTest(const std::string&);
void endFunctionTest();
void endTests();
void passMsg(const std::string&);
void failMsg(const std::string&,int=1);

#endif
