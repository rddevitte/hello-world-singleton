add_library(helloworld STATIC hello-world.cpp)

target_include_directories(helloworld PUBLIC "${hello-world-singleton_SOURCE_DIR}/include")

add_executable(hello-world-singleton main.cpp)

target_link_libraries(hello-world-singleton PRIVATE helloworld)
