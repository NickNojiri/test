/**
 * CS 150 partially-filled array class template.
 * @version Spring 2022
 * @author nnojiri
 */
#ifndef AVIEW
#define AVIEW

/**
 * An array view. Similar to a vector, but NO dynamic memory.
 * Versions with exceptions or no exceptions.
 */
 template <typename T>
class Aview
{
/*public:
    Aview(T* a, size_t max, size_t size=0)
        : m_data(a), m_capacity(max), m_size(size) {};
        
    size_t size() const {return m_size; }
    
    size_t m_capacity() const {return m_capacity;}
    
    T get(size_t i) const{
        return m_data[i];
    }
    
    void set(size_t i, const T& val)
    {
       m_data[i]= val;// set the value to the parm data[i]->value;
    }
    
    bool push_back(const T& val)
    {
         if(m_size < m_capacity)
        {
            m_data[m_size]=val;
            m_size++;
            return true;
        }
            return false;
    }
private:
    T* m_data;
    const size_t m_capacity;
    size_t m_size;
};*/

 public:
        Aview(T* a, size_t max, size_t size=0) : m_data(a), m_capacity(max), m_size(size) {};
        size_t size() const {
            return m_size;
        }
        size_t capacity() const {
            return m_capacity;
        }
        T get(size_t i) const {
            return m_data[i];
        }
        void set(size_t i, const T& val) {
            m_data[i] = val;
        }
        bool push_back(const T& val) {
            if (m_size < m_capacity) {
                m_data[m_size] = val;
                ++m_size;
                return true;
            }
            return false;
        }
    private:
        T* m_data;
        const size_t m_capacity;
        size_t m_size;
};

// Ignore these (used for testing)
void _assertEquals(const std::string&, int, int);
void _assertEquals(const std::string&, const std::string&, const std::string&);
#define assertEquals(e, a) (_assertEquals(#a, e, a))
#define assertEqualsMsg(msg, e, a) (_assertEquals(msg, e, a))
void beginTests();
void beginFunctionTest(const std::string&);
void endFunctionTest();
void endTests();
#endif
