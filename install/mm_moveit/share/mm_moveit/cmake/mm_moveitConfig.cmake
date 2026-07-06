# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_mm_moveit_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED mm_moveit_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(mm_moveit_FOUND FALSE)
  elseif(NOT mm_moveit_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(mm_moveit_FOUND FALSE)
  endif()
  return()
endif()
set(_mm_moveit_CONFIG_INCLUDED TRUE)

# output package information
if(NOT mm_moveit_FIND_QUIETLY)
  message(STATUS "Found mm_moveit: 0.3.0 (${mm_moveit_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'mm_moveit' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT mm_moveit_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(mm_moveit_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${mm_moveit_DIR}/${_extra}")
endforeach()
