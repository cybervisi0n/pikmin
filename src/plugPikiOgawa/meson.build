plugpikiogawa_srcs = files(
    'ogTest.cpp',
    'ogSub.cpp',
    'ogTitle.cpp',
    'ogPause.cpp',
    'ogTutorial.cpp',
    'ogTutorialData.cpp',
    'ogMap.cpp',
    'ogResult.cpp',
    'ogRader.cpp',
    'ogFileSelect.cpp',
    'ogMessage.cpp',
    'ogMemChk.cpp',
    'ogDiary.cpp',
    'ogMenu.cpp',
    'ogFileChkSel.cpp',
    'ogMakeDefault.cpp',
    'ogTotalScore.cpp',
    'ogSave.cpp',
    'ogNitaku.cpp',
    'ogFileCopy.cpp',
    'ogFileDelete.cpp',
    'ogGraph.cpp',
    'ogStart.cpp',
    'ogCallBack.cpp',
)


plugpikiogawa_lib = static_library('plugPikiOgawa',
    include_directories: project_includes,
    pic: false,
    dependencies: libporpoise_dep,
    sources: [plugpikiogawa_srcs],
    native: build_target != 'gc'
)

pikmin_libs += plugpikiogawa_lib