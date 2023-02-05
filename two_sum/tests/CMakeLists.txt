# Add Catch2 tests
add_executable(tests tests.cpp $<TARGET_OBJECTS:two_sum>)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

# Add the actual test
add_test(NAME tests
    COMMAND tests)
