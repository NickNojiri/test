template<typename T>
  class TemplateClass
  { 
  public:
     //Default constructor
     TemplateClass();
     //Overloaded constructor
     TemplateClass(const T&);
     //Function returns the value stored in the member variable.
     TemplateClass getMemberVar() const;
   //Function sets the value stored in the member variable to a given value.
   void setMemberVar(const T&);
    //Function overloads the comparison operator.
    bool operator==(const T&) const;
    //Destructor
    ~TemplateClass();
 private:
    //Member variable of the class
    T memberVar;
 };