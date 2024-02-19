//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___TYPE_IS_CONSTRUCTIBLE_H
#define _LIBCPP___TYPE_IS_CONSTRUCTIBLE_H

#include <__config>
#include <__type_traits/integral_constant.h>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

template <class _Tp, class ..._Args>
struct _LIBCPP_TEMPLATE_VIS is_constructible
    : public integral_constant<bool, __is_constructible(_Tp, _Args...)>
{ };

#if _LIBCPP_STD_VER >= 17
template <class _Tp, class ..._Args>
inline constexpr bool is_constructible_v = __is_constructible(_Tp, _Args...);
#endif

_LIBCPP_END_NAMESPACE_STD

#endif // _LIBCPP___TYPE_IS_CONSTRUCTIBLE_H
