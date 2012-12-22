#include <assert.h>
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <protein/dumping.hpp>

using namespace protein;

const char *key_type_map[] = {
  "Class",
  "Struct"
};

dumping::dumping()
{
}

dumping::~dumping()
{
}

void
dumping::setDumpTitle(const std::string& title_key, const std::string& title_value)
{
  _title_key = title_key;
  _title_value = title_value;
}

void
dumping::setDumpTitle(TitleKeyType key_type, const std::string& title_value)
{
  assert((int)(sizeof(key_type_map) / sizeof(char*)) > (int)key_type);
  const char *title_key = key_type_map[key_type];
  setDumpTitle(title_key, title_value);
}

void
dumping::setDumpInfo(const std::string& info_key, const std::string& info_value)
{
  _dump_info_map[info_key] = info_value;
}

std::string
dumping::dump() const
{
  std::stringstream sstream;
  std::map<std::string, std::string>::const_iterator iter = _dump_info_map.begin();
  std::map<std::string, std::string>::const_iterator iter_end = _dump_info_map.end();
  sstream << "<" << _title_key << ": (" << _title_value << ")  " << std::endl;
  while (iter != iter_end) {
    sstream << "\t" << iter->first << ": (" << iter->second << ") ";
    if (++iter != iter_end)
      sstream << std::endl;
  }
  sstream << ">";
  return sstream.str();    
}
