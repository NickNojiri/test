//	A simple class hierarchy
#ifndef PETS01_H_
#define PETS01_H_

class Pet
{
private:
    static int gID; // initialize in Cpp file.
   	const int ID;
public:
   	Pet();
   	void speak() const;
   	void license() const;
   	int getID() const;
};

class Cat : public Pet
{
public:
    void speak() const;
};

class Dog : public Pet
{
public:
   	void speak() const;
   	void license() const;
};


#endif
