// C++ Program to find n'th fibonacci Number
//1 1 2 3 5 ...
#include<iostream>
#include<cmath>

int fib(int n) {
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}
// Driver Code
int main ()
{
  int n;
  std::cin>>n;
  for(int i=1;i<=n;i++)
    std::cout << fib(i) << std::endl;
  return 0;
}