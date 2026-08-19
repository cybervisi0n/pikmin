#!/bin/bash
./setup_build_linux32.sh
meson configure -Dextract_assets=false build_linux32
meson compile -C build_linux32
