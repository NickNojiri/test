template<nametype T>

class pineapple{
    public:
    //default
    pineapple();
    //working constructor
    pineapple(T obj);
    //getter for pin
    T pineapple()const;
    
    std::string printObject() const;
    
    private:
    T object;
}