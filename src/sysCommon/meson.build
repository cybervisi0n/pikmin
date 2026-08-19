syscommon_srcs = files(
    'ayuStack.cpp',
    'baseApp.cpp',
    'stream.cpp',
    'streamBufferedInput.cpp',
    'string.cpp',
    'graphics.cpp',
    'grLight.cpp',
    'shapeBase.cpp',
    'shpLightFlares.cpp',
    'shpObjColl.cpp',
    'shpRoutes.cpp',
    'sysMath.cpp',
    'matMath.cpp',
    'stdSystem.cpp',
    'node.cpp',
    'timers.cpp',
    'controller.cpp',
    'cmdStream.cpp',
    'camera.cpp',
    'atx.cpp',
    'id32.cpp',
)


syscommon_lib = static_library('sysCommon',
    include_directories: project_includes,
    pic: false,
    dependencies: libporpoise_dep,
    sources: [syscommon_srcs],
    native: build_target != 'gc'
)

pikmin_libs += syscommon_lib