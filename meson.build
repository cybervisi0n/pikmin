project('pikmin', ['c', 'cpp'],
    version: '1.0',
    default_options : [
        'buildtype=plain',
        'warning_level=0'
    ]
)

build_target = get_option('build_target')
libPorpoise_prj = subproject('libPorpoise')


shared_args = [
]

if(build_target == 'gc') 
shared_args += ['-DGAMECUBE']
endif

if(get_option('pikmin_win32') == true)
    shared_args += [
        '-DPIKMIN_WIN32'
    ]
endif

project_c_args = shared_args + [
]
project_cpp_args = shared_args + [
]

add_project_arguments(project_c_args, language: 'c', native: build_target != 'gc')
add_project_arguments(project_cpp_args, language: 'cpp', native: build_target != 'gc')

# Decomp Toolkit
dtk_exe = find_program('dtk-tools/dtk', native: true)

# Extract GPIE01 assets
gpie_config_yml = meson.project_source_root() + '/config/GPIE01_00/config.yml'
gpie_dir = custom_target(
    command: ['scripts/run_in_dir.sh', meson.project_source_root(), dtk_exe, 'dol', 'split', gpie_config_yml, meson.current_build_dir() + '/@OUTPUT@' ] , output: 'GPIE01_00')

pikmin_link_args = []

eppc_lcf = meson.project_source_root() / 'include' / 'eppc.lcf'

if(build_target == 'gc')
    pikmin_link_args += [
        '-lcf',
        eppc_lcf
    ]
endif

project_includes = include_directories('include', './GPIE01_00/include')
pikmin_libs = []


libporpoise_dep = dependency('libPorpoise')

subdir('src')


sysbootup_lib = static_library('sysBootup',
    include_directories: project_includes,
    pic: false,
    dependencies: libporpoise_dep,
    sources: [sysbootup_srcs],
    native: build_target != 'gc'
)
pikmin_libs += sysbootup_lib

pikmin_exe = executable(
    'pikmin',
    dependencies: [ libporpoise_dep ],
    link_args: [ pikmin_link_args ],
    link_with: [ pikmin_libs ],
    sources: [ gpie_dir ],
    include_directories: [ project_includes ],
    native: build_target != 'gc',
)
