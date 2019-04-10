#include <cstdio>
#include "log.hpp"

struct SummResult {
  long int summ;
  bool status;
};

constexpr unsigned int SIZE_PRINT_BUF = 300;

SummResult calc(const int* ptr1, const int* ptr2) {
  SummResult result{0, false};
  log_info(__func__);
  if (ptr1 == nullptr || ptr2 == nullptr) {
    log_error("Pointer is null");    
    return result;
  }
  result.status = true;
  result.summ = *ptr1 + *ptr2;
  log_debug("Summ succfully calculate");
  return result;
}

int main(int argc, char const *argv[]) {
    char log_buff[SIZE_PRINT_BUF] = "Summ calculate was failed";
    int value1 = 90;
    int value2 = 100;
    auto summ = calc(&value1, &value2);
    if (!summ.status) {
      log_error(log_buff);
    } else {
      sprintf(log_buff, "%s %ld", "The summ is = ", summ.summ);
      log_debug(log_buff);
    }
    
    return 0;
}
