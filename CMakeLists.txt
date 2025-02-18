cmake_minimum_required(VERSION 3.5.0)
project(Factory_method VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    custom/src/custom_transport.cpp
    lib/src/transport_lib.cpp 
    lib/src/app.cpp
    main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE
    custom/inc
    lib/inc
)


