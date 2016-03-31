###MyDllSub

FILE(GLOB DLL_SRC "*.h" "*.cpp")

add_definitions("-DMYDLLSUB_EXPORTS")

#set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/Bin)

add_library(MyDllSub SHARED ${DLL_SRC})