add_library(
        GraphicsObjects STATIC
        GraphicsObject.h
)

target_include_directories(
        GraphicsObjects PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}"
)