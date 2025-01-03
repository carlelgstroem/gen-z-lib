cmake_minimum_required(VERSION 3.10)
project(gen-z-lib VERSION 1.0.0 LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define the library
add_library(gen-z-lib
    src/GenZLib.cpp
)

# Specify the public headers
target_include_directories(gen-z-lib
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Optionally, specify library properties (e.g., position-independent code)
set_target_properties(gen-z-lib PROPERTIES POSITION_INDEPENDENT_CODE ON)

# Install rules
include(GNUInstallDirs)

install(TARGETS gen-z-lib
    EXPORT gen-z-lib-config
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

# Export the library for use with find_package
install(EXPORT gen-z-lib-config
    FILE gen-z-lib-config.cmake
    NAMESPACE GenZLib::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/gen-z-lib
)

# Create a config file for find_package
include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/gen-z-lib-config-version.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
)

install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/gen-z-lib-config-version.cmake"
    "cmake/gen-z-lib-config.cmake"
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/gen-z-lib
)
