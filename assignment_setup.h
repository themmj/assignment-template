#ifndef _ASSIGNMENT_SETUP_H
#define _ASSIGNMENT_SETUP_H

/// Replace main with assignment_main when running in a test. This allows the test to call the submissions main.
#ifdef _ASSIGNMENT_RUNNING_TESTS
#    define MAIN_FUNC int assignment_main(int argc, const char *argv[])
#else
#    define MAIN_FUNC int main(int argc, const char *argv[])
#endif

MAIN_FUNC;

#endif  // _ASSIGNMENT_SETUP_H
