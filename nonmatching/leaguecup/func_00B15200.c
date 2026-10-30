/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229380(void);
extern void *D_003EAD74;

void func_00B15200(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;
    u8 *temp_v0;
    u8 temp_a1;
    u8 temp_a1_2;

    temp_v0 = func_00229380();
    if (D_003EAD74 != NULL) {
        temp_a0 = arg0 & 0xFF;
        M2C_FIELD(D_003EAD74, s8 *, 0) = 0;
        M2C_FIELD(D_003EAD74, s8 *, 1) = 1;
        switch (temp_a0) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            M2C_FIELD(D_003EAD74, s8 *, 2) = 0;
            temp_a1 = *temp_v0;
            switch (temp_a1) {                      /* switch 2; irregular */
            case 26:                                /* switch 2 */
                var_a0 = 0xF;
block_69:
                M2C_FIELD(D_003EAD74, s32 *, 0x7C) = var_a0;
                break;
            case 24:                                /* switch 2 */
                var_a0 = 0xD;
                goto block_69;
            case 22:                                /* switch 2 */
                var_a0 = 0xB;
                goto block_69;
            case 20:                                /* switch 2 */
                var_a0 = 9;
                goto block_69;
            case 18:                                /* switch 2 */
                var_a0 = 7;
                goto block_69;
            case 15:                                /* switch 2 */
                var_a0 = 4;
                goto block_69;
            case 13:                                /* switch 2 */
                var_a0 = 2;
                goto block_69;
            case 11:                                /* switch 2 */
                M2C_FIELD(D_003EAD74, s32 *, 0x7C) = 0;
                return;
            }
            break;
        case 1:                                     /* switch 1 */
            M2C_FIELD(D_003EAD74, s8 *, 2) = 1;
            temp_a1_2 = *temp_v0;
            switch (temp_a1_2) {                    /* switch 3; irregular */
            case 26:                                /* switch 3 */
                var_a0 = 0x10;
                goto block_69;
            case 24:                                /* switch 3 */
                var_a0 = 0xE;
                goto block_69;
            case 22:                                /* switch 3 */
                var_a0 = 0xC;
                goto block_69;
            case 20:                                /* switch 3 */
                var_a0 = 0xA;
                goto block_69;
            case 18:                                /* switch 3 */
                var_a0 = 8;
                goto block_69;
            case 15:                                /* switch 3 */
                var_a0 = 6;
                goto block_69;
            case 13:                                /* switch 3 */
                var_a0 = 3;
                goto block_69;
            case 11:                                /* switch 3 */
                M2C_FIELD(D_003EAD74, s32 *, 0x7C) = 1;
                return;
            }
            break;
        }
    }
}
