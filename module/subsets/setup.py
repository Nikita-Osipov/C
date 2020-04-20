from distutils.core import setup, Extension

module1 = Extension('my_subs', sources = ['subs.c'])

setup(name = 'my_subs',
    version = '1.1',
    description = 'This is a first package',
    ext_modules = [module1]
      )
