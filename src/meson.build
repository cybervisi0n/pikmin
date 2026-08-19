subdir('hvqm4dec')
subdir('jaudio')
subdir('plugPikiColin')
subdir('plugPikiKando')
subdir('plugPikiNakata')
subdir('plugPikiNishimura')
subdir('plugPikiOgawa')
subdir('plugPikiYamashita')
subdir('sysCommon')
subdir('sysDolphin')

sysbootup_srcs = files(
    'sysBootup.cpp'
)

sysbootup_lib = static_library('sysBootup',
    include_directories: project_includes,
    pic: false,
    dependencies: libporpoise_dep,
    sources: [sysbootup_srcs],
    native: build_target != 'gc'
)

pikmin_libs += sysbootup_lib