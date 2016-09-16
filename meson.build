project('cpp build test', 'cpp',
  default_options : 'cpp_std=c++14')

boost_dep = dependency('boost',
  modules : ['date_time', 'test'])

stinc = include_directories('src/static/main')
shinc = include_directories('src/shared/main')

stat = static_library('static', 'src/static/main/greeting.cpp',
  dependencies : boost_dep)

stat_exe = executable('test_static',
  'src/static/test/test.cpp',
  'src/static/test/greeting_test.cpp',
  link_with : stat,
  include_directories : stinc)
test('static', stat_exe)

shar = shared_library('shared',
  'src/shared/main/add.cpp',
  'src/shared/main/multiply.cpp')
shar_exe = executable('test_shared',
  'src/shared/test/test.cpp',
  'src/shared/test/add_test.cpp',
  'src/shared/test/multiply_test.cpp',
  dependencies : boost_dep,
  include_directories : shinc,
  link_with : shar)
test('shared', shar_exe)

executable('executable',
  'src/executable/main/main.cpp',
  link_with : [stat, shar],
  dependencies : boost_dep,
  include_directories : [stinc, shinc])
