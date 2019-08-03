#include <iostream>
#include <boost/algorithm/string/split.hpp>

// Boost.Test does not play well with -Weffc++
#pragma GCC diagnostic push

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(test)
{
  std::cerr << "FIX_ISSUE_98\n";
  std::string input = "Dit is een test bericht 230";
  std::vector<std::string> v;
  boost::algorithm::split(
        v,
        input,
        std::bind2nd(std::equal_to<char>(),' '),
        boost::algorithm::token_compress_on);

  for (const auto i : v)
  {
    std::cerr << i << ' ';
  }
  std::cerr << "\nEND OF FIX_ISSUE_98\n";

}

#pragma GCC diagnostic pop
