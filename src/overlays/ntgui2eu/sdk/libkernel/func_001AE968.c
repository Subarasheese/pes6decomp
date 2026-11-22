/* compiler: ee-gcc-2.96-G0 */
/* newlib 1.9.0, libc/stdlib/qsort.c. See THIRD_PARTY.md. */
/*-
 * Copyright (c) 1992, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

typedef unsigned int size_t;
static inline char *med3(char *, char *, char *, int (*)(const void *, const void *));
static inline void swapfunc(char *, char *, int, int);

static inline void

swapfunc(char *a,

         char *b,

         int n,

         int swaptype)

{
    if (swaptype <= 1) {
        long i = (n) / sizeof(long);
        register long *pi = (long *)(a);
        register long *pj = (long *)(b);
        do {
            register long t = *pi;
            *pi++ = *pj;
            *pj++ = t;
        } while (--i > 0);
    } else {
        long i = (n) / sizeof(char);
        register char *pi = (char *)(a);
        register char *pj = (char *)(b);
        do {
            register char t = *pi;
            *pi++ = *pj;
            *pj++ = t;
        } while (--i > 0);
    }
}

static inline char *

med3(char *a,

     char *b,

     char *c,

     int (*cmp)(const void *, const void *))

{
    return cmp(a, b) < 0 ? (cmp(b, c) < 0 ? b : (cmp(a, c) < 0 ? c : a))
                         : (cmp(b, c) > 0 ? b : (cmp(a, c) < 0 ? a : c));
}

void

func_001AE968(void *a ,

        size_t n ,

        size_t es ,

        int (*cmp)(const void *, const void *))

{
    char *pa, *pb, *pc, *pd, *pl, *pm, *pn;
    int d, r, swaptype, swap_cnt;

loop:
    swaptype = ((char *)a - (char *)0) % sizeof(long) || es % sizeof(long) ? 2
               : es == sizeof(long)                                        ? 0
                                                                           : 1;
    ;
    swap_cnt = 0;
    if (n < 7) {
        for (pm = (char *)a + es; pm < (char *)a + n * es; pm += es)
            for (pl = pm; pl > (char *)a && cmp(pl - es, pl) > 0; pl -= es)
                if (swaptype == 0) {
                    long t = *(long *)(pl);
                    *(long *)(pl) = *(long *)(pl - es);
                    *(long *)(pl - es) = t;
                } else
                    swapfunc(pl, pl - es, es, swaptype);
        return;
    }
    pm = (char *)a + (n / 2) * es;
    if (n > 7) {
        pl = a;
        pn = (char *)a + (n - 1) * es;
        if (n > 40) {
            d = (n / 8) * es;
            pl = med3(pl, pl + d, pl + 2 * d, cmp);
            pm = med3(pm - d, pm, pm + d, cmp);
            pn = med3(pn - 2 * d, pn - d, pn, cmp);
        }
        pm = med3(pl, pm, pn, cmp);
    }
    if (swaptype == 0) {
        long t = *(long *)(a);
        *(long *)(a) = *(long *)(pm);
        *(long *)(pm) = t;
    } else
        swapfunc(a, pm, es, swaptype);
    pa = pb = (char *)a + es;

    pc = pd = (char *)a + (n - 1) * es;
    for (;;) {
        while (pb <= pc && (r = cmp(pb, a)) <= 0) {
            if (r == 0) {
                swap_cnt = 1;
                if (swaptype == 0) {
                    long t = *(long *)(pa);
                    *(long *)(pa) = *(long *)(pb);
                    *(long *)(pb) = t;
                } else
                    swapfunc(pa, pb, es, swaptype);
                pa += es;
            }
            pb += es;
        }
        while (pb <= pc && (r = cmp(pc, a)) >= 0) {
            if (r == 0) {
                swap_cnt = 1;
                if (swaptype == 0) {
                    long t = *(long *)(pc);
                    *(long *)(pc) = *(long *)(pd);
                    *(long *)(pd) = t;
                } else
                    swapfunc(pc, pd, es, swaptype);
                pd -= es;
            }
            pc -= es;
        }
        if (pb > pc)
            break;
        if (swaptype == 0) {
            long t = *(long *)(pb);
            *(long *)(pb) = *(long *)(pc);
            *(long *)(pc) = t;
        } else
            swapfunc(pb, pc, es, swaptype);
        swap_cnt = 1;
        pb += es;
        pc -= es;
    }
    if (swap_cnt == 0) {
        for (pm = (char *)a + es; pm < (char *)a + n * es; pm += es)
            for (pl = pm; pl > (char *)a && cmp(pl - es, pl) > 0; pl -= es)
                if (swaptype == 0) {
                    long t = *(long *)(pl);
                    *(long *)(pl) = *(long *)(pl - es);
                    *(long *)(pl - es) = t;
                } else
                    swapfunc(pl, pl - es, es, swaptype);
        return;
    }

    pn = (char *)a + n * es;
    r = (pa - (char *)a) < (pb - pa) ? pa - (char *)a : pb - pa;
    if ((r) > 0)
        swapfunc(a, pb - r, r, swaptype);
    r = (pd - pc) < (pn - pd - es) ? pd - pc : pn - pd - es;
    if ((r) > 0)
        swapfunc(pb, pn - r, r, swaptype);
    if ((r = pb - pa) > es)
        func_001AE968(a, r / es, es, cmp);
    if ((r = pd - pc) > es) {

        a = pn - r;
        n = r / es;
        goto loop;
    }
}
