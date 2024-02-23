#!/bin/bash

set -euxo pipefail

BUILDDIR="${PWD}/_build"
INSTALLDIR="${PWD}/_install"

rm -rf "${BUILDDIR}" "${INSTALLDIR}"

mkdir -pv "${BUILDDIR}" "${INSTALLDIR}"

cmake -S . -B "${BUILDDIR}"
cmake --build "${BUILDDIR}"
cmake --install "${BUILDDIR}" --prefix "${INSTALLDIR}"
