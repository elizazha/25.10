#include <iostream>
bool isPyth(unsigned a, unsigned b, unsigned c) {
	bool p = (a * a == (b * b + c * c));
	p = p || (b*b == (a * a + c * c));
	p = p || (c * c == (a * a + b * b));
	return p;
}

int main4() {
	using u_t = unsigned;
	///u_t a = 0; -- 1-2)
	u_t a = 0, b = 0, c = 0;
	size_t count = 0;
	//std::cin >> a;
	//if (std::cin) {
	//	count++;
	//}
	while (std::cin >> a) {
		count += isPyth(a, b, c) ? 1 : 0;
		c = b;
		b = a;
		// count ++; -- 1)
		//count+=a*a;--2)
	}

	if (std::cin.eof()) {
		std::cout << count << "\n";
	}
	else if (std::cin.fail()) {
			std::cerr << "error\n";
			return 1;
		}
}
