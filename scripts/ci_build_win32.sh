#!/bin/bash
./setup_build_win32.sh
meson configure -Dextract_assets=false build_win32
meson compile -C build_win32
