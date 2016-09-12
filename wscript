APPNAME='cpp-build-systems'
VERSION='0.0.1'

top = '.'
out = 'build'

def options(opt):
  opt.load('compiler_cxx')
  opt.load('waf_unit_test')
  opt.load('boost', tooldir='waftools')

def configure(conf):
  conf.load('compiler_cxx')
  conf.load('waf_unit_test')
  conf.load('boost')
  conf.check_boost('date_time', mt=True, uselib_store='BOOST_DATE_TIME')
  conf.check_boost('unit_test_framework', mt=True, uselib_store='BOOST_UNIT_TEST')
  conf.env.append_value('CXXFLAGS', '-std=c++14')

def build(bld):
  bld.shlib(target = 'shared',
    source=[
      'src/shared/main/add.cpp',
      'src/shared/main/multiply.cpp'
    ])
  bld.program(target = 'test_shared',
    features=['test'],
    source=[
      'src/shared/test/test.cpp',
      'src/shared/test/add_test.cpp',
      'src/shared/test/multiply_test.cpp'
    ], use=[
      'shared',
      'BOOST_UNIT_TEST'
    ], includes=[
      'src/shared/main'
    ])

  bld.stlib(target = 'static',
    source=[
      'src/static/main/greeting.cpp'
    ])
  bld.program(target = 'test_static',
    features=['test'],
    source=[
      'src/static/test/test.cpp',
      'src/static/test/greeting_test.cpp'
    ], use=[
      'static',
      'BOOST_UNIT_TEST'
    ], includes=[
      'src/static/main'
    ])

  bld.program(target = 'executable',
    source=[
      'src/executable/main/main.cpp'
    ], use=[
      'static',
      'shared',
      'BOOST_DATE_TIME'
    ], includes=[
      'src/shared/main',
      'src/static/main'
    ])

  from waflib.Tools import waf_unit_test
  bld.add_post_fun(waf_unit_test.summary)
