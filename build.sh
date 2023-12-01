#!/bin/bash

set -euxo pipefail

BUILDDIR=_build

mkdir -pv "${BUILDDIR}"
cmake -S . -B "${BUILDDIR}"
cmake --build "${BUILDDIR}"
