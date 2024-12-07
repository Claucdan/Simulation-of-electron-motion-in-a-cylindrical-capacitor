add_executable(Mapper WIN32 mapper.cpp)

target_link_libraries(
        Mapper PRIVATE
        Window
        GraphicsObjects
)