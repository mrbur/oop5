#pragma once
#include <string>
#include "Hand.h"
#include <iostream>

using namespace std;

class GenericPlayer : public Hand {
	private:
		string name;
	public:
		GenericPlayer(string name) : name(name) {
		}
		
		virtual bool isHitting();

		bool isBoosted() {
			if (getValue() > 21) {
				return true;
			}
			return false;
		}

		void bust() {
			if (isBoosted()) {
				cout << "Player " << name << " is busted";
			}
			else {
				cout << "Player " << name << " is not busted";
			}
		}
};