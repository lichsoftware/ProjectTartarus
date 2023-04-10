message(STATUS "        Generating for directory: ${CMAKE_CURRENT_SOURCE_DIR}")

file(GLOB_RECURSE PT_src "*.c" "*.h")

message(STATUS "            Processed files:")
foreach(file ${PT_src})
message(STATUS "            ${file}")
endforeach()
message(STATUS "-----------------------------------------------------")

add_executable(PT ${PT_src})
