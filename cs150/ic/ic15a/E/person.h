#ifndef PERSON_H
#define PERSON_H
#include <string>
/**
   A class representing a person with a name and a birthday.
 */
class Person
{
public:
    /**
       Constructs an person with an empty name and birthday.
    */
    Person() = default;

    /**
        Virtual destructor. (Because we have virtual members)
    */
    virtual ~Person() = default;

    /**
         Constructs an person with a name and birthday.
         @param name the name of this person.
         @param birthday the birthday of this person.
    */
    Person(const std::string& name, const std::string& birthday);

    /**
       @param person_name the name of this person
    */
    void setName(const std::string& personName);

    /**
       @param date string containing birthday info
    */
    void setBirthday(const std::string& date);

    /**
       Displays the person's info.
    */
    virtual void print() const;


private:
    std::string name;
    std::string birthday;
};

#endif
