/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002291C0(void);
extern void * func_0022F150(void);
extern s32 func_00226710(void);
extern void func_002332F0(void);
s32 func_00228F20(u8);                              /* extern */
s32 func_00236DC0();                                /* extern */
M2C_UNK func_0098C5E0(u8);                          /* extern */
extern void *D_003E77B0;
extern void *D_003E77B4;
extern u8 *D_003E7B0C;
extern char D_00591BB4[];

void func_0098C700(void) {
    s32 temp_a0_2;
    s32 var_v1;
    u8 temp_a0;
    u8 temp_a1;
    void *temp_s0;

    temp_s0 = func_0022F150();
    if ((func_00236DC0() != 1) && (func_002291C0() == 1)) {
        temp_a1 = M2C_FIELD(D_003E77B0, u8 *, 0x24);
        if ((temp_a1 & 1) != 1) {
            M2C_FIELD(D_003E77B0, u8 *, 0x24) = (u8) ((temp_a1 & ~1) | (1 & 1));
            var_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x40;
            goto block_35;
        }
    }
    func_002332F0();
    temp_a0 = *D_003E7B0C;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (!(func_00228F20(M2C_FIELD(D_003E77B4, u8 *, 0x71)) & 0xFF)) {
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x4000);
            var_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x2000;
block_35:
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = var_v1;
        } else {
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x4000);
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x80000);
            if (temp_s0 != NULL) {
                M2C_FIELD(temp_s0, u8 *, 0x13) = (u8) (*(u8 *)D_00591BB4);
                return;
            }
            return;
        }
        break;
    case 1:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
        func_0098C5E0(temp_a0);
        return;
    case 3:                                         /* switch 1 */
        temp_a0_2 = func_00226710() & 0xFF;
        switch (temp_a0_2) {                        /* switch 2; irregular */
        case 32:                                    /* switch 2 */
            if (!(func_00228F20(M2C_FIELD(D_003E77B4, u8 *, 0x81)) & 0xFF)) {
                var_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x2000;
            } else {
                var_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x4000;
            }
            goto block_35;
        case 28:                                    /* switch 2 */
            if (!(func_00228F20(M2C_FIELD(D_003E77B4, u8 *, 0x71)) & 0xFF)) {
                var_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x2000;
            } else {
                var_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x4000;
            }
            goto block_35;
        }
        break;
    }
}
