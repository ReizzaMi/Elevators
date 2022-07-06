// Rider Object cpp
// Programmer: Rachael Moy
// Programmer's ID: 0136068

#include "Rider.h"

Rider::Rider(int from, int to): from(from), to(to) { }

Rider& Rider::operator=(const Rider& a) {
	Rider& host = *this;
	if (this != &a) {
		const_cast<const int&>(host.from);
		const_cast<const int&>(host.to);
	}
	return host;
}
