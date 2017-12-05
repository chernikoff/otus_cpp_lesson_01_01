add_executable(helloworld_cli
  src/main.cpp
  )

set_target_properties(helloworld_cli
  PROPERTIES
  CXX_STANDARD 14
  CXX_STANDARD_REQUIRED ON
  )

target_compile_options(helloworld_cli
  PUBLIC
  -Werror -Wpedantic -Wall -Wextra)

target_link_libraries(helloworld_cli helloworld)

install(TARGETS helloworld_cli
  RUNTIME DESTINATION bin)

