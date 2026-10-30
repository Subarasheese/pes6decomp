/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_008F6C70();                                /* extern */
s32 func_008F6E60();                                /* extern */
s32 func_008F7060();                                /* extern */
s32 func_008F72A0();                                /* extern */
s32 func_008F7440(s32);                             /* extern */
s32 func_008F75A0();                                /* extern */
s32 func_008F7660(s32);                             /* extern */
s32 func_008F77A0(s32);                             /* extern */
extern char D_009083B8[];

s32 func_008F86F0(s32 arg0) {
    if (arg0 & 0x3F) {
        return func_008F77A0((*(s32 *)D_009083B8));
    }
    switch (arg0) {                                 /* irregular */
    case 0x1000:
    case 0x40:
        return func_008F7660((*(s32 *)D_009083B8));
    case 0x80:
        return func_008F75A0();
    case 0x400:
    case 0x200:
    case 0x100:
        return func_008F7440((*(s32 *)D_009083B8));
    case 0x2000:
        return func_008F72A0();
    case 0x4000:
        return func_008F7060();
    case 0x8000:
        return func_008F6E60();
    case 0x10000:
        return func_008F6C70();
    default:
        return 1;
    }
}
