Just my personal playground for using C++, CMake, CmakePresets and VSCode for some simple coding problems.

# VSCode
Installing cmake via snap on ubuntu-20.04 lead to issues that VSCode could not use the cmake executable in conjunction with `CMakePresets.json`. Error of the form: `Bad CMake executable "/snap/bin/cmake"` was encountered. To fix this, the `Cmake Path` needs to be set in the `CMake Tools` plugin. See the following resources dealing with this issue
- https://github.com/microsoft/vscode-cmake-tools/issues/838
- https://askubuntu.com/a/1394786