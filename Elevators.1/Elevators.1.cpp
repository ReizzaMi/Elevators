// Programmer: Rachael Moy
// Programmer's ID: 0136068

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#include "Rider.h"
#include "Panel.h"

struct Button {
    string label;
    bool lit;
    int sequence;
    static int counter;
};

ostream& operator<<(ostream&, const Button&);

int main()
{
    // identification output code block
    cout << "Programmer: Rachael Moy\n";
    cout << "Programmer's ID: 0136068\n";
    cout << "File: " << __FILE__ << endl;
    cout << endl;

    Panel p;
    p.addButton("1");
    p.addButton("2");
    p.addButton("3");
    p.addButton("4");
    if (p.areAnyLit()) cout << "\nERROR 1\n";
    if (p.isLit("2")) cout << "\nERROR 2\n";

    p.press("X");
    p.press("2");
    p.press("3");
    cout << "\nEXPECTED: [2][3]\n";
    cout << "ACTUAL:   " << p << endl;

    p.clear("Y");
    p.clear("2");
    cout << "\nEXPECTED: [3]\n";
    cout << "ACTUAL:   " << p << endl;

    cout << "\nEXPECTED: 3\n";
    cout << "ACTUAL:   " << p.getFirstLit() << endl;
    if (!p.areAnyLit()) cout << "\nERROR 3\n";
    if (p.isLit("2")) cout << "\nERROR 4\n";
    if (!p.isLit("3")) cout << "\nERROR 5\n";

    Rider a(0, 1); // starting on floor #0, going to floor #1
    Rider b(1, 2); // starting on floor #1, going to floor #2

    queue<Rider> q;
    q.push(a);

    vector<Rider> v;
    v.push_back(a);

    a = b;

    return 0;
}



