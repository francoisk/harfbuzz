#pragma once

#include <iosfwd>
#include <string>

#include <libharfbuzz/export.hh>

namespace harfbuzz
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBHARFBUZZ_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
