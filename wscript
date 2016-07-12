# xlreg_c/wscript
   
BASENAME = 'xlreg'
LIBNAME  = BASENAME + '_cpp_lCib'
EXENAME  = 'xlRegCppClient'

# waf combines these two to get the archive name
APPNAME = BASENAME + '_cpp'
VERSION = '0.2.2'

top     = '.'
out     = "build"

def options(ctx):
    ctx.load('compiler_cxx')
    ctx.add_option('--shared', action='store_true', 
        help='build static library')
    ctx.add_option('--static', action='store_true', 
        help='build static library')

def configure(ctx):
    ctx.load('compiler_cxx')

def build(ctx):
    if ctx.options.shared:
        ctx.env.append_value('LINKFLAGS', ['-Lbuild/lib' + LIBNAME + '.so'])
        # this isn't found with or without the .so  XXX 
        ctx.env.append_value('LIB', ['lib' + LIBNAME + '.so'])
        ctx.shlib(source='src/version.cpp', target=LIBNAME, 
            includes=['include'], cxxflags='-g -Wall -O0')
    else:
        # build a static library by default
        ctx.stlib(source='src/version.cpp', target=LIBNAME, 
            includes=['include'], cxxflags='-g -Wall -O0')

    ctx.program(source='src/main.cpp', target=EXENAME, includes='include',
        use=LIBNAME)
