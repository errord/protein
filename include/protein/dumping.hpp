/*
 * Protein -- C++ Base Tool Kit Library
 * Copyright 2012 error.d@gmail.com
 *
 */

#ifndef _PROTEIN_DUMP_H_
#define _PROTEIN_DUMP_H_

namespace protein {

class dumping {
public:
  enum TitleKeyType {
    Class = 0,
    Struct,
  };

public:
  dumping();
  ~dumping();

  void setDumpTitle(const std::string& title_key, const std::string& title_value);
  void setDumpTitle(TitleKeyType key_type, const std::string& title_value);
  void setDumpInfo(const std::string& info_key, const std::string& info_value);
  std::string dump() const;

private:
  std::string _title_key;
  std::string _title_value;
  std::map<std::string, std::string> _dump_info_map;
};

}

#endif /* _PROTEIN_DUMP_H_ */
