###MyDllSub

aux_source_directory(. DLL_SRC)

add_definitions("-DMYDLLSUB_EXPORTS")

#set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/Bin)

add_library(MyDllSub SHARED ${DLL_SRC})