cmake_minimum_required(VERSION 2.8.12)
#Bring the headers
include_directories(include)
#add the sources 
file(GLOB SOURCES "*.cpp")
#create executable
add_executable(calc ${SOURCES})
