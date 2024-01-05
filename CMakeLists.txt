cmake_minimum_required(VERSION 3.16)
project(CMakeSFMLProject LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_executable(CMakeSFMLProject
        src/main.cpp
        src/Application.cpp
        src/Application.hpp
        src/GameLoop.cpp
        src/GameLoop.hpp
        src/Scene/Scene.cpp
        src/Scene/Scene.hpp
        src/GameObject/GameObject.cpp
        src/GameObject/GameObject.hpp
        src/Component/BaseComponent.hpp
        src/Component/BaseComponent.cpp
        src/Scene/SceneController.cpp
        src/Scene/SceneController.hpp
        src/SceneBuilder/TestScene/TestSceneBuilder.cpp
        src/SceneBuilder/TestScene/TestSceneBuilder.hpp
        src/SceneBuilder/TestScene/GameObject/Player.cpp
        src/SceneBuilder/TestScene/GameObject/Player.hpp
        src/Physics/RayCast/RayCastHit.cpp
        src/Physics/RayCast/RayCastHit.hpp
        src/Physics/RayCast/RayCast.cpp
        src/Physics/RayCast/RayCast.hpp
        src/ElementContainer.cpp
        src/ElementContainer.hpp
        src/Camera/Camera.cpp
        src/Camera/Camera.hpp
        src/SceneBuilder/TestScene/GameObject/Cube.cpp
        src/SceneBuilder/TestScene/GameObject/Cube.hpp
        src/Component/Tag.hpp
        src/Physics/Collision/Collision.cpp
        src/Physics/Collision/Collision.hpp
        src/Component/Collider.cpp
        src/Component/Collider.hpp
        src/Physics/Physics.cpp
        src/Physics/Physics.hpp
        src/Debug/DebugInfo.cpp
        src/Debug/DebugInfo.hpp
        src/GameMode.cpp
        src/GameMode.hpp
)
target_link_libraries(CMakeSFMLProject PRIVATE sfml-graphics)
target_compile_features(CMakeSFMLProject PRIVATE cxx_std_17)

if(WIN32)
    add_custom_command(
        TARGET CMakeSFMLProject
        COMMENT "Copy OpenAL DLL"
        PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:CMakeSFMLProject>
        VERBATIM)
endif()

install(TARGETS CMakeSFMLProject)
