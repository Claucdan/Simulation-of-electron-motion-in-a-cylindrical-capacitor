add_library(
        Window STATIC
        WindowGraphic.h
        WindowGraphic.cpp
)

find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})


target_link_libraries(
        Window PRIVATE
        ${OPENGL_LIBRARIES}
        GraphicsObjects
)

target_include_directories(
        Window PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}"
)
