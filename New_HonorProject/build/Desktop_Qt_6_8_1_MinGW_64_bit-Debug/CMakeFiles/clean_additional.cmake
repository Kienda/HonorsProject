# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\New_HonorProject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\New_HonorProject_autogen.dir\\ParseCache.txt"
  "New_HonorProject_autogen"
  )
endif()
