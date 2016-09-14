#ifndef CPP_BUILD_SYSTEMS_SHARED_MATHEMATICS_H
#define CPP_BUILD_SYSTEMS_SHARED_MATHEMATICS_H

#ifdef _WIN32
    #ifdef _MSC_VER
        #define CPP_BUILD_EXPORT __declspec(dllexport)
        #define CPP_BUILD_IMPORT __declspec(dllimport)
    #elif defined(__GNUC__)
        #define CPP_BUILD_EXPORT __attribute__((dllexport))
        #define CPP_BUILD_IMPORT __attribute__((dllimport))
    #else
        // Hope for auto-import/export to work.
        #define CPP_BUILD_EXPORT
        #define CPP_BUILD_IMPORT
    #endif

    #ifdef SHARED_EXPORTS
        #define CPP_BUILD_EXPORT_DECL CPP_BUILD_EXPORT
    #else
        #define CPP_BUILD_EXPORT_DECL CPP_BUILD_IMPORT
    #endif
#else
    #define CPP_BUILD_EXPORT_DECL
#endif

/**
 * Add two numbers together
 * @param a The first number to add together
 * @param b The second number to add together
 * @return The result of a + b
 */
CPP_BUILD_EXPORT_DECL int add(int a, int b);

/**
 * Multiply two numbers together
 * @param a The first number to multiply together
 * @param b The second number to multiply together
 * @return The result of a - b
 */
CPP_BUILD_EXPORT_DECL int multiply(int a, int b);

#endif
