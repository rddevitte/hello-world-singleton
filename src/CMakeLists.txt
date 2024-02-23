add_executable(hello-world-singleton hello-world.cpp main.cpp)

target_include_directories(hello-world-singleton PUBLIC "${hello-world-singleton_SOURCE_DIR}/include")

install(TARGETS hello-world-singleton DESTINATION bin)
