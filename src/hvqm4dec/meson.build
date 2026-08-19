hvqm4dec_srcs = files(
    'hvqm4dec.c'
)


hvqm4dec_lib = static_library('hvqm4dec',
    include_directories: project_includes,
    pic: false,
    dependencies: libporpoise_dep,
    sources: [hvqm4dec_srcs],
    native: build_target != 'gc'
)

pikmin_libs += hvqm4dec_lib