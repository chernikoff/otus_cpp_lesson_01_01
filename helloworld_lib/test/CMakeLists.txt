add_executable(test_version
  main.cpp)

set_target_properties(test_version
  PROPERTIES
  CXX_STANDARD 14
  CXX_STANDARD_REQUIRED ON
  )

target_link_libraries(test_version
  PRIVATE
  ${GTEST_LIBRARIES}
  helloworld
  pthread)

add_test(test_version test_version)
