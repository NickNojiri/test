#include <iostream>
#include <vector>
#include <memory>
using namespace std;

struct Cat { string name; };

int main()
{
    cout << "Aliased pointers (shared ownership)" << endl;
    // 1. Sharing
    auto p1 = new Cat{"Bill"};
    auto p2 = p1;
    cout << p1->name << endl;
    // Sharing problems
    //  1. Who owns Bill? Who deletes the memory he uses?
    //  2. What happens if we rename the cat using p2?
    p2->name = "Fuzzy";
    cout << p1->name << endl;
    delete p1;

    cout << endl << "vector and string elements are on the heap" << endl;
    cout << "When copied, the elements are copied also" << endl;
    // 2. Copies using "pointer containers" like vector
    vector<Cat> v(5, Cat{"Garfield"});
    auto v2(v); // 5 more "cloned" cats
    // Memory on the heap is managed by the vector
    // Slower but safer
    v.at(0).name = "Kitty";
    cout << "v->"; for (auto e : v) cout << e.name << " ";
    cout << endl;
    cout << "v2->"; for (auto e : v2) cout << e.name << " ";
    cout << endl;

    // 3. Unique ownership (done manually)
    cout << endl << "Unique ownership (manual)" << endl;
    auto p3 = new Cat{"Felix"};
    // OK only one copy of Felix
    cout << "p3->name: " << p3->name << endl;
    // MOVE Felix (transfer ownership) to p4
    auto p4 = p3;
    p3 = nullptr;
    cout << "p4->name: " << p4->name << endl;
    cout << "p3->" << p3 << endl;
    // Pretty error prone
    delete p4;

    // Shared ownership (using shared_ptr)
    cout << endl << "Shared ownership" << endl;
    auto p5(make_shared<Cat>(Cat{"Sylvester"}));
    auto p6 = p5;
    cout << "p5->name: " << p5->name << endl;
    cout << "p6->name: " << p6->name << endl;
    // Still has alias behavior
    p6->name = "Tom";
    cout << "p5->name: " << p5->name << endl;

    // Unique ownership (using unique_ptr)
    cout << endl << "Unique ownership with unique_ptr" << endl;
    unique_ptr<Cat> p7(new Cat{"Scratchy"}); // he's unique
    cout << "p7->name: " << p7->name << endl;
    unique_ptr<Cat> p8(p7.release());
    cout << "p8->name: " << p8->name << endl;
    cout << "Inside p7->" << p7.get() << endl;

    return 0;
}