/* Copyright (C) 2002, 2003 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

#if __riscv_xlen == (__SIZEOF_POINTER__ * 8)
# define __WORDSIZE __riscv_xlen
#else
# error unsupported ABI
#endif

#if __riscv_xlen == 64
# define __WORDSIZE_TIME64_COMPAT32 1
#else
# define __WORDSIZE_TIME64_COMPAT32 0
# define __WORDSIZE32_SIZE_ULONG    0
# define __WORDSIZE32_PTRDIFF_LONG  0
#endif
