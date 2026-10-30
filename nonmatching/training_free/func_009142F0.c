/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591DC4[];
extern char D_005926DE[];
extern char D_005926E0[];

s32 func_009142F0(void *arg0) {
    u8 temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0x208) != 0) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x1DD);
        switch (temp_v1) {                          /* irregular */
        case 39:
            if (((s32) M2C_FIELD(arg0, u8 *, 0) % (s32) (*(u8 *)D_005926DE)) == ((u32) (*(u32 *)D_00591DC4) % (u8) (*(u8 *)D_005926DE))) {
                return 1;
            }
            goto block_10;
        default:
        case 36:
            if (((s32) M2C_FIELD(arg0, u8 *, 0) % (s32) (*(u8 *)D_005926E0)) == ((u32) (*(u32 *)D_00591DC4) % (u8) (*(u8 *)D_005926E0))) {
                return 1;
            }
            goto block_10;
        }
    } else {
block_10:
        return 0;
    }
}
