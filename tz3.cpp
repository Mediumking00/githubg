#include <iostream>
void Printsotus(int a) {
  int i=1;
  while (i<=a) {
    std::cout << "soutus" << '\n';
    i++;
  }
}
int main() {
  int x;
  std::cout << "How much do you want to say 'sotus' :";
  std::cin >> x;
  Printsotus(x);
  return 0;
}
