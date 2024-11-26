// C++ includes used for precompiling -*- C++ -*-

// Copyright (C) 2003-2023 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file stdc++.h
 *  This is an implementation file for a precompiled header.
 */

// 17.4.1.2 Headers

// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <csetjmp>
#include <cstdarg>
#include <cstddef>
#include <cstdlib>

#if __cplusplus >= 201103L
#include <cstdint>
#endif

// C++
// #include <bitset>
// #include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/complex>
#include <algorithm>
#include <bitset>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/functional>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/iterator>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/limits>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/memory>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/new>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/numeric>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/typeinfo>
#include <utility>

#if __cplusplus >= 201103L
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/array>
#include <atomic>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/initializer_list>
#include <ratio>
#include <scoped_allocator>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/tuple>
#include <typeindex>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/type_traits>
#endif

#if __cplusplus >= 201402L
#endif

#if __cplusplus >= 201703L
#include <any>
// #include <execution>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/optional>
#include <variant>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/string_view>
#endif

#if __cplusplus >= 202002L
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/bit>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/compare>
#include <concepts>
#include <numbers>
#include <ranges>
#include <span>
#include <source_location>
#include <version>
#endif

#if __cplusplus > 202002L
#include <expected>
#include <stdatomic.h>
#if __cpp_impl_coroutine
#include <coroutine>
#endif
#endif

#if _GLIBCXX_HOSTED
// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cuchar>
#endif

// C++
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/complex>
#include <deque>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/exception>
#include <fstream>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/functional>
#include <iomanip>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ios>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/iosfwd>
#include <iostream>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/istream>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/iterator>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/limits>
#include <list>
#include <locale>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/map>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/memory>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/new>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/numeric>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ostream>
#include <queue>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/set>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/sstream>
#include <stack>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/stdexcept>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/streambuf>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/string>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/typeinfo>
#include <utility>
#include <valarray>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/vector>

#if __cplusplus >= 201103L
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/system_error>
#include <thread>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/tuple>
#include <typeindex>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/type_traits>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/unordered_map>
#include <unordered_set>
#endif

#if __cplusplus >= 201402L
#include <shared_mutex>
#endif

#if __cplusplus >= 201703L
#include <any>
#include <charconv>
// #include <execution>
#include <filesystem>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/optional>
#include <memory_resource>
#include <variant>
#endif

#if __cplusplus >= 202002L
#include <barrier>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/bit>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/compare>
#include <concepts>
#include <format>
#include <latch>
#include <numbers>
#include <ranges>
#include <span>
#include <stop_token>
#include <semaphore>
#include <source_location>
#include <syncstream>
#include <version>
#endif

#if __cplusplus > 202002L
#include <expected>
#include <spanstream>
#if __has_include(<stacktrace>)
#include <stacktrace>
#endif
#include <stdatomic.h>
#include <stdfloat>
#endif

#endif // HOSTED
