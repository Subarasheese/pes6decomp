/* compiler: ee-gcc-2.9-G0 */
/* Source: g-guthrie/mvc2-port-and-decomp, src/fp_bit_integer_conversions.c (func_00119CE8). */
/* This is a software floating point library which can be used instead of
   the floating point routines in libgcc1.c for targets without hardware
   floating point.
 Copyright (C) 1994, 1995, 1996, 1997, 1998 Free Software Foundation, Inc.

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

typedef unsigned long long fractype;
typedef unsigned int halffractype;
typedef unsigned int USItype;
typedef double FLO_type;
typedef enum { CLASS_SNAN, CLASS_QNAN, CLASS_ZERO, CLASS_NUMBER, CLASS_INFINITY } fp_class_type;
typedef struct {
    fp_class_type class;
    unsigned int sign;
    int normal_exp;
    union {
        fractype ll;
        halffractype l[2];
    } fraction;
} fp_number_type;
typedef union {
    double value;
    fractype value_raw;
    halffractype words[2];
} FLO_union_type;
extern void func_0018ACD0(FLO_union_type *, fp_number_type *);

USItype func_0018B738(FLO_type arg_a) {
    fp_number_type a;
    func_0018ACD0((FLO_union_type *)(&arg_a), &a);
    if (((&a)->class ^ CLASS_ZERO) == 0)
        return 0;
    if ((&a)->class < CLASS_ZERO)
        return 0;
    if (a.sign)
        return 0;
    if (((&a)->class ^ CLASS_INFINITY) == 0)
        return 0xffffffffU;
    if (a.normal_exp < 0)
        return 0;
    if (a.normal_exp > 31)
        return 0xffffffffU;
    else if (a.normal_exp > (52 + 8))
        return a.fraction.ll << (a.normal_exp - (52 + 8));
    else
        return a.fraction.ll >> ((52 + 8) - a.normal_exp);
}
