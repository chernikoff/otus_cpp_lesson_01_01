add_executable(test_version
  main.cpp)

target_link_libraries(test_version
  PRIVATE
  ${GTEST_LIBRARIES}
  helloworld)


add_test(test_version test_version)
