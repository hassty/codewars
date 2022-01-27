#include <cstdint>
#include <string>
#include <bitset>

std::string add_binary(uint64_t a, uint64_t b) {
  
  std::string str = std::bitset<64>(a + b).to_string();
  
  return str.erase(0, std::min(str.find_first_not_of('0'), str.size()-1));
}