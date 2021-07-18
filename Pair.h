#pragma once
#include <string>

using namespace std;

template <typename T> class Pair1 {
	private:
		T firstVal, secondVal;
	public:
		Pair1(T first, T second) : firstVal(first), secondVal(second) {
		}

		T first() const {
			return this->firstVal;
		}

		T second() const {
			return this->secondVal;
		}
};

template <typename T, typename N> class Pair {
	protected:
		T firstVal;
		N secondVal;
	public:
		Pair(T first, N second) : firstVal(first), secondVal(second) {
		}

		T first() const {
			return this->firstVal;
		}

		N second() const {
			return this->secondVal;
		}
};

template <typename N> class StringValuePair : public Pair<string, N> {
	public:
		template <typename N> StringValuePair(string str, N secondVal) : Pair<string, N>(str, secondVal) {
		}
};