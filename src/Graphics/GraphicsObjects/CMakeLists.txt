add_library(
        GraphicsObjects STATIC
        GraphicsObject.h
        Charts/Xy/ChartForYx.h
        Charts/Xy/ChartForYx.cpp
)

find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})

target_link_libraries(
        GraphicsObjects PRIVATE
        ${OPENGL_LIBRARIES}
)

target_include_directories(
        GraphicsObjects PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_CURRENT_SOURCE_DIR}/Charts/Xy"
)