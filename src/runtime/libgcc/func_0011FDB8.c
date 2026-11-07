/* compiler: ee-gcc-2.96-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* gcc-softfloat gcc snapshot 2000-10-03: func_0011FDB8 from double.c, placed at 0x005be3e8 by
 * tools/libmatch.py. Third-party code, see THIRD_PARTY.md for its license and origin.
 * licence: gcc-runtime (GPL with the GCC runtime exception, see THIRD_PARTY.md) */
#define func_0011FDB8 func_0011FDB8
#define func_005BDF58 func_005BDF58
#define func_005BE508 func_005BE508
#define func_005BE1A0 func_005BE1A0
#define func_005BE250 func_005BE250
#define func_005BD900 func_005BD900
#define func_005BD9B8 func_005BD9B8
#define _fpadd_parts _fpadd_parts
#define fpadd fpadd
#define fpcmp fpcmp
#define fpsub fpsub
# 1 "fp-bit.c"
/* This is a software floating point library which can be used instead of
   the floating point routines in libgcc1.c for targets without hardware
   floating point.
   Copyright (C) 1994, 1995, 1996, 1997, 1998,
   2000 Free Software Foundation, Inc.

This file is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file with other programs, and to distribute
those programs without any restriction coming from the use of this
file.  (The General Public License restrictions do apply in other
respects; for example, they cover modification of the file, and
distribution when not linked into another program.)

This file is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */
# 30 "fp-bit.c"

# 1 "fp-bit.h" 1

/* Copyright (C) 2000
   Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */
# 22 "fp-bit.h"

typedef float SFtype __attribute__ ((mode (SF)));
typedef float DFtype __attribute__ ((mode (DF)));

typedef int HItype __attribute__ ((mode (HI)));
typedef int SItype __attribute__ ((mode (SI)));
typedef int DItype __attribute__ ((mode (DI)));

typedef unsigned int UHItype __attribute__ ((mode (HI)));
typedef unsigned int USItype __attribute__ ((mode (SI)));
typedef unsigned int UDItype __attribute__ ((mode (DI)));

# 135 "fp-bit.h"

        typedef UDItype fractype;
        typedef USItype halffractype;
        typedef DFtype FLO_type;
        typedef DItype intfrac;

# 172 "fp-bit.h"

# 204 "fp-bit.h"
# 223 "fp-bit.h"

typedef enum
{
  CLASS_SNAN,
  CLASS_QNAN,
  CLASS_ZERO,
  CLASS_NUMBER,
  CLASS_INFINITY
} fp_class_type;

typedef struct
{

  fp_class_type class;
  unsigned int sign;
  int normal_exp;

  union
    {
      fractype ll;
      halffractype l[2];
    } fraction;
} fp_number_type;

typedef union
{
  FLO_type value;
  fractype value_raw;

  halffractype words[2];

# 292 "fp-bit.h"

# 310 "fp-bit.h"

}
FLO_union_type;

extern FLO_type func_005BE250 (fp_number_type *);

extern void __unpack_d (FLO_union_type *, fp_number_type *);

extern FLO_type dpadd (FLO_type, FLO_type);
extern FLO_type dpsub (FLO_type, FLO_type);

extern FLO_type dpmul (FLO_type, FLO_type);

extern FLO_type dpdiv (FLO_type, FLO_type);

extern int func_0011FDB8 (fp_number_type *, fp_number_type *);

extern SItype dpcmp (FLO_type, FLO_type);

extern FLO_type litodp (SItype);

extern SItype dptoli (FLO_type);

extern USItype dptoul (FLO_type);

extern FLO_type __negdf2 (FLO_type);

extern SFtype func_005BE1A0 (fp_class_type, unsigned int, int, USItype);

extern DFtype func_005BE508 (fp_class_type, unsigned int, int, UDItype);

extern SFtype dptofp (DFtype);

# 48 "fp-bit.c" 2

# 68 "fp-bit.c"

