// C++ includes used for precompiling extensions -*- C++ -*-

// Copyright (C) 2006-2023 Free Software Foundation, Inc.
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

/** @file extc++.h
 *  This is an implementation file for a precompiled header.
 */

#if __cplusplus < 201103L
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/bits/stdtr1c++.h>
#else
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/bits/stdc++.h>
#endif

#if __cplusplus >= 201103L
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/aligned_buffer.h>
#endif
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/alloc_traits.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/atomicity.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/cast.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/iterator>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/numeric_traits.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/pointer.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/typelist.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/type_traits.h>

#if _GLIBCXX_HOSTED
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/algorithm>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/bitmap_allocator.h>
#if __cplusplus >= 201103L
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/cmath>
#endif
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/concurrence.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/debug_allocator.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/extptr_allocator.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/functional>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/malloc_allocator.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/memory>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/mt_allocator.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/new_allocator.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/numeric>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/pod_char_traits.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/pool_allocator.h>
#if __cplusplus >= 201103L
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/random>
#endif
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/rb_tree>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/rope>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/slist>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/stdio_filebuf.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/stdio_sync_filebuf.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/throw_allocator.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/vstring.h>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/pb_ds/assoc_container.hpp>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/pb_ds/priority_queue.hpp>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/pb_ds/exception.hpp>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/pb_ds/hash_policy.hpp>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/pb_ds/list_update_policy.hpp>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/pb_ds/tree_policy.hpp>
#include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/pb_ds/trie_policy.hpp>

#ifdef _GLIBCXX_HAVE_ICONV
 #include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/codecvt_specializations.h>
 #include <gcc_embedded/arm-none-eabi/include/c++/13.2.1/ext/enc_filebuf.h>
#endif
#endif // HOSTED
