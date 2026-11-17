/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
s32 func_00292440(s32, s32);                        /* extern */
s32 func_00292660(s32, M2C_UNK);                    /* extern */
extern char D_003B72A0[];
extern char D_003B72A4[];
extern char D_003B72A8[];
extern char D_003B72AC[];
extern char D_003B72B0[];
extern char D_003B72B4[];
extern char D_003B72B8[];
extern char D_003B72BC[];
extern char D_003B72C0[];
extern char D_003B72C4[];
extern char D_003B72C8[];
extern char D_003B72CC[];
extern char D_00591C09[];

s32 func_00323E50(void *arg0) {
    s32 tbl[12];
    s32 *p;
    s32 i;
    s32 j;
    s32 v;
    u8 *dst;

    tbl[0] = (*(s32 *)D_003B72A0);
    tbl[1] = (*(s32 *)D_003B72A4);
    tbl[2] = (*(s32 *)D_003B72A8);
    tbl[3] = (*(s32 *)D_003B72AC);
    tbl[4] = (*(s32 *)D_003B72B0);
    tbl[5] = (*(s32 *)D_003B72B4);
    tbl[6] = (*(s32 *)D_003B72B8);
    tbl[7] = (*(s32 *)D_003B72BC);
    tbl[8] = (*(s32 *)D_003B72C0);
    tbl[9] = (*(s32 *)D_003B72C4);
    tbl[10] = (*(s32 *)D_003B72C8);
    tbl[11] = (*(s32 *)D_003B72CC);
    dst = (u8 *)arg0;
    for (i = 0; i < 2; i++, dst += 4) {
        *(s32 *)(dst + 0x40) = 0xE;
        if ((func_00309420() == 0) && ((*(u8 *)D_00591C09) != 0)) {
            p = tbl;
            for (j = 0; j < 6; j++, p += 2) {
                if (func_00292440(i, p[0]) != 0) {
                    if ((*(u8 *)D_00591C09) == 0xE) {
                        v = p[0];
                        if (v == 4) {
                            v = 6;
                        } else if (v == 1) {
                            v = 0xD;
                        } else if (v == 2) {
                            v = 0xC;
                        } else {
                            v = p[1];
                        }
                    } else {
                        v = p[1];
                    }
                    *(s32 *)(dst + 0x40) = v;
                }
            }
            if (((func_00292660(i, 4) & 0xFF) == 3) || ((func_00292660(i, 0) & 0xFF) == 3)) {
                *(s32 *)(dst + 0x40) = 9;
            } else if (((func_00292660(i, 1) & 0xFF) == 3) || ((func_00292660(i, 2) & 0xFF) == 3)) {
                if ((*(u8 *)D_00591C09) == 0xE) {
                    *(s32 *)(dst + 0x40) = 0xA;
                }
            } else if ((func_00292660(i, 4) & 0xFF) == 3) {
                *(s32 *)(dst + 0x40) = 0xA;
            } else if ((func_00292660(i, 4) & 0xFF) == 1) {
                *(s32 *)(dst + 0x40) = 0xB;
            }
        }
    }
    return 1;
}
