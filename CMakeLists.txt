cmake_minimum_required(VERSION 3.10)
project(OpenCVproject)

# Create Main project
set(SOURCES
    main.cpp        # ここに.cppファイルと.hを列挙する
)

add_executable(main
    ${SOURCES}
)


# For OpenCV
find_package(OpenCV REQUIRED)
if(OpenCV_FOUND)
    target_include_directories(main PUBLIC ${OpenCV_INCLUDE_DIRS})
    target_link_libraries(main ${OpenCV_LIBS})
endif()


