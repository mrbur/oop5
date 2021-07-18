#pragma once
#include <vector>
#include "Card.h"
#include <cassert>

using namespace std;

class Hand {
	private:
		vector<Card*> cards;
	public:
		~Hand() {
			if (cards.size() > 0) {
				clear();
			}
		}
		void add(Card* cardPtr) {
			cards.push_back(cardPtr);
		}
		void clear() {
			assert(cards.size() > 0);
			for (vector<Card*>::iterator it = cards.begin(); it != cards.end(); it++) {
				delete (*it);
			}
			cards.clear();
		}

		int getValue() {
			int value = 0;
			for (vector<Card*>::iterator it = cards.begin(); it != cards.end(); it++) {
				if ((*it)->getValue() == 1 && (value + 11) < 21) {
					value += 11;
				}
				else {
					value += (*it)->getValue();
				}
			}
			
		}
};