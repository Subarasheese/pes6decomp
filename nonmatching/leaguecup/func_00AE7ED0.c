/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern u32 func_00B10D20(void);
M2C_UNK func_001D7A20(void *, s32 *, M2C_UNK);      /* extern */
M2C_UNK func_00972F70(void *, M2C_UNK, s32, s32 *); /* extern */
void *func_00973CD0(s32, M2C_UNK);                  /* extern */
extern void *D_003E77B0;
extern char D_00591C09[];

void func_00AE7ED0(void) {
    s32 sp40;
    s32 sp44;
    s32 *var_v1;
    s32 temp_v1;
    s32 var_s2;
    s32 var_v0;
    u32 temp_v0;
    void *temp_s1;

    var_v0 = 0x10;
    var_v1 = &sp40;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_v0 = func_00B10D20();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0x44) = NULL;
        temp_v1 = func_00226710() & 0xFF;
        switch (temp_v1) {                          /* switch 1; irregular */
        case 0x3A:                                  /* switch 1 */
            var_s2 = 0x4E77;
            break;
        case 0x4:                                   /* switch 1 */
            var_s2 = 0x4E58;
            break;
        case 0x3:                                   /* switch 1 */
            var_s2 = 0x4E56;
            break;
        case 0x2:                                   /* switch 1 */
            var_s2 = 0x4E54;
            break;
        case 0xA:                                   /* switch 1 */
            var_s2 = 0x4E5A;
            break;
        case 0x9:                                   /* switch 1 */
            var_s2 = 0x4E73;
            break;
        case 0x1B:                                  /* switch 1 */
            var_s2 = 0x4F85;
            break;
        case 0x1A:                                  /* switch 1 */
            var_s2 = 0x4F83;
            break;
        case 0x19:                                  /* switch 1 */
            var_s2 = 0x4F68;
            break;
        case 0x18:                                  /* switch 1 */
            var_s2 = 0x4F66;
            break;
        case 0x17:                                  /* switch 1 */
            var_s2 = 0x4F6B;
            break;
        case 0x16:                                  /* switch 1 */
            var_s2 = 0x4F69;
            break;
        case 0x15:                                  /* switch 1 */
            var_s2 = 0x4F8A;
            break;
        case 0x14:                                  /* switch 1 */
            var_s2 = 0x4F88;
            break;
        case 0x13:                                  /* switch 1 */
            var_s2 = 0x4F63;
            break;
        case 0x12:                                  /* switch 1 */
            var_s2 = 0x4F60;
            break;
        case 0x11:                                  /* switch 1 */
            var_s2 = 0x4F73;
            break;
        case 0xF:                                   /* switch 1 */
            var_s2 = 0x4F71;
            break;
        case 0xE:                                   /* switch 1 */
            var_s2 = 0x4F70;
            break;
        case 0xD:                                   /* switch 1 */
            var_s2 = 0x4F6E;
            break;
        default:                                    /* switch 1 */
            var_s2 = -1;
            break;
        case 0xB:                                   /* switch 1 */
            var_s2 = 0x4F6E;
            break;
        case 0xC:                                   /* switch 1 */
            var_s2 = 0x4F70;
            break;
        case 0x10:                                  /* switch 1 */
            var_s2 = 0x4F73;
            break;
        case 0x0:                                   /* switch 1 */
            var_s2 = 0x4E73;
            break;
        case 0x1:                                   /* switch 1 */
            var_s2 = 0x4E5A;
            break;
        case 0x8:                                   /* switch 1 */
        case 0x7:                                   /* switch 1 */
        case 0x6:                                   /* switch 1 */
        case 0x5:                                   /* switch 1 */
            var_s2 = 0x4E75;
            break;
        }
        if (var_s2 != -1) {
            temp_s1 = func_00973CD0(M2C_FIELD(temp_v0, s32 *, 0), 0x35);
            switch ((*(u8 *)D_00591C09)) {                   /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                func_001D7D80(temp_s1, 0);
                break;
            case 2:                                 /* switch 2 */
                func_001D7D80(temp_s1, 1);
                break;
            }
            func_001D7A20(temp_s1, &sp40, 0xA);
            sp40 = 0;
            sp44 = 0;
            func_00972F70(temp_s1, 0xA, var_s2, &sp40);
            M2C_FIELD(temp_v0, void **, 0x44) = temp_s1;
            if (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8) {
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x44), 0);
            }
        }
    }
}