# 78 "fp-bit.c"
# 111 "fp-bit.c"

const fp_number_type __thenan_df;

__inline__
static fp_number_type *
nan (void)

{

  return (fp_number_type *) (& __thenan_df);

}

__inline__
static int
isnan ( fp_number_type * x)

{
  return x->class == CLASS_SNAN || x->class == CLASS_QNAN;
}

__inline__
static int
isinf ( fp_number_type * x)

{
  return x->class == CLASS_INFINITY;
}

__inline__
static int
iszero ( fp_number_type * x)

{
  return x->class == CLASS_ZERO;
}

__inline__
static void
flip_sign ( fp_number_type * x)

{
  x->sign = !x->sign;
}

extern FLO_type func_005BE250 ( fp_number_type * );

FLO_type
func_005BE250 ( fp_number_type * src);

void
__unpack_d (FLO_union_type * src, fp_number_type * dst);

static fp_number_type *
_fpadd_parts (fp_number_type * a,
              fp_number_type * b,
              fp_number_type * tmp);

FLO_type
dpadd (FLO_type arg_a, FLO_type arg_b);

FLO_type
dpsub (FLO_type arg_a, FLO_type arg_b);

static __inline__ fp_number_type *
_fpmul_parts ( fp_number_type * a,
               fp_number_type * b,
               fp_number_type * tmp)

{
  fractype low = 0;
  fractype high = 0;

  if (isnan (a))
    {
      a->sign = a->sign != b->sign;
      return a;
    }
  if (isnan (b))
    {
      b->sign = a->sign != b->sign;
      return b;
    }
  if (isinf (a))
    {
      if (iszero (b))
        return nan ();
      a->sign = a->sign != b->sign;
      return a;
    }
  if (isinf (b))
    {
      if (iszero (a))
        {
          return nan ();
        }
      b->sign = a->sign != b->sign;
      return b;
    }
  if (iszero (a))
    {
      a->sign = a->sign != b->sign;
      return a;
    }
  if (iszero (b))
    {
      b->sign = a->sign != b->sign;
      return b;
    }

  {
# 655 "fp-bit.c"
# 665 "fp-bit.c"

    {
      UDItype nl = a->fraction.ll & 0xffffffff;
      UDItype nh = a->fraction.ll >> 32;
      UDItype ml = b->fraction.ll & 0xffffffff;
      UDItype mh = b->fraction.ll >>32;
      UDItype pp_ll = ml * nl;
      UDItype pp_hl = mh * nl;
      UDItype pp_lh = ml * nh;
      UDItype pp_hh = mh * nh;
      UDItype res2 = 0;
      UDItype res0 = 0;
      UDItype ps_hh__ = pp_hl + pp_lh;
      if (ps_hh__ < pp_hl)
        res2 += 0x100000000LL;
      pp_hl = (ps_hh__ << 32) & 0xffffffff00000000LL;
      res0 = pp_ll + pp_hl;
      if (res0 < pp_ll)
        res2++;
      res2 += ((ps_hh__ >> 32) & 0xffffffffL) + pp_hh;
      high = res2;
      low = res0;
    }

  }

  tmp->normal_exp = a->normal_exp + b->normal_exp;
  tmp->sign = a->sign != b->sign;

  tmp->normal_exp += 4;

  while (high >= (1LL<<(52+1+8L)))
    {
      tmp->normal_exp++;
      if (high & 1)
        {
          low >>= 1;
          low |= 0x8000000000000000LL;
        }
      high >>= 1;
    }
  while (high < (1LL<<(52+8L)))
    {
      tmp->normal_exp--;

      high <<= 1;
      if (low & 0x8000000000000000LL)
        high |= 1;
      low <<= 1;
    }

# 732 "fp-bit.c"

  if ((high & 0xff) == 0x80)
    {
      if (high & (1 << 8L))
        {

          high += 0x7f + 1;
        }
      else if (low)
        {

          high += 0x7f + 1;
        }
    }
  tmp->fraction.ll = high;
  tmp->class = CLASS_NUMBER;
  return tmp;
}

