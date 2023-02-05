include(FetchContent)
set(GITHUB_URL_ROOT https://github.com/)

FetchContent_Declare(spdlog 
    GIT_REPOSITORY ${GITHUB_URL_ROOT}/gabime/spdlog.git
    GIT_TAG        v1.11.0)
FetchContent_MakeAvailable(spdlog)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY ${GITHUB_URL_ROOT}/catchorg/Catch2.git
  GIT_TAG        v3.3.1)
FetchContent_MakeAvailable(Catch2)