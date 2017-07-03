
add_library(Number Number.cpp)

add_executable(Neural-Networks Main.cpp)
target_link_libraries(Neural-Networks Number)

