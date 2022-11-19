
#include <iostream>

#define big(x, y)(x > y ? x : y)
#define two(x)(x % 2 == 0 ? "chet" : "neChet")

int main()
{
    int x;
    int y;
    std::cout << "enter x:\n";
    std::cin >> x;
    std::cout << "enter y:\n";
    std::cin >> y;
    std::cout << big(x, y) << " is bigger\n" << x << " x is " << two(x);
}
