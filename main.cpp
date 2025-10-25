#include <iostream>
#include <limits>
bool isPyth(unsigned a, unsigned b, unsigned c) {
	bool p = (a * a == (b * b + c * c));
	p = p || (b*b == (a * a + c * c));
	p = p || (c * c == (a * a + b * b));
	return p;
}
unsigned max() {
  return std::numeric_limits<unsigned>::max();
}

int main() {
	using u_t = unsigned;
	///u_t a = 0; -- 1-2)
	u_t a = 0, b = 0, c = 0;
	size_t count = 0;
	//std::cin >> a;
	//if (std::cin) {
	//	count++;
	//}
	std::cin>>c>>b;
	while (std::cin >> a) {
		count += isPyth(a, b, c) ? 1 : 0;
		c = b;
		b = a;
		if ((max()/a<a)||(max()/b<b)||(max()/c<c)){
		    std::cerr << "error 2\n";
                        return 1;}
		if ((max()-a*a<b*b)||(max()-a*a<c*c)||(max()-b*b<c*c)){std::cerr << "error 2\n";
                        return 1;}

		// count ++; -- 1)
		//count+=a*a;--2)
	}

	if (std::cin.eof()) {
		std::cout << count << "\n";
	}
	else if (std::cin.fail()) {
			std::cerr << "error 1\n";
			return 1;
		}
}
