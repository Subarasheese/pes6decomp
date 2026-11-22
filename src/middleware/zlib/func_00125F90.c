/* compiler: mwcc-3.0.1b151 */
/* Adapted from zlib 1.1.4, inflate.c (inflate).
 * See LICENSES/zlib-1.1.4.txt. */
/* inflate.c -- zlib interface to inflate modules
 * Copyright (C) 1995-2002 Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h
 */
#include "pes6/zlib_types.h"

typedef uLong uLongf;
extern int func_00124680(inflate_blocks_statef *, z_streamp, int);
extern void func_00125770(inflate_blocks_statef *, z_streamp, uLongf *);
struct inflate_blocks_state {
    int dummy;
};
typedef enum {
    METHOD,
    FLAG,
    DICT4,
    DICT3,
    DICT2,
    DICT1,
    DICT0,
    BLOCKS,
    CHECK4,
    CHECK3,
    CHECK2,
    CHECK1,
    DONE,
    BAD
} inflate_mode;
struct internal_state {
    inflate_mode mode;
    union {
        uInt method;
        struct {
            uLong was;
            uLong need;
        } check;
        uInt marker;
    } sub;
    int nowrap;
    uInt wbits;
    inflate_blocks_statef *blocks;
};
/* "invalid window size" */ extern char D_003C58A0[20];
/* "need dictionary" */ extern char D_003C58C0[16];
/* "incorrect data check" */ extern char D_003C58D0[21];
/* "unknown compression method" */ extern char D_003C58F0[27];
/* "incorrect header check" */ extern char D_003C5910[23];

int func_00125F90(z_streamp z, int f) {
    int r;
    uInt b;
    if (((z == 0) || (z->state == 0)) || (z->next_in == 0))
        return -2;
    f = (f == 4) ? (-5) : (0);
    r = -5;
    while (1)
        switch (z->state->mode) {
        case METHOD: {
            if (z->avail_in == 0)
                return r;
            r = f;
        }
            if (((z->state->sub.method = (z->avail_in--, z->total_in++, *(z->next_in++))) & 0xf) !=
                8) {
                z->state->mode = BAD;
                z->msg = (char *)D_003C58F0;
                z->state->sub.marker = 5;
                break;
            }
            if (((z->state->sub.method >> 4) + 8) > z->state->wbits) {
                z->state->mode = BAD;
                z->msg = (char *)D_003C58A0;
                z->state->sub.marker = 5;
                break;
            }
            z->state->mode = FLAG;

        case FLAG: {
            if (z->avail_in == 0)
                return r;
            r = f;
        }
            b = (z->avail_in--, z->total_in++, *(z->next_in++));
            if (((z->state->sub.method << 8) + b) % 31) {
                z->state->mode = BAD;
                z->msg = (char *)D_003C5910;
                z->state->sub.marker = 5;
                break;
            };
            if (!(b & 0x20)) {
                z->state->mode = BLOCKS;
                break;
            }
            z->state->mode = DICT4;

        case DICT4: {
            if (z->avail_in == 0)
                return r;
            r = f;
        }
            z->state->sub.check.need = ((uLong)((z->avail_in--, z->total_in++, *(z->next_in++))))
                                       << 24;
            z->state->mode = DICT3;

        case DICT3: {
            if (z->avail_in == 0)
                return r;
            r = f;
        }
            z->state->sub.check.need += ((uLong)((z->avail_in--, z->total_in++, *(z->next_in++))))
                                        << 16;
            z->state->mode = DICT2;

        case DICT2: {
            if (z->avail_in == 0)
                return r;
            r = f;
        }
            z->state->sub.check.need += ((uLong)((z->avail_in--, z->total_in++, *(z->next_in++))))
                                        << 8;
            z->state->mode = DICT1;

        case DICT1: {
            if (z->avail_in == 0)
                return r;
            r = f;
        }
            z->state->sub.check.need += (uLong)((z->avail_in--, z->total_in++, *(z->next_in++)));
            z->adler = z->state->sub.check.need;
            z->state->mode = DICT0;
            return 2;

        case DICT0:
            z->state->mode = BAD;
            z->msg = (char *)D_003C58C0;
            z->state->sub.marker = 0;
            return -2;

        case BLOCKS:
            r = func_00124680(z->state->blocks, z, r);
            if (r == (-3)) {
                z->state->mode = BAD;
                z->state->sub.marker = 0;
                break;
            }
            if (r == 0)
                r = f;
            if (r != 1)
                return r;
            r = f;
            func_00125770(z->state->blocks, z, &z->state->sub.check.was);
            if (z->state->nowrap) {
                z->state->mode = DONE;
                break;
            }
            z->state->mode = CHECK4;

        case CHECK4: {
            if (z->avail_in == 0)
                return r;
            r = f;
        }
            z->state->sub.check.need = ((uLong)((z->avail_in--, z->total_in++, *(z->next_in++))))
                                       << 24;
            z->state->mode = CHECK3;

        case CHECK3: {
            if (z->avail_in == 0)
                return r;
            r = f;
        }
            z->state->sub.check.need += ((uLong)((z->avail_in--, z->total_in++, *(z->next_in++))))
                                        << 16;
            z->state->mode = CHECK2;

        case CHECK2: {
            if (z->avail_in == 0)
                return r;
            r = f;
        }
            z->state->sub.check.need += ((uLong)((z->avail_in--, z->total_in++, *(z->next_in++))))
                                        << 8;
            z->state->mode = CHECK1;

        case CHECK1: {
            if (z->avail_in == 0)
                return r;
            r = f;
        }
            z->state->sub.check.need += (uLong)((z->avail_in--, z->total_in++, *(z->next_in++)));
            if (z->state->sub.check.was != z->state->sub.check.need) {
                z->state->mode = BAD;
                z->msg = (char *)D_003C58D0;
                z->state->sub.marker = 5;
                break;
            };
            z->state->mode = DONE;

        case DONE:
            return 1;

        case BAD:
            return -3;

        default:
            return -2;
        }
}
