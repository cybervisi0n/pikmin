project('pikmin', ['c', 'cpp'],
    version: '1.0',
    default_options : [
        'buildtype=plain',
        'warning_level=0'
    ]
)

build_target = get_option('build_target')
libPorpoise_prj = subproject('libPorpoise',
    default_options: [
        'dvd_game_id=GPIE',
        'dvd_company=01'
    ])



shared_args = [
    '-DVERSION_GPIE01'
]

if(build_target == 'gc') 
shared_args += ['-DGAMECUBE']
else
shared_args += ['-DPCPORT', '-fpermissive']
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
pikmin_sources = []

if(get_option('extract_assets') == true)
    gpie_dir = custom_target(
        command: ['scripts/run_in_dir.sh', meson.project_source_root(), dtk_exe, 'dol', 'split', gpie_config_yml, meson.current_build_dir() + '/@OUTPUT@' ] , output: 'GPIE01_00')
    pikmin_sources += gpie_dir
endif

pikmin_link_args = []

eppc_lcf = meson.project_source_root() / 'include' / 'eppc.lcf'

if(build_target == 'gc')
    pikmin_link_args += [
        '-lcf',
        eppc_lcf
    ]
endif

if(build_target == 'linux32')
    pikmin_link_args += [
        '-m32'
    ]
endif

if(get_option('address_sanitizer') == true)
    pikmin_link_args += [
        '-fsanitize=address'
    ]
endif
project_includes = include_directories('include', './GPIE01_00/include')
pikmin_libs = []


libporpoise_dep = dependency('libPorpoise')

subdir('src')



pikmin_exe = executable(
    'pikmin',
    dependencies: [ libporpoise_dep ],
    link_args: [ pikmin_link_args ],
    link_with: [ pikmin_libs ],
    sources: [ pikmin_sources ],
    include_directories: [ project_includes ],
    native: build_target != 'gc',
)
