#include <iostream>
#include <functional>

int main() {
  [handle = std::ref(std::cout << "You may think it's a long way down the road to the chemist's, ")]() { handle.get() << " but that's just peanuts to space.\n"; }();
}
