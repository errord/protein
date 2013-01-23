#include <string>
#include <protein/filesystem.hpp>

using namespace protein;

std::string
filesystem::merge_path_and_filename(std::string& path, std::string& filename)
{
  std::string file_path;
  size_t path_length = path.length();
  if (path.at(path_length - 1) == '/') {
    path[path_length - 1] = '\0';
  }

  if (filename.at(0) == '/') {
    file_path = path + filename;
  } else {
    file_path = path + "/" + filename;
  }
  return file_path;
}
