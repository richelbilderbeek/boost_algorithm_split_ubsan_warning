#include <iostream>
#include <vector>
#include <climits>

#include <boost/algorithm/string/split.hpp>

//C++14
auto f() noexcept
{
  return "Hello world\n";
}

int main()
{
  std::cout << f();

  std::string input = "Dit is een test bericht 230";
  std::vector<std::string> v;
  boost::algorithm::split(
    v,
    input,
    std::bind2nd(std::equal_to<char>(),' '),
    boost::algorithm::token_compress_on
  );

  for (const auto i : v)
  {
    std::cout << i << ' ';
  }

}
