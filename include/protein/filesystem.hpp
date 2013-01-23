/*
 * Protein -- C++ Base Tool Kit Library
 * Copyright 2012 error.d@gmail.com
 *
 */

#ifndef _PROTEIN_FILESYSTEM_H_
#define _PROTEIN_FILESYSTEM_H_

namespace protein {
  
class filesystem {
public:
  static std::string merge_path_and_filename(std::string& path, std::string& filename);
};
}

#endif /* _PROTEIN_FILESYSTEM_H_ */
