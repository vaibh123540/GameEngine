add_test([=[Vector2D.Addition]=]  /Users/vaibh123540/Desktop/Projects/GameEngine/build/math_tests [==[--gtest_filter=Vector2D.Addition]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Vector2D.Addition]=]  PROPERTIES WORKING_DIRECTORY /Users/vaibh123540/Desktop/Projects/GameEngine/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[Vector2D.ScalarMultiplication]=]  /Users/vaibh123540/Desktop/Projects/GameEngine/build/math_tests [==[--gtest_filter=Vector2D.ScalarMultiplication]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Vector2D.ScalarMultiplication]=]  PROPERTIES WORKING_DIRECTORY /Users/vaibh123540/Desktop/Projects/GameEngine/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  math_tests_TESTS Vector2D.Addition Vector2D.ScalarMultiplication)
