plugpikicolin_srcs = files(
    'cardutil.cpp',
    'dynsimulator.cpp',
    'animMgr.cpp',
    'gameflow.cpp',
    'game.cpp',
    'gamePrefs.cpp',
    'gameSetup.cpp',
    'cardSelect.cpp',
    'mapSelect.cpp',
    'newPikiGame.cpp',
    'introGame.cpp',
    'gameExit.cpp',
    'gauges.cpp',
    'genMapObject.cpp',
    'gui.cpp',
    'parameters.cpp',
    'plugPiki.cpp',
    'titles.cpp',
    'ninLogo.cpp',
    'mapMgr.cpp',
    'dayMgr.cpp',
    'cinePlayer.cpp',
    'lightPool.cpp',
    'memoryCard.cpp',
    'moviePlayer.cpp',
    'movSample.cpp'
)


plugpikicolin_lib = static_library('plugPikiColin',
    include_directories: project_includes,
    pic: false,
    dependencies: libporpoise_dep,
    sources: [plugpikicolin_srcs],
    native: build_target != 'gc'
)

pikmin_libs += plugpikicolin_lib