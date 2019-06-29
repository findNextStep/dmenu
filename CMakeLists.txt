cmake_minimum_required(VERSION 3.0.0)
project(dmenu)
# install in ~/.local
set(CMAKE_INSTALL_PREFIX $ENV{HOME}/.local)

add_definitions(-DVERSION="4.9" -std=c99 -DXINERAMA -D_DEFAULT_SOURCE -D_BSD_SOURCE -D_XOPEN_SOURCE=700 -D_POSIX_C_SOURCE=200809L -pedantic -Wall -Os)

include_directories(
    /usr/include/freetype2
)

add_library(dmenu_util util.c drw.c)
target_link_libraries(dmenu_util Xinerama X11 fontconfig Xft)

add_executable(dmenu dmenu.c)
target_link_libraries(dmenu dmenu_util Xinerama X11 fontconfig Xft)

install(TARGETS dmenu)
