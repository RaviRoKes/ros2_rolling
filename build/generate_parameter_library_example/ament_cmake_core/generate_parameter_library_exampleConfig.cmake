# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_generate_parameter_library_example_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED generate_parameter_library_example_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(generate_parameter_library_example_FOUND FALSE)
  elseif(NOT generate_parameter_library_example_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(generate_parameter_library_example_FOUND FALSE)
  endif()
  return()
endif()
set(_generate_parameter_library_example_CONFIG_INCLUDED TRUE)

# output package information
if(NOT generate_parameter_library_example_FIND_QUIETLY)
  message(STATUS "Found generate_parameter_library_example: 0.3.9 (${generate_parameter_library_example_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'generate_parameter_library_example' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT generate_parameter_library_example_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(generate_parameter_library_example_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${generate_parameter_library_example_DIR}/${_extra}")
endforeach()
