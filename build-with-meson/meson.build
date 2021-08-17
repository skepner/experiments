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
  add_global_arguments('-Weverything', '-Wno-c++98-compat', '-Wno-c++98-c++11-compat', '-Wno-c++98-compat-pedantic', language : 'cpp')
endif

# ----------------------------------------------------------------------

# fmt = subproject('fmt')
# dep_list = []
# dep_list += dependency('fmt')

subproject('fmt')

cmake = import('cmake')
cmake.subproject('xlnt')

dep_list = [
  dependency('fmt'),
  dependency('xlnt'),
]

# ----------------------------------------------------------------------

exe = executable('bwm', 'cc/core/main.cc',
                 include_directories : include_directories('./cc'),
                 dependencies : dep_list,
                 install : true)
