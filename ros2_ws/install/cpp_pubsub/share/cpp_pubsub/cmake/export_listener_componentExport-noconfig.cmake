#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cpp_pubsub::listener_component" for configuration ""
set_property(TARGET cpp_pubsub::listener_component APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(cpp_pubsub::listener_component PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/liblistener_component.so"
  IMPORTED_SONAME_NOCONFIG "liblistener_component.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS cpp_pubsub::listener_component )
list(APPEND _IMPORT_CHECK_FILES_FOR_cpp_pubsub::listener_component "${_IMPORT_PREFIX}/lib/liblistener_component.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
