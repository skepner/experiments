# -*- Meson -*-

project('bwm', ['cpp'],
        license         : 'MIT',
        version         : '1',
        default_options : [
          'warning_level=3',
          'cpp_std=c++20',
          'buildtype=debugoptimized',
        ],
       )

if meson.get_compiler('cpp').get_id() == 'clang'
  add_project_arguments('-Weverything', '-Wno-c++98-compat', '-Wno-c++98-c++11-compat', '-Wno-c++98-compat-pedantic', language : 'cpp')
endif

# ----------------------------------------------------------------------

subproject('fmt')
subproject('xlnt')
# simdjson = import('cmake').subproject('simdjson').dependency('simdjson')
subproject('simdjson')
subproject('range-v3')
subproject('pybind11')

# std_date
# websocketpp
# asio
# apache module

# ----------------------------------------------------------------------

bwm = executable('bwm', 'cc/core/main.cc',
                 include_directories : include_directories('./cc'),
                 dependencies : [dependency('fmt'), dependency('xlnt'), dependency('simdjson'), dependency('range-v3')],
                 install : true)

test('bwm test 1', bwm)

# ----------------------------------------------------------------------
# python module
# https://github.com/mesonbuild/meson/issues/4677
# ----------------------------------------------------------------------

pyb_lib = import('python').find_installation('python3').extension_module(
  'pyb',
  sources : ['cc/core/py.cc'],
  include_directories : include_directories('./cc'),
  dependencies : [dependency('python3'), dependency('pybind11'), dependency('fmt')],
  install : true)

# test('pyb test 1', pyb_lib)

# ----------------------------------------------------------------------
