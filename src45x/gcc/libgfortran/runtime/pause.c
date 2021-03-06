/* Implementation of the STOP statement.
   Copyright 2002, 2005, 2007, 2009 Free Software Foundation, Inc.
   Contributed by Paul Brook <paul@nowt.org>

This file is part of the GNU Fortran 95 runtime library (libgfortran).

Libgfortran is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public
License as published by the Free Software Foundation; either
version 3 of the License, or (at your option) any later version.

Libgfortran is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

#include "libgfortran.h"
#include <string.h>


static void
do_pause (void)
{
  char buff[4];
  st_printf ("To resume execution, type go.  "
	     "Other input will terminate the job.\n");

  fgets(buff, 4, stdin);
  if (strncmp(buff, "go\n", 3) != 0)
    stop_numeric (-1);
  st_printf ("RESUMED\n");
}

/* A numeric or blank STOP statement.  */

extern void pause_numeric (GFC_INTEGER_4 code);
export_proto(pause_numeric);

void
pause_numeric (GFC_INTEGER_4 code)
{
  if (code == -1)
    st_printf ("PAUSE\n");
  else
    st_printf ("PAUSE %d\n", (int)code);

  do_pause ();
}

extern void pause_string (char *string, GFC_INTEGER_4 len);
export_proto(pause_string);

void
pause_string (char *string, GFC_INTEGER_4 len)
{
  st_printf ("PAUSE ");
  while (len--)
    st_printf ("%c", *(string++));
  st_printf ("\n");

  do_pause ();
}
