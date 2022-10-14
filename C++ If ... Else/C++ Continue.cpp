#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  std::cout << i << "\n";
}
    return 0;
}