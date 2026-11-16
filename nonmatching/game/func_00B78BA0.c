/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s16 func_002928B0(s32);
extern s32 func_00292A30(void);
extern u8 D_005922E8[];
extern u8 D_005922E9[];
extern u32 D_00CB3300[];

s32 func_00B78BA0(void) {
    u8 sp44[2];
    u8 sp48[2];
    u8 sp4C[2];

    sp4C[0] = 0; sp4C[1] = 0;
    sp48[0] = 0; sp48[1] = 0;
    sp44[0] = 0; sp44[1] = 0;
    if (D_005922E8[0] == 0) {
        sp48[0] = func_002928B0(0);
        sp48[1] = func_002928B0(1);
        sp44[0] = *(s16 *) (((u8 *) D_00CB3300[0]) + 8);
        sp44[1] = *(s16 *) (((u8 *) D_00CB3300[0]) + 0x2FC);
        sp4C[0] = sp48[0] + sp44[0];
        sp4C[1] = sp48[1] + sp44[1];
        if (func_00292A30() == 0) {
            if (sp4C[0] == sp4C[1]) {
                sp4C[0] = *(s16 *) (((u8 *) D_00CB3300[0]) + 0xC);
                sp4C[1] = *(s16 *) (((u8 *) D_00CB3300[0]) + 0x300);
            }
        } else if (sp4C[0] == sp4C[1]) {
            sp4C[1] = sp48[1] + sp44[1] * 2;
            sp4C[0] = sp44[0] + sp48[0] * 2;
            if (sp4C[0] == sp4C[1]) {
                sp4C[0] = *(s16 *) (((u8 *) D_00CB3300[0]) + 0xC);
                sp4C[1] = *(s16 *) (((u8 *) D_00CB3300[0]) + 0x300);
            }
        }
        if (sp4C[1] < sp4C[0]) {
            return 0;
        }
        if (sp4C[0] < sp4C[1]) {
            return 1;
        }
        return 2;
    }
    return D_005922E9[0] != 0 ? 0 : 1;
}
