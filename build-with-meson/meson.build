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

# ----------------------------------------------------------------------

exe = executable('bwm', 'cc/core/main.cc',
                 include_directories : [include_directories('./cc')], # v.get_variable('interface_include_directories')], # , './subprojects/xlnt-1.5.0/include'),
                 dependencies : [dependency('fmt'), dependency('xlnt'), dependency('simdjson')],
                 install : true)
