# CPP5 - Modern C++ and advanced topics

## ruleof5.cpp

[Video](https://youtu.be/dbc7HAcMD4c)
*Demonstrates in which situations the constructor, destructor, copy assignment operator, move constructor, and move assignment operator methods get called."

The purpose of this video is to demonstrate *when* the methods get called, **not how to write the methods**.  Note that in practice you would only want to write these methods if necessary (Rule of 5).  The class we start with technically doesn't need any of these methods (Rule of Zero).

NOTE: After the video was completed I updated the source to add an `explicit` modifier to the constructor.

## smartptr1.cpp

[Video](https://youtu.be/odTiBLk09DA)
*Introduction to smart pointers in C++ - declaring and working with shared_ptr & unique_ptr*

In general, unique_ptr is preferred since shared_ptr may not free resources if there are pointers still holding the resource.

## smartptr2.cpp

[Video](https://youtu.be/2RMhCQn2qOY)
*Demonstration of unique_ptr to an object with a destructor*

## exceptions.cpp

[Video](https://youtu.be/uV7VrfDd33o)
*Example of C++ exceptions*

## constintptr.cpp

[Video](https://youtu.be/0Xo18Ozh09Q)
*Demonstration of allocating constant pointers in differnt ways*

## variant.cpp

[Video](https://youtu.be/uEJy4QGKWIk)
*C++ variants*

## namespace.cpp

*Example of defining * using a namespace*
