#include <iostream>
int main(){
auto x = 4/5d;
auto arr[2];
int size;
std::cin >> size;
for(size_t i {}; i < size ; i++){
std::cout << " " << x << " ";
arr[i] = x;
x = x/2;
}
  
}
