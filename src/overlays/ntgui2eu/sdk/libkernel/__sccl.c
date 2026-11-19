/* compiler: ee-gcc-2.96-G0 */
/* newlib 1.9.0, libc/stdio/vfscanf.c. See THIRD_PARTY.md. */
/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 *	@(#)stdio.h	5.3 (Berkeley) 3/15/86
 */

char *__sccl(char *tab, char *fmt)
{
    int c, n, v;

    c = *fmt++;
    if (c == '^') {
        v = 1;
        c = *fmt++;
    } else {
        v = 0;
    }
    for (n = 0; n < 256; n++)
        tab[n] = v;
    if (c == 0)
        return fmt - 1;

    v = 1 - v;
    for (;;) {
        tab[c] = v;
    doswitch:
        n = *fmt++;
        switch (n) {
        case 0:
            return fmt - 1;
        case '-':
            n = *fmt;
            if (n == ']' || n < c) {
                c = '-';
                break;
            }
            fmt++;
            do {
                tab[++c] = v;
            } while (c < n);
            /* A chained range such as a-c-e extends from the previous end. */
            goto doswitch;
        case ']':
            return fmt;
        default:
            c = n;
            break;
        }
    }
}
