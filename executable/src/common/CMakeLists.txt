file(GLOB_RECURSE sources *.cpp)
file(GLOB_RECURSE headers *.h)
add_library(CommonLib STATIC ${sources} ${headers})
