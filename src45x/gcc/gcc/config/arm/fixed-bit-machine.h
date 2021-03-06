/* Machine-specific override for fixed-point support routine names.
   Copyright (C) 2011 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

/* To be EABI-compliant (until the EABI supports fixed-point functionality),
   use the __gnu_ namespace for fixed-point helper functions.  */

#ifdef __ARM_EABI__
#define DECORATE_FIXED_NAME(X) __gnu_ ## X
#endif
