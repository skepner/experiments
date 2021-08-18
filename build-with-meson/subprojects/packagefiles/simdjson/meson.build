project('simdjson', 'cpp')

simdjson_dir = include_directories('src', 'include', '.')
simdjson_sys = include_directories(is_system : true)
simdjson_inc = [simdjson_dir, simdjson_sys]
simdjson_src = files('src/simdjson.cpp')
simdjson = shared_library(
  'simdjson',
  simdjson_src,
  build_by_default : true,
  link_args : [],
  link_with : [],
  include_directories : simdjson_inc,
  install : true,
  override_options : ['cpp_std=c++17'],
  objects : [],
  install_dir : 'lib',
  cpp_args : [
    '-O3',
    '-DNDEBUG',
    '-Weffc++',
    '-Wsign-compare',
    '-Wshadow',
    '-Wwrite-strings',
    '-Wpointer-arith',
    '-Winit-self',
    '-Wconversion',
    '-Wno-sign-conversion',
    '-DSIMDJSON_THREADS_ENABLED=1',
    '-Dsimdjson_EXPORTS'
  ]
)
simdjson_dep = declare_dependency(
  link_args : [],
  link_with : simdjson,
  compile_args : [
    '-fPIC',
    '-Werror',
    '-Wall',
    '-Wextra',
    '-Weffc++',
    '-Wsign-compare',
    '-Wshadow',
    '-Wwrite-strings',
    '-Wpointer-arith',
    '-Winit-self',
    '-Wconversion',
    '-Wno-sign-conversion',
    '-DSIMDJSON_THREADS_ENABLED=1'
  ],
  include_directories : simdjson_inc
)

