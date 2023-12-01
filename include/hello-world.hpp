#ifndef HELLO_WORLD_HPP
#define HELLO_WORLD_HPP

// Singleton class /////////////////////////////////////////////////////////////

class HelloWorldSingleton
{
    private:
        HelloWorldSingleton() = default;

    public:
        static HelloWorldSingleton &GetInstance(void);

        // Delete copy constructor
        HelloWorldSingleton(const HelloWorldSingleton &) = delete;
        // Delete copy assignment operator
        HelloWorldSingleton &operator=(const HelloWorldSingleton &) = delete;

        void say(void);
};

// Global singleton instance (defined in source) ///////////////////////////////

extern HelloWorldSingleton &HelloWorld;

#endif  // HELLO_WORLD_HPP
