# -*- Meson -*-

project('bwm', ['cpp'],
        license         : 'MIT',
        version         : '1',
        default_options : [
          'warning_level=3',
          'cpp_std=c++20',
          'buildtype=release',
        ],
       )

fmt = subproject('fmt')
dep_list = []
dep_list += dependency('fmt')

exe = executable('bwm', 'cc/core/main.cc',
                 include_directories : include_directories('./cc'),
                 dependencies : dep_list,
                 install : true)
