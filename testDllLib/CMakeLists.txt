###testDllLib

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/MyDllAdd)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/MyLibAdd)

LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/Bin)

aux_source_directory(. APP_SRC)
message(">>>APP:${APP_SRC}")

add_executable(testDllLib ${APP_SRC})


TARGET_LINK_LIBRARIES(testDllLib MyDllAdd.lib MyLibAdd.lib			MyDllSub.lib MyLibSub.lib)