FLO_type
dpmul (FLO_type arg_a, FLO_type arg_b);

static __inline__ fp_number_type *
_fpdiv_parts (fp_number_type * a,
              fp_number_type * b)

{
  fractype bit;
  fractype numerator;
  fractype denominator;
  fractype quotient;

  if (isnan (a))
    {
      return a;
    }
  if (isnan (b))
    {
      return b;
    }

  a->sign = a->sign ^ b->sign;

  if (isinf (a) || iszero (a))
    {
      if (a->class == b->class)
        return nan ();
      return a;
    }

  if (isinf (b))
    {
      a->fraction.ll = 0;
      a->normal_exp = 0;
      return a;
    }
  if (iszero (b))
    {
      a->class = CLASS_INFINITY;
      return a;
    }

  {

    a->normal_exp = a->normal_exp - b->normal_exp;
    numerator = a->fraction.ll;
    denominator = b->fraction.ll;

    if (numerator < denominator)
      {

        numerator *= 2;
        a->normal_exp--;
      }
    bit = (1LL<<(52+8L));
    quotient = 0;

    while (bit)
      {
        if (numerator >= denominator)
          {
            quotient |= bit;
            numerator -= denominator;
          }
        bit >>= 1;
        numerator *= 2;
      }

    if ((quotient & 0xff) == 0x80)
      {
        if (quotient & (1 << 8L))
          {

            quotient += 0x7f + 1;
          }
        else if (numerator)
          {

            quotient += 0x7f + 1;
          }
      }

    a->fraction.ll = quotient;
    return (a);
  }
}

FLO_type
dpdiv (FLO_type arg_a, FLO_type arg_b);

int
func_0011FDB8 (fp_number_type * a, fp_number_type * b)

{

  if (isnan (a) || isnan (b))
    {
      return 1;
    }
  if (isinf (a) && isinf (b))
    {

      return b->sign - a->sign;
    }

  if (isinf (a))
    {
      return a->sign ? -1 : 1;
    }
  if (isinf (b))
    {
      return b->sign ? 1 : -1;
    }
  if (iszero (a) && iszero (b))
    {
      return 0;
    }
  if (iszero (a))
    {
      return b->sign ? 1 : -1;
    }
  if (iszero (b))
    {
      return a->sign ? -1 : 1;
    }

  if (a->sign != b->sign)
    {

      return a->sign ? -1 : 1;
    }

  if (a->normal_exp > b->normal_exp)
    {
      return a->sign ? -1 : 1;
    }
  if (a->normal_exp < b->normal_exp)
    {
      return a->sign ? 1 : -1;
    }

  if (a->fraction.ll > b->fraction.ll)
    {
      return a->sign ? -1 : 1;
    }
  if (a->fraction.ll < b->fraction.ll)
    {
      return a->sign ? 1 : -1;
    }

  return 0;
}

SItype
dpcmp (FLO_type arg_a, FLO_type arg_b);

# 1008 "fp-bit.c"

# 1029 "fp-bit.c"

# 1050 "fp-bit.c"

# 1070 "fp-bit.c"

# 1091 "fp-bit.c"

# 1112 "fp-bit.c"

# 1130 "fp-bit.c"

FLO_type
litodp (SItype arg_a);

FLO_type
usi_to_float (USItype arg_a);

SItype
dptoli (FLO_type arg_a);

USItype
dptoul (FLO_type arg_a);

FLO_type
__negdf2 (FLO_type arg_a);

# 1304 "fp-bit.c"

# 1326 "fp-bit.c"

extern SFtype func_005BE1A0 (fp_class_type, unsigned int, int, USItype);

DFtype
func_005BE508 (fp_class_type class, unsigned int sign, int exp, UDItype frac);

SFtype
dptofp (DFtype arg_a);
