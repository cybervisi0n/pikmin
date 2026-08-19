sysdolphin_srcs = files(
    'texture.cpp',
    'system.cpp',
    'sysNew.cpp',
    'controllerMgr.cpp',
    'dgxGraphics.cpp',
    'gameApp.cpp',
)


sysdolphin_lib = static_library('sysDolphin',
    include_directories: project_includes,
    pic: false,
    dependencies: libporpoise_dep,
    sources: [sysdolphin_srcs],
    native: build_target != 'gc'
)

pikmin_libs += sysdolphin_lib