SOURCES += main.cpp test.cpp

# Compile with high warning levels, a warning is an error
QMAKE_CXXFLAGS += -Wall -Wextra -Weffc++ -Werror


CONFIG += c++17
QMAKE_CXXFLAGS += -std=c++17

# UBSAN
QMAKE_CXXFLAGS += -fsanitize=undefined
QMAKE_LFLAGS += -fsanitize=undefined
LIBS += -lubsan

# Boost.Test
LIBS += -lboost_unit_test_framework
