#include <iostream>
// #define LOG(x) std::cout << x << std::endl

int main() {

  int total_seconds = 458000;

  // Calculate Days
  int days = total_seconds / 86400;
  int remainder = total_seconds % 86400;
  // LOG(remainder);

  // Calculate Hours
  int hours = remainder / 3600;
  remainder = remainder % 3600;
  // LOG(remainder);

  // Calculate Minutes
  int minutes = remainder / 60;
  remainder = remainder % 60;
  // LOG(remainder);

  int seconds = remainder;

	std::cout << "Total Seconds: " << total_seconds << std::endl;
  std::cout << days << " days, " << hours << " hours, " << minutes
            << " minutes, and " << seconds << " seconds\n";

  return 0;
}
