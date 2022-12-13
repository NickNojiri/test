/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h28.cpp
 */
#include <string>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h28.h"

// Implement your class here
Bug::Bug(int startPos){
  m_position =startPos;
  m_direction = 1;
}
void Bug::move(){// set
    m_position += m_direction;
}

void Bug::turn(){// how the bug can turn set
    m_direction = m_direction *-1;//inflection
}

int Bug::position() const{//get
    return m_position;
}



//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
int run()
{
    cout << "Add your own tests here" << endl;
    // Bug fred(3);
    // fred.move();
    // cout << "fred is now at " << fred.position() << endl;

    return 0;
}