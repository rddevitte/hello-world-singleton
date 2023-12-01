#include "hello-world.hpp"
#include <iostream>

// Singleton class methods /////////////////////////////////////////////////////

HelloWorldSingleton &HelloWorldSingleton::GetInstance(void)
{
    static HelloWorldSingleton instance;
    return instance;
}

void HelloWorldSingleton::say(void)
{
    std::cout << "Hello, world!\n";
}

// Global singleton instance ///////////////////////////////////////////////////

HelloWorldSingleton &HelloWorld = HelloWorld.GetInstance();
