/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, zutil.c (zcfree).
 * See LICENSES/zlib-1.1.4.txt. */
/* zutil.c -- target dependent utility functions for the compression library
 * Copyright (C) 1995-2002 Jean-loup Gailly.
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
#include "pes6/zlib_types.h"

extern void func_001C0290(void *);

void func_001297E0(voidpf opaque, voidpf ptr) {
    func_001C0290(ptr);
    if (opaque)
        return;
}
