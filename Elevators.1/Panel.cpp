// Rider Object cpp
// Programmer: Rachael Moy
// Programmer's ID: 0136068

#include "Panel.h"

void Panel::addButton(string dir) {
    
    buttons.pushback();
}
    
void Panel::press(string) {

}
    
void Panel::clear(string) {

}

string Panel::getFirstLit() const {

}
    
bool Panel::isLit(string) const {

}

bool Panel::areAnyLit() const {

}
    
ostream& operator<<(ostream&, const Ponel&) {
    if (panel.buttons[i].isLit) {

    }
}

ostream& operator<<(ostream& out, const Button& button) {
    if (button.lit == true) {
        out << "[" << button.label << "]";
        return out;
    }

    return out;
}