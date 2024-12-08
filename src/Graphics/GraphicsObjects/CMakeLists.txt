add_library(
        GraphicsObjects STATIC
        IGraphicsObject.h
        Charts/Xy/ChartForYx.h
        Charts/Xy/ChartForYx.cpp
        Charts/Vy/ChartForVy.h
        Charts/Vy/ChartForVy.cpp
        Charts/Ay/ChartForAy.h
        Charts/Ay/ChartForAy.cpp
        Charts/Yt/ChartForYt.cpp
        Charts/Yt/ChartForYt.h
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
        "${CMAKE_CURRENT_SOURCE_DIR}/Charts/Vy"
        "${CMAKE_CURRENT_SOURCE_DIR}/Charts/Ay"
        "${CMAKE_CURRENT_SOURCE_DIR}/Charts/Yt"
)