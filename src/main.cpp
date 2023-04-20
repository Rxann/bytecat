#include <format>
#include <iostream>

int main() {
  std::cout << "Press 1 for manual input" << '\n';
  std::cout << "Press 2 for automated input" << '\n';
  int i;
  std::cin >> i;
  if (i == 1) {
    std::cout << "Input the memory address to edit:" << '\n';
    std::uintptr_t ptr;
    std::cin >> ptr;
    int *adr = reinterpret_cast<int *>(ptr);
    std::cout << std::format("Current value of {} is {}", ptr, *adr) << '\n';

  } else if (i == 2) {

  } else {
    std::cout << "Error, Try typing 1 or 2. If this persists please report the "
                 "issue to the repository on Github.";
  }
}