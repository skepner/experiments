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

# fmt = subproject('fmt')
# dep_list = []
# dep_list += dependency('fmt')

# cmake = import('cmake')
# xlnt_subp = cmake.subproject('xlnt')
# xlnt_dep = xlnt_subp.dependency('xlnt')
# # summary({'xlnt' : xlnt_subp.target_list()})
# summary({'xlnt' : xlnt_subp.get_variable('xlnt_test_src')})
# # cmake.subproject_options().set_override_option('cpp_std', 'c++11')

subproject('fmt')
subproject('xlnt')

# ----------------------------------------------------------------------

exe = executable('bwm', 'cc/core/main.cc',
                 include_directories : [include_directories('./cc')], # v.get_variable('interface_include_directories')], # , './subprojects/xlnt-1.5.0/include'),
                 dependencies : [dependency('fmt'), dependency('xlnt')],
                 install : true)
