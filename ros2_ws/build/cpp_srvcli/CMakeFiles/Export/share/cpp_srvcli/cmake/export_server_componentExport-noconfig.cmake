#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cpp_srvcli::server_component" for configuration ""
set_property(TARGET cpp_srvcli::server_component APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(cpp_srvcli::server_component PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libserver_component.so"
  IMPORTED_SONAME_NOCONFIG "libserver_component.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS cpp_srvcli::server_component )
list(APPEND _IMPORT_CHECK_FILES_FOR_cpp_srvcli::server_component "${_IMPORT_PREFIX}/lib/libserver_component.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
