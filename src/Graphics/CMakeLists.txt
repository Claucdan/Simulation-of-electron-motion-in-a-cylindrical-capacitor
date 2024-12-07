add_library(
        Window STATIC
        Window/WindowGraphic.h
        Window/WindowGraphic.cpp

        GraphicsObjects/GraphicsObject.h
)


target_include_directories(
        Window PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/Window"
        "${CMAKE_CURRENT_SOURCE_DIR}/GraphicsObjects"
)