add_library(helloworld
  src/helloworld.cpp)

configure_file(src/version.h.in version.h)

target_include_directories(helloworld
  PRIVATE
  ${CMAKE_CURRENT_BINARY_DIR}
  )

target_include_directories(helloworld
  PUBLIC
  include)

if(GTEST_FOUND)
  add_subdirectory(test)
endif()
