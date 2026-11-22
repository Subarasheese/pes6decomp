/* compiler: ee-gcc-2.96-G0 */
/* Komasia/sly2-decomp, src/lib/fde_merge.c (fde_merge). See THIRD_PARTY.md. */

typedef unsigned int size_t;
typedef unsigned int uword;
typedef int sword;
typedef int saddr;
typedef struct dwarf_fde {
    uword length;
    sword CIE_delta;
    void *pc_begin;
    uword pc_range;
} fde;
typedef struct fde_vector {
    fde **array;
    size_t count;
} fde_vector;

static inline saddr fde_compare(fde *x, fde *y) { return (saddr)x->pc_begin - (saddr)y->pc_begin; }

void func_001ABBF8(fde_vector *v1, const fde_vector *v2) {
    size_t i1, i2;
    fde *fde2;

    i2 = v2->count;
    if (i2) {
        i1 = v1->count;
        do {
            i2--;
            fde2 = v2->array[i2];
            while (i1 > 0 && fde_compare(v1->array[i1 - 1], fde2) > 0) {
                v1->array[i1 + i2] = v1->array[i1 - 1];
                i1--;
            }
            v1->array[i1 + i2] = fde2;
        } while (i2 > 0);
        v1->count += v2->count;
    }
}

/* GNU GCC, frame.c and frame-dwarf2.c, via gustavocanepa/gt4-decomp. See THIRD_PARTY.md. */
/* Copyright (C) 1997, 1998, 1999, 2000 Free Software Foundation, Inc.
   Contributed by Jason Merrill <jason@cygnus.com>.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file into combinations with other programs,
and to distribute those combinations without any restriction coming
from the use of this file.  (The General Public License restrictions
do apply in other respects; for example, they cover modification of
the file, and distribution when not linked into a combine
executable.)

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* The PAL runtime also emits the adjacent end_fde_sort in this unit. */
typedef struct {
    fde_vector linear, erratic;
} fde_accumulator;
extern void func_001AD608(void) __attribute__((noreturn));
extern void func_001ADBC8(void *);
extern fde *D_0120884C;
static inline void fde_split(fde_vector *linear, fde_vector *erratic)

{

    size_t count = linear->count;
    fde **chain_end = &D_0120884C;
    size_t i, j, k;

    if (sizeof(fde *) != sizeof(fde **))
        func_001AD608();

    for (i = 0; i < count; i++) {
        fde **probe;

        for (probe = chain_end; probe != &D_0120884C && fde_compare(linear->array[i], *probe) < 0;
             probe = chain_end) {
            chain_end = (fde **)erratic->array[probe - linear->array];
            erratic->array[probe - linear->array] = 0;
        }
        erratic->array[i] = (fde *)chain_end;
        chain_end = &linear->array[i];
    }

    for (i = j = k = 0; i < count; i++)
        if (erratic->array[i])
            linear->array[j++] = linear->array[i];
        else
            erratic->array[k++] = linear->array[i];
    linear->count = j;
    erratic->count = k;
}
static inline void frame_heapsort(fde_vector *erratic)

{

    fde **a = erratic->array;

    size_t n = erratic->count;
    size_t m = n;
    size_t i;

    while (m > 0) {

        m--;
        for (i = m; 2 * i + 1 < n;) {
            if (2 * i + 2 < n && fde_compare(a[2 * i + 2], a[2 * i + 1]) > 0 &&
                fde_compare(a[2 * i + 2], a[i]) > 0) {
                do {
                    fde *tmp = a[i];
                    a[i] = a[2 * i + 2];
                    a[2 * i + 2] = tmp;
                } while (0);
                i = 2 * i + 2;
            } else if (fde_compare(a[2 * i + 1], a[i]) > 0) {
                do {
                    fde *tmp = a[i];
                    a[i] = a[2 * i + 1];
                    a[2 * i + 1] = tmp;
                } while (0);
                i = 2 * i + 1;
            } else
                break;
        }
    }
    while (n > 1) {

        n--;
        do {
            fde *tmp = a[0];
            a[0] = a[n];
            a[n] = tmp;
        } while (0);
        for (i = 0; 2 * i + 1 < n;) {
            if (2 * i + 2 < n && fde_compare(a[2 * i + 2], a[2 * i + 1]) > 0 &&
                fde_compare(a[2 * i + 2], a[i]) > 0) {
                do {
                    fde *tmp = a[i];
                    a[i] = a[2 * i + 2];
                    a[2 * i + 2] = tmp;
                } while (0);
                i = 2 * i + 2;
            } else if (fde_compare(a[2 * i + 1], a[i]) > 0) {
                do {
                    fde *tmp = a[i];
                    a[i] = a[2 * i + 1];
                    a[2 * i + 1] = tmp;
                } while (0);
                i = 2 * i + 1;
            } else
                break;
        }
    }
}
fde **func_001ABCF0(fde_accumulator *accu, size_t count)

{
    if (accu->linear.array && accu->linear.count != count)
        func_001AD608();

    if (accu->erratic.array) {
        fde_split(&accu->linear, &accu->erratic);
        if (accu->linear.count + accu->erratic.count != count)
            func_001AD608();
        frame_heapsort(&accu->erratic);
        func_001ABBF8(&accu->linear, &accu->erratic);
        func_001ADBC8(accu->erratic.array);
    } else {

        frame_heapsort(&accu->linear);
    }
    return accu->linear.array;
}
