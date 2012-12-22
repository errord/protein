/*
 * Protein -- C++ Base Tool Kit Library
 * Copyright 2012 error.d@gmail.com
 *
 */

#ifndef _PROTEIN_LOG_H_
#define _PROTEIN_LOG_H_

namespace protein {

class logging {
  /* 
     logging is static class, not instantiation
  */
private:
  logging();
  
public:
  enum Level {
    NO = 0,
    INFO = 1,
    WARNING = 2,
    ERROR = 3,
    DEBUG = 4
  };
  
  static Level log_level;
  static void set_loglevel(Level level) {
    logging::log_level = level;
  }
  static Level get_loglevel() {
    return logging::log_level;
  }
  
public:
  static void info(const std::string& log);
  static void warning(const std::string& log);
  static void error(const std::string& log);
  static void debug(const std::string& log);
};
}

#endif /* _PROTEIN_LOG_H_ */
