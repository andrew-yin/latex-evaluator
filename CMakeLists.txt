CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)

project(LatexEvaluator)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_definitions(-DANTLR4CPP_STATIC)

include(ExternalAntlr4Cpp)
include_directories(${ANTLR4_INCLUDE_DIRS})

set(ANTLR_EXECUTABLE /usr/local/lib/antlr-4.12.0-complete.jar) 
find_package(ANTLR REQUIRED)

antlr_target(Latex ${PROJECT_SOURCE_DIR}/src/lang/Latex.g4
              PACKAGE LatexEvaluator
              OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/src/lang/
              VISITOR)


include_directories(${ANTLR_Latex_OUTPUT_DIR}
                      ${PROJECT_SOURCE_DIR}/src/evaluator/
                      ${PROJECT_SOURCE_DIR}/src/runner/
                      ${PROJECT_SOURCE_DIR}/src/utils/
)

set(SOURCES
    ${PROJECT_SOURCE_DIR}/src/main.cpp
    ${ANTLR_Latex_CXX_OUTPUTS}
    ${PROJECT_SOURCE_DIR}/src/utils/utils.h 
    ${PROJECT_SOURCE_DIR}/src/utils/utils.cpp
    ${PROJECT_SOURCE_DIR}/src/evaluator/Evaluator.h
    ${PROJECT_SOURCE_DIR}/src/evaluator/Evaluator.cpp
    ${PROJECT_SOURCE_DIR}/src/runner/Runner.h
    ${PROJECT_SOURCE_DIR}/src/runner/Runner.cpp
)

add_executable(evaluate-latex ${SOURCES})
target_link_libraries(evaluate-latex antlr4_static)
