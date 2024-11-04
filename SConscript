from building import *
Import('rtconfig')

src   = []
cwd   = GetCurrentDir()

# add rt3020 src files.
src += Glob('libraries/rt3020.c')

if GetDepend('PKG_RT3020_USING_SENSOR_V1'):
    src += ['rt3020_sensor_v1.c']

# add rt3020 include path.
path  = [cwd, cwd + '/libraries']

# add src and include to group.
group = DefineGroup('rt3020', src, depend = ['PKG_USING_RT3020'], CPPPATH = path)

Return('group')
