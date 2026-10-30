/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F3A80(void *);
extern u32 func_00B447A0(void);
s32 func_002F3850(void *);                          /* extern */
M2C_UNK func_002F46F0(void *, M2C_UNK *);           /* extern */
extern char D_00B800E0[];
extern char D_00B80210[];
extern char D_00B80340[];
extern char D_00B80470[];

s32 func_00B3DBA0(s32 arg0) {
    s32 temp_v0_2;
    u32 temp_v0;
    void *temp_a0;

    temp_v0 = func_00B447A0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, void **, 0x6C4);
        if (temp_a0 == NULL) {
            return 0;
        }
        temp_v0_2 = func_002F3850(temp_a0);
        switch (temp_v0_2) {                        /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            return 0;
        case 3:                                     /* switch 1 */
            return 0;
        default:                                    /* switch 1 */
            switch (arg0) {                         /* switch 2; irregular */
            case 3:                                 /* switch 2 */
                func_002F46F0(M2C_FIELD(temp_v0, void **, 0x6C4), ((void *)D_00B80470));
block_27:
                func_002F3A80(M2C_FIELD(temp_v0, void **, 0x6C4));
                return 1;
            case 2:                                 /* switch 2 */
                func_002F46F0(M2C_FIELD(temp_v0, void **, 0x6C4), ((void *)D_00B800E0));
                goto block_27;
            case 0:                                 /* switch 2 */
                func_002F46F0(M2C_FIELD(temp_v0, void **, 0x6C4), ((void *)D_00B80340));
                goto block_27;
            case 1:                                 /* switch 2 */
                func_002F46F0((void *)1, ((void *)D_00B80210));
                goto block_27;
            default:                                /* switch 2 */
                return 0;
            }
            break;
        }
    } else {
        return 0;
    }
}
