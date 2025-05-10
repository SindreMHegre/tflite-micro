#ifndef COMPILER_FIX_H
#define COMPILER_FIX_H
#ifndef __has_builtin
#define __has_builtin(x) 0
#endif
#ifndef __is_nothrow_constructible
#define __is_nothrow_constructible(...) false
#endif
#ifndef __is_nothrow_assignable
#define __is_nothrow_assignable(...) false
#endif
#ifndef __is_convertible
#define __is_convertible(...) false
#endif
#endif // COMPILER_FIX_H
