// Button Object Header
// Programmer: Rachael Moy
// Programmer's ID: 0136068

#ifndef Panel_h
#define Panel_h

class Panel {
    struct Button {
        string label;
        bool lit;
        int sequence;
        static int counter;

        ostream& operator<<(ostream&, const Button&);
    };
    vector<Button> buttons;

public:
    void addButton(string);
    void press(string);
    void clear(string);
    string getFirstLit() const;
    bool isLit(string) const;
    bool areAnyLit() const;
    friend ostream& operator<<(ostream&, const Panel&);
};

#endif


