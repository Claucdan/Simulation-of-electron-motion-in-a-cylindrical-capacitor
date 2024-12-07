add_library(
        GraphicsObjects STATIC
        GraphicsObject.h
        Charts/ChartForYx.h
        Charts/ChartForYx.cpp
)

target_include_directories(
        GraphicsObjects PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_CURRENT_SOURCE_DIR}/Charts"
)