# Find Python's six module.
#
# PYTHON_SIX_FOUND - True if the six module has been found
# PYTHON_SIX_INCLUDE_DIR - The six module's include directory
# PYTHON_SIX_LIBRARIES - The six module's libraries
#
# Requires python interpreter to be available (PYTHONINTERP_FOUND),
# for instance using
#   find_package(PythonInterp)
#
# Author: Mathieu Maret (mcmtroffaes)
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE.txt or copy at
#  http://www.boost.org/LICENSE_1_0.txt)

if (NOT PYTHONINTERP_FOUND)
    message(STATUS "Python interpreter not found: skipping find for Python six module")
    return()
endif()

# Find the six module using the python interpreter.
execute_process(COMMAND "${PYTHON_EXECUTABLE}" "-c"
    "from __future__ import print_function; import six; print(six.__file__)"
    RESULT_VARIABLE _retcode
    OUTPUT_VARIABLE _output
    ERROR_QUIET
    OUTPUT_STRIP_TRAILING_WHITESPACE)

if (_retcode EQUAL 0 AND EXISTS "${_output}")
    set(PYTHON_SIX_FOUND ON)
    get_filename_component(PYTHON_SIX_INCLUDE_DIR "${_output}" DIRECTORY)
    get_filename_component(PYTHON_SIX_LIBRARIES "${_output}" ABSOLUTE)
    message(STATUS "Found Python six module: ${PYTHON_SIX_INCLUDE_DIR} (found version \"${PYTHON_SIX_LIBRARIES}\")")
endif()

if (NOT PYTHON_SIX_FOUND)
    message(STATUS "Python six module not found")
endif()
