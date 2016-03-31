###MyLibSub

FILE(GLOB LIB_SRC "*.h" "*.cpp")

add_library(MyLibSub STATIC ${LIB_SRC})