# custom_tgt_0 = custom_target(
#   'custom_tgt_0',
#   input : [],
#   output : ['.simdjson-user-CMakeCache.txt'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-O',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/.simdjson-user-CMakeCache.txt',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build',
#     'grep',
#     'SIMDJSON_',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/CMakeCache.txt',
#     '>',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/.simdjson-user-CMakeCache.txt.tmp',
#     ';;;',
#     'grep',
#     '-v',
#     'SIMDJSON_LIB_',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/.simdjson-user-CMakeCache.txt.tmp',
#     '>',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/.simdjson-user-CMakeCache.txt',
#     ';;;'
#   ],
#   depends : []
# )
# simdjson_user_cmakecache = custom_target(
#   'simdjson_user_cmakecache',
#   input : [custom_tgt_0],
#   output : ['simdjson_user_cmakecache.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build'
#   ],
#   depends : []
# )
# custom_tgt_1 = custom_target(
#   'custom_tgt_1',
#   input : ['jsonexamples/generated/miss-templates/128.txt', 'jsonexamples/generated/miss-templates/64.txt'],
#   output : [
#     'utf-8.json',
#     'escape.json',
#     '0-structurals.json',
#     '7-structurals.json',
#     '15-structurals.json',
#     '23-structurals.json'
#   ],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-O',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/generated/utf-8.json',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/generated/escape.json',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/generated/0-structurals.json',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/generated/7-structurals.json',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/generated/15-structurals.json',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/generated/23-structurals.json',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonexamples/generated',
#     '/usr/bin/ruby',
#     'genfeaturejson.rb',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/generated',
#     ';;;'
#   ],
#   depends : []
# )
# generated_data = custom_target(
#   'generated_data',
#   input : [
#     custom_tgt_1[0],
#     custom_tgt_1[1],
#     custom_tgt_1[2],
#     custom_tgt_1[3],
#     custom_tgt_1[4],
#     custom_tgt_1[5]
#   ],
#   output : ['generated_data.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/generated'
#   ],
#   depends : []
# )
# simdjson_dir = include_directories('src', 'include', '__CMake_build', '.')
# simdjson_sys = include_directories(is_system : true)
# simdjson_inc = [simdjson_dir, simdjson_sys]
# simdjson_src = files('src/simdjson.cpp')
# simdjson = shared_library(
#   'simdjson',
#   simdjson_src,
#   build_by_default : true,
#   link_args : [],
#   link_with : [],
#   include_directories : simdjson_inc,
#   install : true,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   install_dir : 'lib',
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1',
#     '-Dsimdjson_EXPORTS'
#   ]
# )
# simdjson_dep = declare_dependency(
#   link_args : [],
#   link_with : simdjson,
#   compile_args : [
#     '-fPIC',
#     '-Werror',
#     '-Wall',
#     '-Wextra',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   include_directories : simdjson_inc
# )
# custom_tgt_2 = custom_target(
#   'custom_tgt_2',
#   input : ['singleheader/amalgamate.py'],
#   output : ['simdjson.cpp', 'simdjson.h', 'amalgamate_demo.cpp', 'README.md'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-O',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/singleheader/simdjson.cpp',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/singleheader/simdjson.h',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/singleheader/amalgamate_demo.cpp',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/singleheader/README.md',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/singleheader',
#     '/usr/local/Cellar/cmake/3.21.1/bin/cmake',
#     '-E',
#     'env',
#     'AMALGAMATE_SOURCE_PATH=/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/src',
#     'AMALGAMATE_INPUT_PATH=/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/include',
#     'AMALGAMATE_OUTPUT_PATH=/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/singleheader',
#     '/usr/local/Frameworks/Python.framework/Versions/3.9/bin/python3.9',
#     '/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/singleheader/amalgamate.py',
#     ';;;'
#   ],
#   depends : [simdjson]
# )
# amalgamate = custom_target(
#   'amalgamate',
#   input : [],
#   output : ['amalgamate.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/singleheader'
#   ],
#   depends : []
# )
# singleheader_files = custom_target(
#   'singleheader_files',
#   input : [custom_tgt_2[0], custom_tgt_2[1], custom_tgt_2[2], custom_tgt_2[3]],
#   output : ['singleheader_files.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/singleheader'
#   ],
#   depends : []
# )
# ondemand_active_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_active_tests_sys = include_directories(is_system : true)
# ondemand_active_tests_inc = [ondemand_active_tests_dir, ondemand_active_tests_sys]
# ondemand_active_tests_src = files('tests/ondemand/ondemand_active_tests.cpp')
# ondemand_active_tests = executable(
#   'ondemand_active_tests',
#   ondemand_active_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_active_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_array_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_array_tests_sys = include_directories(is_system : true)
# ondemand_array_tests_inc = [ondemand_array_tests_dir, ondemand_array_tests_sys]
# ondemand_array_tests_src = files('tests/ondemand/ondemand_array_tests.cpp')
# ondemand_array_tests = executable(
#   'ondemand_array_tests',
#   ondemand_array_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_array_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_array_error_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_array_error_tests_sys = include_directories(is_system : true)
# ondemand_array_error_tests_inc = [ondemand_array_error_tests_dir, ondemand_array_error_tests_sys]
# ondemand_array_error_tests_src = files('tests/ondemand/ondemand_array_error_tests.cpp')
# ondemand_array_error_tests = executable(
#   'ondemand_array_error_tests',
#   ondemand_array_error_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_array_error_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_compilation_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_compilation_tests_sys = include_directories(is_system : true)
# ondemand_compilation_tests_inc = [ondemand_compilation_tests_dir, ondemand_compilation_tests_sys]
# ondemand_compilation_tests_src = files('tests/ondemand/ondemand_compilation_tests.cpp')
# ondemand_compilation_tests = executable(
#   'ondemand_compilation_tests',
#   ondemand_compilation_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_compilation_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_error_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_error_tests_sys = include_directories(is_system : true)
# ondemand_error_tests_inc = [ondemand_error_tests_dir, ondemand_error_tests_sys]
# ondemand_error_tests_src = files('tests/ondemand/ondemand_error_tests.cpp')
# ondemand_error_tests = executable(
#   'ondemand_error_tests',
#   ondemand_error_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_error_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_key_string_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_key_string_tests_sys = include_directories(is_system : true)
# ondemand_key_string_tests_inc = [ondemand_key_string_tests_dir, ondemand_key_string_tests_sys]
# ondemand_key_string_tests_src = files('tests/ondemand/ondemand_key_string_tests.cpp')
# ondemand_key_string_tests = executable(
#   'ondemand_key_string_tests',
#   ondemand_key_string_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_key_string_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_misc_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_misc_tests_sys = include_directories(is_system : true)
# ondemand_misc_tests_inc = [ondemand_misc_tests_dir, ondemand_misc_tests_sys]
# ondemand_misc_tests_src = files('tests/ondemand/ondemand_misc_tests.cpp')
# ondemand_misc_tests = executable(
#   'ondemand_misc_tests',
#   ondemand_misc_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_misc_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_number_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_number_tests_sys = include_directories(is_system : true)
# ondemand_number_tests_inc = [ondemand_number_tests_dir, ondemand_number_tests_sys]
# ondemand_number_tests_src = files('tests/ondemand/ondemand_number_tests.cpp')
# ondemand_number_tests = executable(
#   'ondemand_number_tests',
#   ondemand_number_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_number_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_object_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_object_tests_sys = include_directories(is_system : true)
# ondemand_object_tests_inc = [ondemand_object_tests_dir, ondemand_object_tests_sys]
# ondemand_object_tests_src = files('tests/ondemand/ondemand_object_tests.cpp')
# ondemand_object_tests = executable(
#   'ondemand_object_tests',
#   ondemand_object_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_object_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_object_error_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_object_error_tests_sys = include_directories(is_system : true)
# ondemand_object_error_tests_inc = [ondemand_object_error_tests_dir, ondemand_object_error_tests_sys]
# ondemand_object_error_tests_src = files('tests/ondemand/ondemand_object_error_tests.cpp')
# ondemand_object_error_tests = executable(
#   'ondemand_object_error_tests',
#   ondemand_object_error_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_object_error_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_ordering_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_ordering_tests_sys = include_directories(is_system : true)
# ondemand_ordering_tests_inc = [ondemand_ordering_tests_dir, ondemand_ordering_tests_sys]
# ondemand_ordering_tests_src = files('tests/ondemand/ondemand_ordering_tests.cpp')
# ondemand_ordering_tests = executable(
#   'ondemand_ordering_tests',
#   ondemand_ordering_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_ordering_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_parse_api_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_parse_api_tests_sys = include_directories(is_system : true)
# ondemand_parse_api_tests_inc = [ondemand_parse_api_tests_dir, ondemand_parse_api_tests_sys]
# ondemand_parse_api_tests_src = files('tests/ondemand/ondemand_parse_api_tests.cpp')
# ondemand_parse_api_tests = executable(
#   'ondemand_parse_api_tests',
#   ondemand_parse_api_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_parse_api_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_readme_examples_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_readme_examples_sys = include_directories(is_system : true)
# ondemand_readme_examples_inc = [ondemand_readme_examples_dir, ondemand_readme_examples_sys]
# ondemand_readme_examples_src = files('tests/ondemand/ondemand_readme_examples.cpp')
# ondemand_readme_examples = executable(
#   'ondemand_readme_examples',
#   ondemand_readme_examples_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_readme_examples_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_scalar_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_scalar_tests_sys = include_directories(is_system : true)
# ondemand_scalar_tests_inc = [ondemand_scalar_tests_dir, ondemand_scalar_tests_sys]
# ondemand_scalar_tests_src = files('tests/ondemand/ondemand_scalar_tests.cpp')
# ondemand_scalar_tests = executable(
#   'ondemand_scalar_tests',
#   ondemand_scalar_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_scalar_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_twitter_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_twitter_tests_sys = include_directories(is_system : true)
# ondemand_twitter_tests_inc = [ondemand_twitter_tests_dir, ondemand_twitter_tests_sys]
# ondemand_twitter_tests_src = files('tests/ondemand/ondemand_twitter_tests.cpp')
# ondemand_twitter_tests = executable(
#   'ondemand_twitter_tests',
#   ondemand_twitter_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_twitter_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_wrong_type_error_tests_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_wrong_type_error_tests_sys = include_directories(is_system : true)
# ondemand_wrong_type_error_tests_inc = [ondemand_wrong_type_error_tests_dir, ondemand_wrong_type_error_tests_sys]
# ondemand_wrong_type_error_tests_src = files('tests/ondemand/ondemand_wrong_type_error_tests.cpp')
# ondemand_wrong_type_error_tests = executable(
#   'ondemand_wrong_type_error_tests',
#   ondemand_wrong_type_error_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_wrong_type_error_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_assert_out_of_order_values_dir = include_directories('tests', 'include', '__CMake_build', '.')
# ondemand_assert_out_of_order_values_sys = include_directories(is_system : true)
# ondemand_assert_out_of_order_values_inc = [ondemand_assert_out_of_order_values_dir, ondemand_assert_out_of_order_values_sys]
# ondemand_assert_out_of_order_values_src = files('tests/ondemand/ondemand_assert_out_of_order_values.cpp')
# ondemand_assert_out_of_order_values = executable(
#   'ondemand_assert_out_of_order_values',
#   ondemand_assert_out_of_order_values_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : ondemand_assert_out_of_order_values_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# ondemand_tests = custom_target(
#   'ondemand_tests',
#   input : [],
#   output : ['ondemand_tests.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/tests/ondemand'
#   ],
#   depends : [
#     ondemand_active_tests,
#     ondemand_array_tests,
#     ondemand_array_error_tests,
#     ondemand_compilation_tests,
#     ondemand_error_tests,
#     ondemand_key_string_tests,
#     ondemand_misc_tests,
#     ondemand_number_tests,
#     ondemand_object_tests,
#     ondemand_object_error_tests,
#     ondemand_ordering_tests,
#     ondemand_parse_api_tests,
#     ondemand_readme_examples,
#     ondemand_scalar_tests,
#     ondemand_twitter_tests,
#     ondemand_wrong_type_error_tests,
#     ondemand_assert_out_of_order_values
#   ]
# )
# numberparsingcheck_dir = include_directories('src', 'include', '__CMake_build', '.')
# numberparsingcheck_sys = include_directories(is_system : true)
# numberparsingcheck_inc = [numberparsingcheck_dir, numberparsingcheck_sys]
# numberparsingcheck_src = files('tests/numberparsingcheck.cpp')
# numberparsingcheck = executable(
#   'numberparsingcheck',
#   numberparsingcheck_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : numberparsingcheck_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DNOMINMAX',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# stringparsingcheck_dir = include_directories('src', 'include', '__CMake_build', '.')
# stringparsingcheck_sys = include_directories(is_system : true)
# stringparsingcheck_inc = [stringparsingcheck_dir, stringparsingcheck_sys]
# stringparsingcheck_src = files('tests/stringparsingcheck.cpp')
# stringparsingcheck = executable(
#   'stringparsingcheck',
#   stringparsingcheck_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : stringparsingcheck_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DNOMINMAX',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# random_string_number_tests_dir = include_directories('include', '__CMake_build', '.')
# random_string_number_tests_sys = include_directories(is_system : true)
# random_string_number_tests_inc = [random_string_number_tests_dir, random_string_number_tests_sys]
# random_string_number_tests_src = files('tests/random_string_number_tests.cpp')
# random_string_number_tests = executable(
#   'random_string_number_tests',
#   random_string_number_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : random_string_number_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# basictests_dir = include_directories('include', '__CMake_build', '.')
# basictests_sys = include_directories(is_system : true)
# basictests_inc = [basictests_dir, basictests_sys]
# basictests_src = files('tests/basictests.cpp')
# basictests = executable(
#   'basictests',
#   basictests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : basictests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# document_stream_tests_dir = include_directories('include', '__CMake_build', '.')
# document_stream_tests_sys = include_directories(is_system : true)
# document_stream_tests_inc = [document_stream_tests_dir, document_stream_tests_sys]
# document_stream_tests_src = files('tests/document_stream_tests.cpp')
# document_stream_tests = executable(
#   'document_stream_tests',
#   document_stream_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : document_stream_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# document_tests_dir = include_directories('include', '__CMake_build', '.')
# document_tests_sys = include_directories(is_system : true)
# document_tests_inc = [document_tests_dir, document_tests_sys]
# document_tests_src = files('tests/document_tests.cpp')
# document_tests = executable(
#   'document_tests',
#   document_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : document_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# errortests_dir = include_directories('include', '__CMake_build', '.')
# errortests_sys = include_directories(is_system : true)
# errortests_inc = [errortests_dir, errortests_sys]
# errortests_src = files('tests/errortests.cpp')
# errortests = executable(
#   'errortests',
#   errortests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : errortests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# extracting_values_example_dir = include_directories('include', '__CMake_build', '.')
# extracting_values_example_sys = include_directories(is_system : true)
# extracting_values_example_inc = [extracting_values_example_dir, extracting_values_example_sys]
# extracting_values_example_src = files('tests/extracting_values_example.cpp')
# extracting_values_example = executable(
#   'extracting_values_example',
#   extracting_values_example_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : extracting_values_example_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# integer_tests_dir = include_directories('include', '__CMake_build', '.')
# integer_tests_sys = include_directories(is_system : true)
# integer_tests_inc = [integer_tests_dir, integer_tests_sys]
# integer_tests_src = files('tests/integer_tests.cpp')
# integer_tests = executable(
#   'integer_tests',
#   integer_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : integer_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# jsoncheck_dir = include_directories('include', '__CMake_build', '.')
# jsoncheck_sys = include_directories(is_system : true)
# jsoncheck_inc = [jsoncheck_dir, jsoncheck_sys]
# jsoncheck_src = files('tests/jsoncheck.cpp')
# jsoncheck = executable(
#   'jsoncheck',
#   jsoncheck_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : jsoncheck_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# minefieldcheck_dir = include_directories('include', '__CMake_build', '.')
# minefieldcheck_sys = include_directories(is_system : true)
# minefieldcheck_inc = [minefieldcheck_dir, minefieldcheck_sys]
# minefieldcheck_src = files('tests/minefieldcheck.cpp')
# minefieldcheck = executable(
#   'minefieldcheck',
#   minefieldcheck_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : minefieldcheck_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# parse_many_test_dir = include_directories('include', '__CMake_build', '.')
# parse_many_test_sys = include_directories(is_system : true)
# parse_many_test_inc = [parse_many_test_dir, parse_many_test_sys]
# parse_many_test_src = files('tests/parse_many_test.cpp')
# parse_many_test = executable(
#   'parse_many_test',
#   parse_many_test_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : parse_many_test_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# pointercheck_dir = include_directories('include', '__CMake_build', '.')
# pointercheck_sys = include_directories(is_system : true)
# pointercheck_inc = [pointercheck_dir, pointercheck_sys]
# pointercheck_src = files('tests/pointercheck.cpp')
# pointercheck = executable(
#   'pointercheck',
#   pointercheck_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : pointercheck_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# unicode_tests_dir = include_directories('include', '__CMake_build', '.')
# unicode_tests_sys = include_directories(is_system : true)
# unicode_tests_inc = [unicode_tests_dir, unicode_tests_sys]
# unicode_tests_src = files('tests/unicode_tests.cpp')
# unicode_tests = executable(
#   'unicode_tests',
#   unicode_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : unicode_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# trivially_copyable_test_dir = include_directories('include', '__CMake_build', '.')
# trivially_copyable_test_sys = include_directories(is_system : true)
# trivially_copyable_test_inc = [trivially_copyable_test_dir, trivially_copyable_test_sys]
# trivially_copyable_test_src = files('tests/trivially_copyable_test.cpp')
# trivially_copyable_test = executable(
#   'trivially_copyable_test',
#   trivially_copyable_test_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : trivially_copyable_test_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# minify_tests_dir = include_directories('include', '__CMake_build', '.')
# minify_tests_sys = include_directories(is_system : true)
# minify_tests_inc = [minify_tests_dir, minify_tests_sys]
# minify_tests_src = files('tests/minify_tests.cpp')
# minify_tests = executable(
#   'minify_tests',
#   minify_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : minify_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# padded_string_tests_dir = include_directories('include', '__CMake_build', '.')
# padded_string_tests_sys = include_directories(is_system : true)
# padded_string_tests_inc = [padded_string_tests_dir, padded_string_tests_sys]
# padded_string_tests_src = files('tests/padded_string_tests.cpp')
# padded_string_tests = executable(
#   'padded_string_tests',
#   padded_string_tests_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : padded_string_tests_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# acceptance_tests = custom_target(
#   'acceptance_tests',
#   input : [],
#   output : ['acceptance_tests.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/tests/ondemand'
#   ],
#   depends : [
#     ondemand_active_tests,
#     ondemand_array_tests,
#     ondemand_array_error_tests,
#     ondemand_compilation_tests,
#     ondemand_error_tests,
#     ondemand_key_string_tests,
#     ondemand_misc_tests,
#     ondemand_number_tests,
#     ondemand_object_tests,
#     ondemand_object_error_tests,
#     ondemand_ordering_tests,
#     ondemand_parse_api_tests,
#     ondemand_readme_examples,
#     ondemand_scalar_tests,
#     ondemand_twitter_tests,
#     ondemand_wrong_type_error_tests,
#     numberparsingcheck,
#     stringparsingcheck,
#     random_string_number_tests,
#     basictests,
#     document_stream_tests,
#     document_tests,
#     errortests,
#     extracting_values_example,
#     integer_tests,
#     jsoncheck,
#     minefieldcheck,
#     parse_many_test,
#     pointercheck,
#     unicode_tests,
#     trivially_copyable_test,
#     minify_tests,
#     padded_string_tests
#   ]
# )
# checkimplementation_dir = include_directories('include', '__CMake_build', '.')
# checkimplementation_sys = include_directories(is_system : true)
# checkimplementation_inc = [checkimplementation_dir, checkimplementation_sys]
# checkimplementation_src = files('tests/checkimplementation.cpp')
# checkimplementation = executable(
#   'checkimplementation',
#   checkimplementation_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : checkimplementation_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# per_implementation_tests = custom_target(
#   'per_implementation_tests',
#   input : [],
#   output : ['per_implementation_tests.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/tests/ondemand'
#   ],
#   depends : [
#     ondemand_active_tests,
#     ondemand_array_tests,
#     ondemand_array_error_tests,
#     ondemand_compilation_tests,
#     ondemand_error_tests,
#     ondemand_key_string_tests,
#     ondemand_misc_tests,
#     ondemand_number_tests,
#     ondemand_object_tests,
#     ondemand_object_error_tests,
#     ondemand_ordering_tests,
#     ondemand_parse_api_tests,
#     ondemand_readme_examples,
#     ondemand_scalar_tests,
#     ondemand_twitter_tests,
#     ondemand_wrong_type_error_tests,
#     ondemand_assert_out_of_order_values,
#     numberparsingcheck,
#     stringparsingcheck,
#     random_string_number_tests,
#     basictests,
#     document_stream_tests,
#     document_tests,
#     errortests,
#     extracting_values_example,
#     integer_tests,
#     jsoncheck,
#     minefieldcheck,
#     parse_many_test,
#     pointercheck,
#     unicode_tests,
#     trivially_copyable_test,
#     minify_tests,
#     checkimplementation
#   ]
# )
# assert_tests = custom_target(
#   'assert_tests',
#   input : [],
#   output : ['assert_tests.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/tests/ondemand'
#   ],
#   depends : [ondemand_assert_out_of_order_values]
# )
# explicitonly_tests = custom_target(
#   'explicitonly_tests',
#   input : [],
#   output : ['explicitonly_tests.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/tests/ondemand'
#   ],
#   depends : [ondemand_assert_out_of_order_values]
# )
# dom_tests = custom_target(
#   'dom_tests',
#   input : [],
#   output : ['dom_tests.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/tests'
#   ],
#   depends : [
#     random_string_number_tests,
#     basictests,
#     document_stream_tests,
#     document_tests,
#     errortests,
#     extracting_values_example,
#     integer_tests,
#     jsoncheck,
#     minefieldcheck,
#     parse_many_test,
#     pointercheck,
#     unicode_tests,
#     trivially_copyable_test
#   ]
# )
# other_tests = custom_target(
#   'other_tests',
#   input : [],
#   output : ['other_tests.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/tests'
#   ],
#   depends : [minify_tests, padded_string_tests, checkimplementation]
# )
# all_tests = custom_target(
#   'all_tests',
#   input : [],
#   output : ['all_tests.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/tests'
#   ],
#   depends : [
#     ondemand_tests,
#     acceptance_tests,
#     per_implementation_tests,
#     assert_tests,
#     explicitonly_tests,
#     dom_tests,
#     other_tests
#   ]
# )
# fuzz_atpointer_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_atpointer_sys = include_directories(is_system : true)
# fuzz_atpointer_inc = [fuzz_atpointer_dir, fuzz_atpointer_sys]
# fuzz_atpointer_src = files('fuzz/fuzz_atpointer.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_atpointer = executable(
#   'fuzz_atpointer',
#   fuzz_atpointer_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_atpointer_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fuzz_dump_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_dump_sys = include_directories(is_system : true)
# fuzz_dump_inc = [fuzz_dump_dir, fuzz_dump_sys]
# fuzz_dump_src = files('fuzz/fuzz_dump.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_dump = executable(
#   'fuzz_dump',
#   fuzz_dump_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_dump_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fuzz_dump_raw_tape_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_dump_raw_tape_sys = include_directories(is_system : true)
# fuzz_dump_raw_tape_inc = [fuzz_dump_raw_tape_dir, fuzz_dump_raw_tape_sys]
# fuzz_dump_raw_tape_src = files('fuzz/fuzz_dump_raw_tape.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_dump_raw_tape = executable(
#   'fuzz_dump_raw_tape',
#   fuzz_dump_raw_tape_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_dump_raw_tape_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fuzz_element_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_element_sys = include_directories(is_system : true)
# fuzz_element_inc = [fuzz_element_dir, fuzz_element_sys]
# fuzz_element_src = files('fuzz/fuzz_element.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_element = executable(
#   'fuzz_element',
#   fuzz_element_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_element_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fuzz_implementations_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_implementations_sys = include_directories(is_system : true)
# fuzz_implementations_inc = [fuzz_implementations_dir, fuzz_implementations_sys]
# fuzz_implementations_src = files('fuzz/fuzz_implementations.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_implementations = executable(
#   'fuzz_implementations',
#   fuzz_implementations_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_implementations_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fuzz_minify_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_minify_sys = include_directories(is_system : true)
# fuzz_minify_inc = [fuzz_minify_dir, fuzz_minify_sys]
# fuzz_minify_src = files('fuzz/fuzz_minify.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_minify = executable(
#   'fuzz_minify',
#   fuzz_minify_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_minify_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fuzz_minifyimpl_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_minifyimpl_sys = include_directories(is_system : true)
# fuzz_minifyimpl_inc = [fuzz_minifyimpl_dir, fuzz_minifyimpl_sys]
# fuzz_minifyimpl_src = files('fuzz/fuzz_minifyimpl.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_minifyimpl = executable(
#   'fuzz_minifyimpl',
#   fuzz_minifyimpl_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_minifyimpl_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fuzz_ndjson_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_ndjson_sys = include_directories(is_system : true)
# fuzz_ndjson_inc = [fuzz_ndjson_dir, fuzz_ndjson_sys]
# fuzz_ndjson_src = files('fuzz/fuzz_ndjson.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_ndjson = executable(
#   'fuzz_ndjson',
#   fuzz_ndjson_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_ndjson_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fuzz_ondemand_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_ondemand_sys = include_directories(is_system : true)
# fuzz_ondemand_inc = [fuzz_ondemand_dir, fuzz_ondemand_sys]
# fuzz_ondemand_src = files('fuzz/fuzz_ondemand.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_ondemand = executable(
#   'fuzz_ondemand',
#   fuzz_ondemand_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_ondemand_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fuzz_padded_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_padded_sys = include_directories(is_system : true)
# fuzz_padded_inc = [fuzz_padded_dir, fuzz_padded_sys]
# fuzz_padded_src = files('fuzz/fuzz_padded.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_padded = executable(
#   'fuzz_padded',
#   fuzz_padded_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_padded_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fuzz_parser_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_parser_sys = include_directories(is_system : true)
# fuzz_parser_inc = [fuzz_parser_dir, fuzz_parser_sys]
# fuzz_parser_src = files('fuzz/fuzz_parser.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_parser = executable(
#   'fuzz_parser',
#   fuzz_parser_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_parser_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fuzz_print_json_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_print_json_sys = include_directories(is_system : true)
# fuzz_print_json_inc = [fuzz_print_json_dir, fuzz_print_json_sys]
# fuzz_print_json_src = files('fuzz/fuzz_print_json.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_print_json = executable(
#   'fuzz_print_json',
#   fuzz_print_json_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_print_json_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fuzz_utf8_dir = include_directories('src', 'include', '__CMake_build', '.')
# fuzz_utf8_sys = include_directories(is_system : true)
# fuzz_utf8_inc = [fuzz_utf8_dir, fuzz_utf8_sys]
# fuzz_utf8_src = files('fuzz/fuzz_utf8.cpp', 'fuzz/main.cpp', 'src/simdjson.cpp')
# fuzz_utf8 = executable(
#   'fuzz_utf8',
#   fuzz_utf8_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : fuzz_utf8_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# all_fuzzers = custom_target(
#   'all_fuzzers',
#   input : [],
#   output : ['all_fuzzers.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/fuzz'
#   ],
#   depends : [
#     fuzz_atpointer,
#     fuzz_dump,
#     fuzz_dump_raw_tape,
#     fuzz_element,
#     fuzz_implementations,
#     fuzz_minify,
#     fuzz_minifyimpl,
#     fuzz_ndjson,
#     fuzz_ondemand,
#     fuzz_padded,
#     fuzz_parser,
#     fuzz_print_json,
#     fuzz_utf8
#   ]
# )
# print_all_fuzzernames = custom_target(
#   'print_all_fuzzernames',
#   input : [],
#   output : ['print_all_fuzzernames.h'],
#   command : [
#     '/usr/local/Cellar/meson/0.59.0/libexec/bin/meson',
#     '--internal',
#     'cmake_run_ctgt',
#     '-o',
#     '@OUTPUT@',
#     '-d',
#     '/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/fuzz',
#     '/usr/local/Cellar/cmake/3.21.1/bin/cmake',
#     '-E',
#     'echo',
#     fuzz_atpointer,
#     fuzz_dump,
#     fuzz_dump_raw_tape,
#     fuzz_element,
#     fuzz_implementations,
#     fuzz_minify,
#     fuzz_minifyimpl,
#     fuzz_ndjson,
#     fuzz_ondemand,
#     fuzz_padded,
#     fuzz_parser,
#     fuzz_print_json,
#     fuzz_utf8,
#     ';;;'
#   ],
#   depends : []
# )
# amalgamate_demo_dir = include_directories('__CMake_build/singleheader', '__CMake_build', '.')
# amalgamate_demo_sys = include_directories(is_system : true)
# amalgamate_demo_inc = [amalgamate_demo_dir, amalgamate_demo_sys]
# amalgamate_demo_src = files()
# amalgamate_demo = executable(
#   'amalgamate_demo',
#   amalgamate_demo_src,
#   custom_tgt_2[2],
#   custom_tgt_2[1],
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : amalgamate_demo_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   c_args : [],
#   pie : true
# )
# amalgamate_demo_direct_from_repository_dir = include_directories('singleheader', '__CMake_build', '.')
# amalgamate_demo_direct_from_repository_sys = include_directories(is_system : true)
# amalgamate_demo_direct_from_repository_inc = [amalgamate_demo_direct_from_repository_dir, amalgamate_demo_direct_from_repository_sys]
# amalgamate_demo_direct_from_repository_src = files('singleheader/amalgamate_demo.cpp')
# amalgamate_demo_direct_from_repository = executable(
#   'amalgamate_demo_direct_from_repository',
#   amalgamate_demo_direct_from_repository_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [],
#   include_directories : amalgamate_demo_direct_from_repository_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# cm_benchmark_dir = include_directories('dependencies/.cache/google_benchmarks/include', 'dependencies/.cache/google_benchmarks/src', '__CMake_build', '.')
# cm_benchmark_sys = include_directories(is_system : true)
# cm_benchmark_inc = [cm_benchmark_dir, cm_benchmark_sys]
# cm_benchmark_src = files(
#   'dependencies/.cache/google_benchmarks/src/benchmark.cc',
#   'dependencies/.cache/google_benchmarks/src/benchmark_api_internal.cc',
#   'dependencies/.cache/google_benchmarks/src/benchmark_name.cc',
#   'dependencies/.cache/google_benchmarks/src/benchmark_register.cc',
#   'dependencies/.cache/google_benchmarks/src/benchmark_runner.cc',
#   'dependencies/.cache/google_benchmarks/src/colorprint.cc',
#   'dependencies/.cache/google_benchmarks/src/commandlineflags.cc',
#   'dependencies/.cache/google_benchmarks/src/complexity.cc',
#   'dependencies/.cache/google_benchmarks/src/console_reporter.cc',
#   'dependencies/.cache/google_benchmarks/src/counter.cc',
#   'dependencies/.cache/google_benchmarks/src/csv_reporter.cc',
#   'dependencies/.cache/google_benchmarks/src/json_reporter.cc',
#   'dependencies/.cache/google_benchmarks/src/reporter.cc',
#   'dependencies/.cache/google_benchmarks/src/sleep.cc',
#   'dependencies/.cache/google_benchmarks/src/statistics.cc',
#   'dependencies/.cache/google_benchmarks/src/string_util.cc',
#   'dependencies/.cache/google_benchmarks/src/sysinfo.cc',
#   'dependencies/.cache/google_benchmarks/src/timers.cc',
#   'dependencies/.cache/google_benchmarks/include/benchmark/benchmark.h',
#   'dependencies/.cache/google_benchmarks/src/arraysize.h',
#   'dependencies/.cache/google_benchmarks/src/benchmark_api_internal.h',
#   'dependencies/.cache/google_benchmarks/src/benchmark_register.h',
#   'dependencies/.cache/google_benchmarks/src/benchmark_runner.h',
#   'dependencies/.cache/google_benchmarks/src/check.h',
#   'dependencies/.cache/google_benchmarks/src/colorprint.h',
#   'dependencies/.cache/google_benchmarks/src/commandlineflags.h',
#   'dependencies/.cache/google_benchmarks/src/complexity.h',
#   'dependencies/.cache/google_benchmarks/src/counter.h',
#   'dependencies/.cache/google_benchmarks/src/cycleclock.h',
#   'dependencies/.cache/google_benchmarks/src/internal_macros.h',
#   'dependencies/.cache/google_benchmarks/src/log.h',
#   'dependencies/.cache/google_benchmarks/src/mutex.h',
#   'dependencies/.cache/google_benchmarks/src/re.h',
#   'dependencies/.cache/google_benchmarks/src/sleep.h',
#   'dependencies/.cache/google_benchmarks/src/statistics.h',
#   'dependencies/.cache/google_benchmarks/src/string_util.h',
#   'dependencies/.cache/google_benchmarks/src/thread_manager.h',
#   'dependencies/.cache/google_benchmarks/src/thread_timer.h',
#   'dependencies/.cache/google_benchmarks/src/timers.h'
# )
# cm_benchmark = static_library(
#   'cm_benchmark',
#   cm_benchmark_src,
#   build_by_default : false,
#   link_args : [],
#   link_with : [],
#   include_directories : cm_benchmark_inc,
#   install : false,
#   override_options : ['cpp_std=c++11', 'cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-Wshadow',
#     '-Wshorten-64-to-32',
#     '-fstrict-aliasing',
#     '-Wno-deprecated-declarations',
#     '-Wstrict-aliasing',
#     '-Wthread-safety',
#     '-O3',
#     '-DNDEBUG',
#     '-Wno-deprecated',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DHAVE_POSIX_REGEX',
#     '-DHAVE_STD_REGEX',
#     '-DHAVE_STEADY_CLOCK'
#   ],
#   c_args : [],
#   pic : false
# )
# cm_benchmark_dep = declare_dependency(
#   link_args : [],
#   link_with : cm_benchmark,
#   compile_args : [],
#   include_directories : cm_benchmark_inc
# )
# bench_dom_api_dir = include_directories(
#   'benchmark',
#   'benchmark/linux',
#   'include',
#   'dependencies/.cache/google_benchmarks/include',
#   '__CMake_build',
#   '.'
# )
# bench_dom_api_sys = include_directories(is_system : true)
# bench_dom_api_inc = [bench_dom_api_dir, bench_dom_api_sys]
# bench_dom_api_src = files('benchmark/bench_dom_api.cpp')
# bench_dom_api = executable(
#   'bench_dom_api',
#   bench_dom_api_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson, cm_benchmark],
#   include_directories : bench_dom_api_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : false
# )
# yyjson_dir = include_directories('dependencies/.cache/yyjson/src', '__CMake_build', '.')
# yyjson_sys = include_directories('dependencies/.cache/yyjson/src', is_system : true)
# yyjson_inc = [yyjson_dir, yyjson_sys]
# yyjson_src = files('dependencies/.cache/yyjson/src/yyjson.c')
# yyjson = static_library(
#   'yyjson',
#   yyjson_src,
#   build_by_default : false,
#   link_args : [],
#   link_with : [],
#   include_directories : yyjson_inc,
#   install : false,
#   override_options : [],
#   objects : [],
#   c_args : ['-O3', '-DNDEBUG', '-isysroot', '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk'],
#   pic : false
# )
# yyjson_dep = declare_dependency(
#   link_args : [],
#   link_with : yyjson,
#   compile_args : ['-DSIMDJSON_COMPETITION_YYJSON'],
#   include_directories : yyjson_inc
# )
# bench_ondemand_dir = include_directories(
#   'benchmark',
#   'benchmark/linux',
#   'include',
#   'dependencies/.cache/google_benchmarks/include',
#   '__CMake_build',
#   '.'
# )
# bench_ondemand_sys = include_directories('dependencies/.cache/yyjson/src', 'dependencies/.cache/rapidjson/include', 'dependencies/.cache/sajson/include', 'dependencies/.cache/json', is_system : true)
# bench_ondemand_inc = [bench_ondemand_dir, bench_ondemand_sys]
# bench_ondemand_src = files('benchmark/bench_ondemand.cpp')
# bench_ondemand = executable(
#   'bench_ondemand',
#   bench_ondemand_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson, cm_benchmark, yyjson],
#   include_directories : bench_ondemand_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DRAPIDJSON_HAS_STDSTRING',
#     '-DSAJSON_UNSORTED_OBJECT_KEYS',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_COMPETITION_NLOHMANN_JSON',
#     '-DSIMDJSON_COMPETITION_RAPIDJSON',
#     '-DSIMDJSON_COMPETITION_SAJSON',
#     '-DSIMDJSON_COMPETITION_YYJSON',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : false
# )
# bench_parse_call_dir = include_directories(
#   'benchmark',
#   'benchmark/linux',
#   'include',
#   'dependencies/.cache/google_benchmarks/include',
#   '__CMake_build',
#   '.'
# )
# bench_parse_call_sys = include_directories(is_system : true)
# bench_parse_call_inc = [bench_parse_call_dir, bench_parse_call_sys]
# bench_parse_call_src = files('benchmark/bench_parse_call.cpp')
# bench_parse_call = executable(
#   'bench_parse_call',
#   bench_parse_call_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson, cm_benchmark],
#   include_directories : bench_parse_call_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : false
# )
# benchfeatures_dir = include_directories('benchmark', 'benchmark/linux', 'include', '__CMake_build', '.')
# benchfeatures_sys = include_directories(is_system : true)
# benchfeatures_inc = [benchfeatures_dir, benchfeatures_sys]
# benchfeatures_src = files('benchmark/benchfeatures.cpp')
# benchfeatures = executable(
#   'benchfeatures',
#   benchfeatures_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : benchfeatures_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : false
# )
# boostjson_dir = include_directories('dependencies/.cache/boostjson/include', '__CMake_build', '.')
# boostjson_sys = include_directories('dependencies/.cache/boostjson/include', is_system : true)
# boostjson_inc = [boostjson_dir, boostjson_sys]
# boostjson_src = files('dependencies/.cache/boostjson/src/src.cpp')
# boostjson = static_library(
#   'boostjson',
#   boostjson_src,
#   build_by_default : false,
#   link_args : [],
#   link_with : [],
#   include_directories : boostjson_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : ['-O3', '-DNDEBUG', '-isysroot', '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk', '-DBOOST_JSON_STANDALONE'],
#   pic : false
# )
# boostjson_dep = declare_dependency(
#   link_args : [],
#   link_with : boostjson,
#   compile_args : ['-DBOOST_JSON_STANDALONE', '-DSIMDJSON_COMPETITION_BOOSTJSON', '-DHAS_BOOST_JSON'],
#   include_directories : boostjson_inc
# )
# cjson_dir = include_directories('dependencies/.cache/cjson', '__CMake_build', '.')
# cjson_sys = include_directories('dependencies/.cache/cjson', is_system : true)
# cjson_inc = [cjson_dir, cjson_sys]
# cjson_src = files('dependencies/.cache/cjson/cJSON.c')
# cjson = static_library(
#   'cjson',
#   cjson_src,
#   build_by_default : false,
#   link_args : [],
#   link_with : [],
#   include_directories : cjson_inc,
#   install : false,
#   override_options : [],
#   objects : [],
#   c_args : ['-O3', '-DNDEBUG', '-isysroot', '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk'],
#   pic : false
# )
# cjson_dep = declare_dependency(
#   link_args : [],
#   link_with : cjson,
#   compile_args : ['-DSIMDJSON_COMPETITION_CJSON'],
#   include_directories : cjson_inc
# )
# dangling_parser_load_should_compile_dir = include_directories('include', '__CMake_build', '.')
# dangling_parser_load_should_compile_sys = include_directories(is_system : true)
# dangling_parser_load_should_compile_inc = [dangling_parser_load_should_compile_dir, dangling_parser_load_should_compile_sys]
# dangling_parser_load_should_compile_src = files('tests/compilation_failure_tests/dangling_parser_load.cpp')
# dangling_parser_load_should_compile = executable(
#   'dangling_parser_load_should_compile',
#   dangling_parser_load_should_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : dangling_parser_load_should_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# dangling_parser_load_should_not_compile_dir = include_directories('include', '__CMake_build', '.')
# dangling_parser_load_should_not_compile_sys = include_directories(is_system : true)
# dangling_parser_load_should_not_compile_inc = [dangling_parser_load_should_not_compile_dir, dangling_parser_load_should_not_compile_sys]
# dangling_parser_load_should_not_compile_src = files('tests/compilation_failure_tests/dangling_parser_load.cpp')
# dangling_parser_load_should_not_compile = executable(
#   'dangling_parser_load_should_not_compile',
#   dangling_parser_load_should_not_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : dangling_parser_load_should_not_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DCOMPILATION_TEST_USE_FAILING_CODE=1',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# dangling_parser_parse_padstring_should_compile_dir = include_directories('include', '__CMake_build', '.')
# dangling_parser_parse_padstring_should_compile_sys = include_directories(is_system : true)
# dangling_parser_parse_padstring_should_compile_inc = [dangling_parser_parse_padstring_should_compile_dir, dangling_parser_parse_padstring_should_compile_sys]
# dangling_parser_parse_padstring_should_compile_src = files('tests/compilation_failure_tests/dangling_parser_parse_padstring.cpp')
# dangling_parser_parse_padstring_should_compile = executable(
#   'dangling_parser_parse_padstring_should_compile',
#   dangling_parser_parse_padstring_should_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : dangling_parser_parse_padstring_should_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# dangling_parser_parse_padstring_should_not_compile_dir = include_directories('include', '__CMake_build', '.')
# dangling_parser_parse_padstring_should_not_compile_sys = include_directories(is_system : true)
# dangling_parser_parse_padstring_should_not_compile_inc = [dangling_parser_parse_padstring_should_not_compile_dir, dangling_parser_parse_padstring_should_not_compile_sys]
# dangling_parser_parse_padstring_should_not_compile_src = files('tests/compilation_failure_tests/dangling_parser_parse_padstring.cpp')
# dangling_parser_parse_padstring_should_not_compile = executable(
#   'dangling_parser_parse_padstring_should_not_compile',
#   dangling_parser_parse_padstring_should_not_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : dangling_parser_parse_padstring_should_not_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DCOMPILATION_TEST_USE_FAILING_CODE=1',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# dangling_parser_parse_stdstring_should_compile_dir = include_directories('include', '__CMake_build', '.')
# dangling_parser_parse_stdstring_should_compile_sys = include_directories(is_system : true)
# dangling_parser_parse_stdstring_should_compile_inc = [dangling_parser_parse_stdstring_should_compile_dir, dangling_parser_parse_stdstring_should_compile_sys]
# dangling_parser_parse_stdstring_should_compile_src = files('tests/compilation_failure_tests/dangling_parser_parse_stdstring.cpp')
# dangling_parser_parse_stdstring_should_compile = executable(
#   'dangling_parser_parse_stdstring_should_compile',
#   dangling_parser_parse_stdstring_should_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : dangling_parser_parse_stdstring_should_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# dangling_parser_parse_stdstring_should_not_compile_dir = include_directories('include', '__CMake_build', '.')
# dangling_parser_parse_stdstring_should_not_compile_sys = include_directories(is_system : true)
# dangling_parser_parse_stdstring_should_not_compile_inc = [dangling_parser_parse_stdstring_should_not_compile_dir, dangling_parser_parse_stdstring_should_not_compile_sys]
# dangling_parser_parse_stdstring_should_not_compile_src = files('tests/compilation_failure_tests/dangling_parser_parse_stdstring.cpp')
# dangling_parser_parse_stdstring_should_not_compile = executable(
#   'dangling_parser_parse_stdstring_should_not_compile',
#   dangling_parser_parse_stdstring_should_not_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : dangling_parser_parse_stdstring_should_not_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DCOMPILATION_TEST_USE_FAILING_CODE=1',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# dangling_parser_parse_uchar_should_compile_dir = include_directories('include', '__CMake_build', '.')
# dangling_parser_parse_uchar_should_compile_sys = include_directories(is_system : true)
# dangling_parser_parse_uchar_should_compile_inc = [dangling_parser_parse_uchar_should_compile_dir, dangling_parser_parse_uchar_should_compile_sys]
# dangling_parser_parse_uchar_should_compile_src = files('tests/compilation_failure_tests/dangling_parser_parse_uchar.cpp')
# dangling_parser_parse_uchar_should_compile = executable(
#   'dangling_parser_parse_uchar_should_compile',
#   dangling_parser_parse_uchar_should_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : dangling_parser_parse_uchar_should_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# dangling_parser_parse_uchar_should_not_compile_dir = include_directories('include', '__CMake_build', '.')
# dangling_parser_parse_uchar_should_not_compile_sys = include_directories(is_system : true)
# dangling_parser_parse_uchar_should_not_compile_inc = [dangling_parser_parse_uchar_should_not_compile_dir, dangling_parser_parse_uchar_should_not_compile_sys]
# dangling_parser_parse_uchar_should_not_compile_src = files('tests/compilation_failure_tests/dangling_parser_parse_uchar.cpp')
# dangling_parser_parse_uchar_should_not_compile = executable(
#   'dangling_parser_parse_uchar_should_not_compile',
#   dangling_parser_parse_uchar_should_not_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : dangling_parser_parse_uchar_should_not_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DCOMPILATION_TEST_USE_FAILING_CODE=1',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# dangling_parser_parse_uint8_should_compile_dir = include_directories('include', '__CMake_build', '.')
# dangling_parser_parse_uint8_should_compile_sys = include_directories(is_system : true)
# dangling_parser_parse_uint8_should_compile_inc = [dangling_parser_parse_uint8_should_compile_dir, dangling_parser_parse_uint8_should_compile_sys]
# dangling_parser_parse_uint8_should_compile_src = files('tests/compilation_failure_tests/dangling_parser_parse_uint8.cpp')
# dangling_parser_parse_uint8_should_compile = executable(
#   'dangling_parser_parse_uint8_should_compile',
#   dangling_parser_parse_uint8_should_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : dangling_parser_parse_uint8_should_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# dangling_parser_parse_uint8_should_not_compile_dir = include_directories('include', '__CMake_build', '.')
# dangling_parser_parse_uint8_should_not_compile_sys = include_directories(is_system : true)
# dangling_parser_parse_uint8_should_not_compile_inc = [dangling_parser_parse_uint8_should_not_compile_dir, dangling_parser_parse_uint8_should_not_compile_sys]
# dangling_parser_parse_uint8_should_not_compile_src = files('tests/compilation_failure_tests/dangling_parser_parse_uint8.cpp')
# dangling_parser_parse_uint8_should_not_compile = executable(
#   'dangling_parser_parse_uint8_should_not_compile',
#   dangling_parser_parse_uint8_should_not_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : dangling_parser_parse_uint8_should_not_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DCOMPILATION_TEST_USE_FAILING_CODE=1',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# example_compiletest_should_compile_dir = include_directories('include', '__CMake_build', '.')
# example_compiletest_should_compile_sys = include_directories(is_system : true)
# example_compiletest_should_compile_inc = [example_compiletest_should_compile_dir, example_compiletest_should_compile_sys]
# example_compiletest_should_compile_src = files('tests/compilation_failure_tests/example_compiletest.cpp')
# example_compiletest_should_compile = executable(
#   'example_compiletest_should_compile',
#   example_compiletest_should_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : example_compiletest_should_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# example_compiletest_should_not_compile_dir = include_directories('include', '__CMake_build', '.')
# example_compiletest_should_not_compile_sys = include_directories(is_system : true)
# example_compiletest_should_not_compile_inc = [example_compiletest_should_not_compile_dir, example_compiletest_should_not_compile_sys]
# example_compiletest_should_not_compile_src = files('tests/compilation_failure_tests/example_compiletest.cpp')
# example_compiletest_should_not_compile = executable(
#   'example_compiletest_should_not_compile',
#   example_compiletest_should_not_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : example_compiletest_should_not_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DCOMPILATION_TEST_USE_FAILING_CODE=1',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# fastjson_dir = include_directories('dependencies/.cache/fastjson/include', '__CMake_build', '.')
# fastjson_sys = include_directories('dependencies/.cache/fastjson/include', is_system : true)
# fastjson_inc = [fastjson_dir, fastjson_sys]
# fastjson_src = files('dependencies/.cache/fastjson/src/fastjson.cpp', 'dependencies/.cache/fastjson/src/fastjson2.cpp', 'dependencies/.cache/fastjson/src/fastjson_dom.cpp')
# fastjson = static_library(
#   'fastjson',
#   fastjson_src,
#   build_by_default : false,
#   link_args : [],
#   link_with : [],
#   include_directories : fastjson_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : ['-O3', '-DNDEBUG', '-isysroot', '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk'],
#   pic : false
# )
# fastjson_dep = declare_dependency(
#   link_args : [],
#   link_with : fastjson,
#   compile_args : ['-DSIMDJSON_COMPETITION_FASTJSON'],
#   include_directories : fastjson_inc
# )
# gason_dir = include_directories('dependencies/.cache/gason/src', '__CMake_build', '.')
# gason_sys = include_directories('dependencies/.cache/gason/src', is_system : true)
# gason_inc = [gason_dir, gason_sys]
# gason_src = files('dependencies/.cache/gason/src/gason.cpp')
# gason = static_library(
#   'gason',
#   gason_src,
#   build_by_default : false,
#   link_args : [],
#   link_with : [],
#   include_directories : gason_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : ['-O3', '-DNDEBUG', '-isysroot', '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk'],
#   pic : false
# )
# gason_dep = declare_dependency(
#   link_args : [],
#   link_with : gason,
#   compile_args : ['-DSIMDJSON_COMPETITION_GASON'],
#   include_directories : gason_inc
# )
# get_corpus_benchmark_dir = include_directories('benchmark', 'benchmark/linux', 'include', '__CMake_build', '.')
# get_corpus_benchmark_sys = include_directories(is_system : true)
# get_corpus_benchmark_inc = [get_corpus_benchmark_dir, get_corpus_benchmark_sys]
# get_corpus_benchmark_src = files('benchmark/get_corpus_benchmark.cpp')
# get_corpus_benchmark = executable(
#   'get_corpus_benchmark',
#   get_corpus_benchmark_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : get_corpus_benchmark_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : false
# )
# iterate_char_star_should_compile_dir = include_directories('tests', 'include', '__CMake_build', '.')
# iterate_char_star_should_compile_sys = include_directories(is_system : true)
# iterate_char_star_should_compile_inc = [iterate_char_star_should_compile_dir, iterate_char_star_should_compile_sys]
# iterate_char_star_should_compile_src = files('tests/ondemand/compilation_failure_tests/iterate_char_star.cpp')
# iterate_char_star_should_compile = executable(
#   'iterate_char_star_should_compile',
#   iterate_char_star_should_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : iterate_char_star_should_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# iterate_char_star_should_not_compile_dir = include_directories('tests', 'include', '__CMake_build', '.')
# iterate_char_star_should_not_compile_sys = include_directories(is_system : true)
# iterate_char_star_should_not_compile_inc = [iterate_char_star_should_not_compile_dir, iterate_char_star_should_not_compile_sys]
# iterate_char_star_should_not_compile_src = files('tests/ondemand/compilation_failure_tests/iterate_char_star.cpp')
# iterate_char_star_should_not_compile = executable(
#   'iterate_char_star_should_not_compile',
#   iterate_char_star_should_not_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : iterate_char_star_should_not_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DCOMPILATION_TEST_USE_FAILING_CODE=1',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# iterate_string_view_should_compile_dir = include_directories('tests', 'include', '__CMake_build', '.')
# iterate_string_view_should_compile_sys = include_directories(is_system : true)
# iterate_string_view_should_compile_inc = [iterate_string_view_should_compile_dir, iterate_string_view_should_compile_sys]
# iterate_string_view_should_compile_src = files('tests/ondemand/compilation_failure_tests/iterate_string_view.cpp')
# iterate_string_view_should_compile = executable(
#   'iterate_string_view_should_compile',
#   iterate_string_view_should_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : iterate_string_view_should_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# iterate_string_view_should_not_compile_dir = include_directories('tests', 'include', '__CMake_build', '.')
# iterate_string_view_should_not_compile_sys = include_directories(is_system : true)
# iterate_string_view_should_not_compile_inc = [iterate_string_view_should_not_compile_dir, iterate_string_view_should_not_compile_sys]
# iterate_string_view_should_not_compile_src = files('tests/ondemand/compilation_failure_tests/iterate_string_view.cpp')
# iterate_string_view_should_not_compile = executable(
#   'iterate_string_view_should_not_compile',
#   iterate_string_view_should_not_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : iterate_string_view_should_not_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DCOMPILATION_TEST_USE_FAILING_CODE=1',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# iterate_temporary_buffer_should_compile_dir = include_directories('tests', 'include', '__CMake_build', '.')
# iterate_temporary_buffer_should_compile_sys = include_directories(is_system : true)
# iterate_temporary_buffer_should_compile_inc = [iterate_temporary_buffer_should_compile_dir, iterate_temporary_buffer_should_compile_sys]
# iterate_temporary_buffer_should_compile_src = files('tests/ondemand/compilation_failure_tests/iterate_temporary_buffer.cpp')
# iterate_temporary_buffer_should_compile = executable(
#   'iterate_temporary_buffer_should_compile',
#   iterate_temporary_buffer_should_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : iterate_temporary_buffer_should_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# iterate_temporary_buffer_should_not_compile_dir = include_directories('tests', 'include', '__CMake_build', '.')
# iterate_temporary_buffer_should_not_compile_sys = include_directories(is_system : true)
# iterate_temporary_buffer_should_not_compile_inc = [iterate_temporary_buffer_should_not_compile_dir, iterate_temporary_buffer_should_not_compile_sys]
# iterate_temporary_buffer_should_not_compile_src = files('tests/ondemand/compilation_failure_tests/iterate_temporary_buffer.cpp')
# iterate_temporary_buffer_should_not_compile = executable(
#   'iterate_temporary_buffer_should_not_compile',
#   iterate_temporary_buffer_should_not_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : iterate_temporary_buffer_should_not_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DCOMPILATION_TEST_USE_FAILING_CODE=1',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# jsmn_dir = include_directories('dependencies/.cache/jsmn', '__CMake_build', '.')
# jsmn_sys = include_directories('dependencies/.cache/jsmn', is_system : true)
# jsmn_inc = [jsmn_dir, jsmn_sys]
# jsmn_src = files('dependencies/.cache/jsmn/jsmn.c')
# jsmn = static_library(
#   'jsmn',
#   jsmn_src,
#   build_by_default : false,
#   link_args : [],
#   link_with : [],
#   include_directories : jsmn_inc,
#   install : false,
#   override_options : [],
#   objects : [],
#   c_args : ['-O3', '-DNDEBUG', '-isysroot', '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk'],
#   pic : false
# )
# jsmn_dep = declare_dependency(
#   link_args : [],
#   link_with : jsmn,
#   compile_args : ['-DSIMDJSON_COMPETITION_JSMN'],
#   include_directories : jsmn_inc
# )
# json11_dir = include_directories('dependencies/.cache/json11', '__CMake_build', '.')
# json11_sys = include_directories('dependencies/.cache/json11', is_system : true)
# json11_inc = [json11_dir, json11_sys]
# json11_src = files('dependencies/.cache/json11/json11.cpp')
# json11 = static_library(
#   'json11',
#   json11_src,
#   build_by_default : false,
#   link_args : [],
#   link_with : [],
#   include_directories : json11_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : ['-O3', '-DNDEBUG', '-isysroot', '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk'],
#   pic : false
# )
# json11_dep = declare_dependency(
#   link_args : [],
#   link_with : json11,
#   compile_args : ['-DSIMDJSON_COMPETITION_JSON11'],
#   include_directories : json11_inc
# )
# json2json_dir = include_directories('include', 'dependencies/.cache/cxxopts/include', '__CMake_build', '.')
# json2json_sys = include_directories(is_system : true)
# json2json_inc = [json2json_dir, json2json_sys]
# json2json_src = files('tools/json2json.cpp')
# json2json = executable(
#   'json2json',
#   json2json_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : json2json_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# jsoncpp_dir = include_directories('dependencies/jsoncppdist', '__CMake_build', '.')
# jsoncpp_sys = include_directories('dependencies/jsoncppdist', is_system : true)
# jsoncpp_inc = [jsoncpp_dir, jsoncpp_sys]
# jsoncpp_src = files('dependencies/jsoncppdist/jsoncpp.cpp')
# jsoncpp = static_library(
#   'jsoncpp',
#   jsoncpp_src,
#   build_by_default : false,
#   link_args : [],
#   link_with : [],
#   include_directories : jsoncpp_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : ['-O3', '-DNDEBUG', '-isysroot', '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk'],
#   pic : false
# )
# jsoncpp_dep = declare_dependency(
#   link_args : [],
#   link_with : jsoncpp,
#   compile_args : ['-DSIMDJSON_COMPETITION_JSONCPP'],
#   include_directories : jsoncpp_inc
# )
# jsonpointer_dir = include_directories('include', 'dependencies/.cache/cxxopts/include', '__CMake_build', '.')
# jsonpointer_sys = include_directories(is_system : true)
# jsonpointer_inc = [jsonpointer_dir, jsonpointer_sys]
# jsonpointer_src = files('tools/jsonpointer.cpp')
# jsonpointer = executable(
#   'jsonpointer',
#   jsonpointer_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : jsonpointer_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# jsonstats_dir = include_directories('include', 'dependencies/.cache/cxxopts/include', '__CMake_build', '.')
# jsonstats_sys = include_directories(is_system : true)
# jsonstats_inc = [jsonstats_dir, jsonstats_sys]
# jsonstats_src = files('tools/jsonstats.cpp')
# jsonstats = executable(
#   'jsonstats',
#   jsonstats_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : jsonstats_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# minify_dir = include_directories('include', 'dependencies/.cache/cxxopts/include', '__CMake_build', '.')
# minify_sys = include_directories(is_system : true)
# minify_inc = [minify_dir, minify_sys]
# minify_src = files('tools/minify.cpp')
# minify = executable(
#   'minify',
#   minify_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : minify_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# parse_dir = include_directories('benchmark', 'benchmark/linux', 'include', '__CMake_build', '.')
# parse_sys = include_directories(is_system : true)
# parse_inc = [parse_dir, parse_sys]
# parse_src = files('benchmark/parse.cpp')
# parse = executable(
#   'parse',
#   parse_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : parse_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : false
# )
# parse_nonumberparsing_dir = include_directories('benchmark', 'benchmark/linux', 'include', '__CMake_build', '.')
# parse_nonumberparsing_sys = include_directories(is_system : true)
# parse_nonumberparsing_inc = [parse_nonumberparsing_dir, parse_nonumberparsing_sys]
# parse_nonumberparsing_src = files('benchmark/parse.cpp')
# parse_nonumberparsing = executable(
#   'parse_nonumberparsing',
#   parse_nonumberparsing_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : parse_nonumberparsing_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_SKIPNUMBERPARSING',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : false
# )
# parse_nostringparsing_dir = include_directories('benchmark', 'benchmark/linux', 'include', '__CMake_build', '.')
# parse_nostringparsing_sys = include_directories(is_system : true)
# parse_nostringparsing_inc = [parse_nostringparsing_dir, parse_nostringparsing_sys]
# parse_nostringparsing_src = files('benchmark/parse.cpp')
# parse_nostringparsing = executable(
#   'parse_nostringparsing',
#   parse_nostringparsing_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : parse_nostringparsing_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_SKIPSTRINGPARSING',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : false
# )
# parse_noutf8validation_dir = include_directories('benchmark', 'benchmark/linux', 'include', '__CMake_build', '.')
# parse_noutf8validation_sys = include_directories(is_system : true)
# parse_noutf8validation_inc = [parse_noutf8validation_dir, parse_noutf8validation_sys]
# parse_noutf8validation_src = files('benchmark/parse.cpp')
# parse_noutf8validation = executable(
#   'parse_noutf8validation',
#   parse_noutf8validation_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : parse_noutf8validation_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_SKIPUTF8VALIDATION',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : false
# )
# parse_stream_dir = include_directories('benchmark', 'benchmark/linux', 'include', '__CMake_build', '.')
# parse_stream_sys = include_directories(is_system : true)
# parse_stream_inc = [parse_stream_dir, parse_stream_sys]
# parse_stream_src = files('benchmark/parse_stream.cpp')
# parse_stream = executable(
#   'parse_stream',
#   parse_stream_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : parse_stream_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : false
# )
# perfdiff_dir = include_directories('benchmark', 'benchmark/linux', 'include', '__CMake_build', '.')
# perfdiff_sys = include_directories(is_system : true)
# perfdiff_inc = [perfdiff_dir, perfdiff_sys]
# perfdiff_src = files('benchmark/perfdiff.cpp')
# perfdiff = executable(
#   'perfdiff',
#   perfdiff_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : perfdiff_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : false
# )
# readme_examples_dir = include_directories('include', '__CMake_build', '.')
# readme_examples_sys = include_directories(is_system : true)
# readme_examples_inc = [readme_examples_dir, readme_examples_sys]
# readme_examples_src = files('tests/readme_examples.cpp')
# readme_examples = executable(
#   'readme_examples',
#   readme_examples_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : readme_examples_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# readme_examples11_dir = include_directories('include', '__CMake_build', '.')
# readme_examples11_sys = include_directories(is_system : true)
# readme_examples11_inc = [readme_examples11_dir, readme_examples11_sys]
# readme_examples11_src = files('tests/readme_examples.cpp')
# readme_examples11 = executable(
#   'readme_examples11',
#   readme_examples11_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : readme_examples11_inc,
#   install : false,
#   override_options : ['cpp_std=c++11'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# readme_examples_noexceptions_dir = include_directories('include', '__CMake_build', '.')
# readme_examples_noexceptions_sys = include_directories(is_system : true)
# readme_examples_noexceptions_inc = [readme_examples_noexceptions_dir, readme_examples_noexceptions_sys]
# readme_examples_noexceptions_src = files('tests/readme_examples_noexceptions.cpp')
# readme_examples_noexceptions = executable(
#   'readme_examples_noexceptions',
#   readme_examples_noexceptions_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : readme_examples_noexceptions_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# readme_examples_noexceptions11_dir = include_directories('include', '__CMake_build', '.')
# readme_examples_noexceptions11_sys = include_directories(is_system : true)
# readme_examples_noexceptions11_inc = [readme_examples_noexceptions11_dir, readme_examples_noexceptions11_sys]
# readme_examples_noexceptions11_src = files('tests/readme_examples_noexceptions.cpp')
# readme_examples_noexceptions11 = executable(
#   'readme_examples_noexceptions11',
#   readme_examples_noexceptions11_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : readme_examples_noexceptions11_inc,
#   install : false,
#   override_options : ['cpp_std=c++11'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# readme_examples_will_fail_with_exceptions_off_dir = include_directories('include', '__CMake_build', '.')
# readme_examples_will_fail_with_exceptions_off_sys = include_directories(is_system : true)
# readme_examples_will_fail_with_exceptions_off_inc = [readme_examples_will_fail_with_exceptions_off_dir, readme_examples_will_fail_with_exceptions_off_sys]
# readme_examples_will_fail_with_exceptions_off_src = files('tests/readme_examples.cpp')
# readme_examples_will_fail_with_exceptions_off = executable(
#   'readme_examples_will_fail_with_exceptions_off',
#   readme_examples_will_fail_with_exceptions_off_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : readme_examples_will_fail_with_exceptions_off_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_EXCEPTIONS=0',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# simdjson_singleheader_dir = include_directories('__CMake_build/singleheader', '__CMake_build', '.')
# simdjson_singleheader_sys = include_directories(is_system : true)
# simdjson_singleheader_inc = [simdjson_singleheader_dir, simdjson_singleheader_sys]
# simdjson_singleheader_src = files()
# simdjson_singleheader = static_library(
#   'simdjson_singleheader',
#   simdjson_singleheader_src,
#   custom_tgt_2[0],
#   custom_tgt_2[1],
#   build_by_default : false,
#   link_args : [],
#   link_with : [],
#   include_directories : simdjson_singleheader_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   c_args : [],
#   pic : true
# )
# simdjson_singleheader_dep = declare_dependency(
#   link_args : [],
#   link_with : simdjson_singleheader,
#   compile_args : [
#     '-fPIC',
#     '-Werror',
#     '-Wall',
#     '-Wextra',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   include_directories : simdjson_singleheader_inc
# )
# statisticalmodel_dir = include_directories('benchmark', 'benchmark/linux', 'include', '__CMake_build', '.')
# statisticalmodel_sys = include_directories(is_system : true)
# statisticalmodel_inc = [statisticalmodel_dir, statisticalmodel_sys]
# statisticalmodel_src = files('benchmark/statisticalmodel.cpp')
# statisticalmodel = executable(
#   'statisticalmodel',
#   statisticalmodel_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : statisticalmodel_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : false
# )
# ujson4c_dir = include_directories('dependencies/.cache/ujson4c/src', 'dependencies/.cache/ujson4c/3rdparty', '__CMake_build', '.')
# ujson4c_sys = include_directories('dependencies/.cache/ujson4c/src', 'dependencies/.cache/ujson4c/3rdparty', is_system : true)
# ujson4c_inc = [ujson4c_dir, ujson4c_sys]
# ujson4c_src = files('dependencies/.cache/ujson4c/src/ujdecode.c', 'dependencies/.cache/ujson4c/3rdparty/ultrajsondec.c')
# ujson4c = static_library(
#   'ujson4c',
#   ujson4c_src,
#   build_by_default : false,
#   link_args : [],
#   link_with : [],
#   include_directories : ujson4c_inc,
#   install : false,
#   override_options : [],
#   objects : [],
#   c_args : ['-O3', '-DNDEBUG', '-isysroot', '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk'],
#   pic : false
# )
# ujson4c_dep = declare_dependency(
#   link_args : [],
#   link_with : ujson4c,
#   compile_args : ['-DSIMDJSON_COMPETITION_UJSON4C'],
#   include_directories : ujson4c_inc
# )
# unsafe_parse_many_should_compile_dir = include_directories('include', '__CMake_build', '.')
# unsafe_parse_many_should_compile_sys = include_directories(is_system : true)
# unsafe_parse_many_should_compile_inc = [unsafe_parse_many_should_compile_dir, unsafe_parse_many_should_compile_sys]
# unsafe_parse_many_should_compile_src = files('tests/compilation_failure_tests/unsafe_parse_many.cpp')
# unsafe_parse_many_should_compile = executable(
#   'unsafe_parse_many_should_compile',
#   unsafe_parse_many_should_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : unsafe_parse_many_should_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# unsafe_parse_many_should_not_compile_dir = include_directories('include', '__CMake_build', '.')
# unsafe_parse_many_should_not_compile_sys = include_directories(is_system : true)
# unsafe_parse_many_should_not_compile_inc = [unsafe_parse_many_should_not_compile_dir, unsafe_parse_many_should_not_compile_sys]
# unsafe_parse_many_should_not_compile_src = files('tests/compilation_failure_tests/unsafe_parse_many.cpp')
# unsafe_parse_many_should_not_compile = executable(
#   'unsafe_parse_many_should_not_compile',
#   unsafe_parse_many_should_not_compile_src,
#   build_by_default : false,
#   link_args : ['-O3', '-DNDEBUG'],
#   link_with : [simdjson],
#   include_directories : unsafe_parse_many_should_not_compile_inc,
#   install : false,
#   override_options : ['cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-O3',
#     '-DNDEBUG',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DCOMPILATION_TEST_USE_FAILING_CODE=1',
#     '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"',
#     '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"',
#     '-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   pie : true
# )
# benchmark_main_dir = include_directories('dependencies/.cache/google_benchmarks/include', 'dependencies/.cache/google_benchmarks/src', '__CMake_build', '.')
# benchmark_main_sys = include_directories(is_system : true)
# benchmark_main_inc = [benchmark_main_dir, benchmark_main_sys]
# benchmark_main_src = files('dependencies/.cache/google_benchmarks/src/benchmark_main.cc')
# benchmark_main = static_library(
#   'benchmark_main',
#   benchmark_main_src,
#   build_by_default : false,
#   link_args : [],
#   link_with : [],
#   include_directories : benchmark_main_inc,
#   install : false,
#   override_options : ['cpp_std=c++11', 'cpp_std=c++17'],
#   objects : [],
#   cpp_args : [
#     '-Wshadow',
#     '-Wshorten-64-to-32',
#     '-fstrict-aliasing',
#     '-Wno-deprecated-declarations',
#     '-Wstrict-aliasing',
#     '-Wthread-safety',
#     '-O3',
#     '-DNDEBUG',
#     '-Wno-deprecated',
#     '-isysroot',
#     '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk',
#     '-DHAVE_POSIX_REGEX',
#     '-DHAVE_STD_REGEX',
#     '-DHAVE_STEADY_CLOCK'
#   ],
#   pic : false
# )
# benchmark_main_dep = declare_dependency(
#   link_args : [],
#   link_with : benchmark_main,
#   compile_args : [],
#   include_directories : benchmark_main_inc
# )
# simdjson_flags_dir = include_directories('__CMake_build', '.')
# simdjson_flags_sys = include_directories(is_system : true)
# simdjson_flags_inc = [simdjson_flags_dir, simdjson_flags_sys]
# simdjson_flags_dep = declare_dependency(
#   link_args : [],
#   compile_args : ['-DSIMDJSON_THREADS_ENABLED=1'],
#   include_directories : simdjson_flags_inc
# )
# simdjson_internal_flags_dir = include_directories('__CMake_build', '.')
# simdjson_internal_flags_sys = include_directories(is_system : true)
# simdjson_internal_flags_inc = [simdjson_internal_flags_dir, simdjson_internal_flags_sys]
# simdjson_internal_flags_dep = declare_dependency(
#   link_args : [],
#   compile_args : [
#     '-fPIC',
#     '-Werror',
#     '-Wall',
#     '-Wextra',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   include_directories : simdjson_internal_flags_inc
# )
# jsonchecker_data_dir = include_directories('__CMake_build', '.')
# jsonchecker_data_sys = include_directories(is_system : true)
# jsonchecker_data_inc = [jsonchecker_data_dir, jsonchecker_data_sys]
# jsonchecker_data_dep = declare_dependency(
#   link_args : [],
#   compile_args : ['-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"'],
#   include_directories : jsonchecker_data_inc
# )
# jsonchecker_minefield_data_dir = include_directories('__CMake_build', '.')
# jsonchecker_minefield_data_sys = include_directories(is_system : true)
# jsonchecker_minefield_data_inc = [jsonchecker_minefield_data_dir, jsonchecker_minefield_data_sys]
# jsonchecker_minefield_data_dep = declare_dependency(
#   link_args : [],
#   compile_args : ['-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"'],
#   include_directories : jsonchecker_minefield_data_inc
# )
# jsonexamples_data_dir = include_directories('__CMake_build', '.')
# jsonexamples_data_sys = include_directories(is_system : true)
# jsonexamples_data_inc = [jsonexamples_data_dir, jsonexamples_data_sys]
# jsonexamples_data_dep = declare_dependency(
#   link_args : [],
#   compile_args : ['-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"'],
#   include_directories : jsonexamples_data_inc
# )
# test_data_dir = include_directories('__CMake_build', '.')
# test_data_sys = include_directories(is_system : true)
# test_data_inc = [test_data_dir, test_data_sys]
# test_data_dep = declare_dependency(
#   link_args : [],
#   compile_args : ['-DSIMDJSON_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/"', '-DSIMDJSON_MINEFIELD_TEST_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/subprojects/simdjson-0.9.7/jsonchecker/minefield/"', '-DSIMDJSON_BENCHMARK_DATA_DIR="/Users/eu/GH/experiments/build-with-meson/build/subprojects/simdjson-0.9.7/__CMake_build/jsonexamples/"'],
#   include_directories : test_data_inc
# )
# simdjson_headers_dir = include_directories('include', '__CMake_build', '.')
# simdjson_headers_sys = include_directories(is_system : true)
# simdjson_headers_inc = [simdjson_headers_dir, simdjson_headers_sys]
# simdjson_headers_dep = declare_dependency(
#   link_args : [],
#   compile_args : [],
#   include_directories : simdjson_headers_inc
# )
# simdjson_include_source_dir = include_directories('src', 'include', '__CMake_build', '.')
# simdjson_include_source_sys = include_directories(is_system : true)
# simdjson_include_source_inc = [simdjson_include_source_dir, simdjson_include_source_sys]
# simdjson_include_source_dep = declare_dependency(
#   link_args : [],
#   compile_args : [],
#   include_directories : simdjson_include_source_inc
# )
# simdjson_source_dir = include_directories('src', 'include', '__CMake_build', '.')
# simdjson_source_sys = include_directories(is_system : true)
# simdjson_source_inc = [simdjson_source_dir, simdjson_source_sys]
# simdjson_source_dep = declare_dependency(
#   link_args : [],
#   compile_args : [],
#   include_directories : simdjson_source_inc
# )
# simdjson_windows_headers_dir = include_directories('__CMake_build', '.')
# simdjson_windows_headers_sys = include_directories(is_system : true)
# simdjson_windows_headers_inc = [simdjson_windows_headers_dir, simdjson_windows_headers_sys]
# simdjson_windows_headers_dep = declare_dependency(
#   link_args : [],
#   compile_args : [],
#   include_directories : simdjson_windows_headers_inc
# )
# nlohmann_json_dir = include_directories('dependencies/.cache/json', '__CMake_build', '.')
# nlohmann_json_sys = include_directories(is_system : true)
# nlohmann_json_inc = [nlohmann_json_dir, nlohmann_json_sys]
# nlohmann_json_dep = declare_dependency(
#   link_args : [],
#   compile_args : ['-DSIMDJSON_COMPETITION_NLOHMANN_JSON'],
#   include_directories : nlohmann_json_inc
# )
# rapidjson_dir = include_directories('dependencies/.cache/rapidjson/include', '__CMake_build', '.')
# rapidjson_sys = include_directories(is_system : true)
# rapidjson_inc = [rapidjson_dir, rapidjson_sys]
# rapidjson_dep = declare_dependency(
#   link_args : [],
#   compile_args : ['-DRAPIDJSON_HAS_STDSTRING', '-DSIMDJSON_COMPETITION_RAPIDJSON'],
#   include_directories : rapidjson_inc
# )
# sajson_dir = include_directories('dependencies/.cache/sajson/include', '__CMake_build', '.')
# sajson_sys = include_directories(is_system : true)
# sajson_inc = [sajson_dir, sajson_sys]
# sajson_dep = declare_dependency(
#   link_args : [],
#   compile_args : ['-DSAJSON_UNSORTED_OBJECT_KEYS', '-DSIMDJSON_COMPETITION_SAJSON'],
#   include_directories : sajson_inc
# )
# competition_core_dir = include_directories(
#   'dependencies/.cache/json',
#   'dependencies/.cache/rapidjson/include',
#   'dependencies/.cache/sajson/include',
#   'dependencies/.cache/cjson',
#   'dependencies/.cache/jsmn',
#   'dependencies/.cache/yyjson/src',
#   'dependencies/.cache/boostjson/include',
#   '__CMake_build',
#   '.'
# )
# competition_core_sys = include_directories(is_system : true)
# competition_core_inc = [competition_core_dir, competition_core_sys]
# competition_core_dep = declare_dependency(
#   link_args : [],
#   compile_args : [
#     '-DSIMDJSON_COMPETITION_NLOHMANN_JSON',
#     '-DRAPIDJSON_HAS_STDSTRING',
#     '-DSIMDJSON_COMPETITION_RAPIDJSON',
#     '-DSAJSON_UNSORTED_OBJECT_KEYS',
#     '-DSIMDJSON_COMPETITION_SAJSON',
#     '-DSIMDJSON_COMPETITION_CJSON',
#     '-DSIMDJSON_COMPETITION_JSMN',
#     '-DSIMDJSON_COMPETITION_YYJSON',
#     '-DBOOST_JSON_STANDALONE',
#     '-DSIMDJSON_COMPETITION_BOOSTJSON',
#     '-DHAS_BOOST_JSON'
#   ],
#   include_directories : competition_core_inc
# )
# competition_all_dir = include_directories(
#   'dependencies/jsoncppdist',
#   'dependencies/.cache/json11',
#   'dependencies/.cache/fastjson/include',
#   'dependencies/.cache/gason/src',
#   'dependencies/.cache/ujson4c/src',
#   'dependencies/.cache/ujson4c/3rdparty',
#   'dependencies/.cache/json',
#   'dependencies/.cache/rapidjson/include',
#   'dependencies/.cache/sajson/include',
#   'dependencies/.cache/cjson',
#   'dependencies/.cache/jsmn',
#   'dependencies/.cache/yyjson/src',
#   'dependencies/.cache/boostjson/include',
#   '__CMake_build',
#   '.'
# )
# competition_all_sys = include_directories(is_system : true)
# competition_all_inc = [competition_all_dir, competition_all_sys]
# competition_all_dep = declare_dependency(
#   link_args : [],
#   compile_args : [
#     '-DSIMDJSON_COMPETITION_JSONCPP',
#     '-DSIMDJSON_COMPETITION_JSON11',
#     '-DSIMDJSON_COMPETITION_FASTJSON',
#     '-DSIMDJSON_COMPETITION_GASON',
#     '-DSIMDJSON_COMPETITION_UJSON4C',
#     '-DSIMDJSON_COMPETITION_NLOHMANN_JSON',
#     '-DRAPIDJSON_HAS_STDSTRING',
#     '-DSIMDJSON_COMPETITION_RAPIDJSON',
#     '-DSAJSON_UNSORTED_OBJECT_KEYS',
#     '-DSIMDJSON_COMPETITION_SAJSON',
#     '-DSIMDJSON_COMPETITION_CJSON',
#     '-DSIMDJSON_COMPETITION_JSMN',
#     '-DSIMDJSON_COMPETITION_YYJSON',
#     '-DBOOST_JSON_STANDALONE',
#     '-DSIMDJSON_COMPETITION_BOOSTJSON',
#     '-DHAS_BOOST_JSON'
#   ],
#   include_directories : competition_all_inc
# )
# cxxopts_dir = include_directories('dependencies/.cache/cxxopts/include', '__CMake_build', '.')
# cxxopts_sys = include_directories(is_system : true)
# cxxopts_inc = [cxxopts_dir, cxxopts_sys]
# cxxopts_dep = declare_dependency(
#   link_args : [],
#   compile_args : [],
#   include_directories : cxxopts_inc
# )
# simdjson_singleheader_include_source_dir = include_directories('__CMake_build/singleheader', '__CMake_build', '.')
# simdjson_singleheader_include_source_sys = include_directories(is_system : true)
# simdjson_singleheader_include_source_inc = [simdjson_singleheader_include_source_dir, simdjson_singleheader_include_source_sys]
# simdjson_singleheader_include_source_dep = declare_dependency(
#   link_args : [],
#   compile_args : [],
#   include_directories : simdjson_singleheader_include_source_inc
# )
# simdjson_singleheader_source_dir = include_directories('__CMake_build/singleheader', '__CMake_build', '.')
# simdjson_singleheader_source_sys = include_directories(is_system : true)
# simdjson_singleheader_source_inc = [simdjson_singleheader_source_dir, simdjson_singleheader_source_sys]
# simdjson_singleheader_source_dep = declare_dependency(
#   link_args : [],
#   compile_args : [],
#   include_directories : simdjson_singleheader_source_inc
# )
# simdjson_singleheader_include_source_direct_from_repository_dir = include_directories('singleheader', '__CMake_build', '.')
# simdjson_singleheader_include_source_direct_from_repository_sys = include_directories(is_system : true)
# simdjson_singleheader_include_source_direct_from_repository_inc = [simdjson_singleheader_include_source_direct_from_repository_dir, simdjson_singleheader_include_source_direct_from_repository_sys]
# simdjson_singleheader_include_source_direct_from_repository_dep = declare_dependency(
#   link_args : [],
#   compile_args : [],
#   include_directories : simdjson_singleheader_include_source_direct_from_repository_inc
# )
# simdjson_singleheader_source_direct_from_repository_dir = include_directories('singleheader', '__CMake_build', '.')
# simdjson_singleheader_source_direct_from_repository_sys = include_directories(is_system : true)
# simdjson_singleheader_source_direct_from_repository_inc = [simdjson_singleheader_source_direct_from_repository_dir, simdjson_singleheader_source_direct_from_repository_sys]
# simdjson_singleheader_source_direct_from_repository_dep = declare_dependency(
#   link_args : [],
#   compile_args : [],
#   include_directories : simdjson_singleheader_source_direct_from_repository_inc
# )
# simdjson_fuzzer_dir = include_directories('src', 'include', '__CMake_build', '.')
# simdjson_fuzzer_sys = include_directories(is_system : true)
# simdjson_fuzzer_inc = [simdjson_fuzzer_dir, simdjson_fuzzer_sys]
# simdjson_fuzzer_dep = declare_dependency(
#   link_args : [],
#   compile_args : [
#     '-fPIC',
#     '-Werror',
#     '-Wall',
#     '-Wextra',
#     '-Weffc++',
#     '-Wsign-compare',
#     '-Wshadow',
#     '-Wwrite-strings',
#     '-Wpointer-arith',
#     '-Winit-self',
#     '-Wconversion',
#     '-Wno-sign-conversion',
#     '-DSIMDJSON_THREADS_ENABLED=1'
#   ],
#   include_directories : simdjson_fuzzer_inc
# )
