#include <iostream>
#include <protein/logging.hpp>

using namespace protein;

logging::Level logging::log_level = logging::INFO;

void
logging::info(const std::string& log) {
  if (logging::log_level >= INFO) {
    std::cout << "info: " << log << std::endl;
  }
}

void
logging::warning(const std::string& log) {
  if (logging::log_level >= WARNING) {
    std::cout << "warnging: " << log << std::endl;
  }
}

void
logging::error(const std::string& log) {
  if (logging::log_level >= ERROR) {
    std::cout << "error: " << log << std::endl;
  }
}

void
logging::debug(const std::string& log) {
  if (logging::log_level >= DEBUG) {
    std::cout << "debug: " << log << std::endl;
  }
}
