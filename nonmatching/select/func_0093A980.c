/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4CE0(void *, s8);
extern s32 func_002F3A00(void *);
extern void func_002F4E10(void *);
extern void func_001B4D20(void *);
extern s32 func_002F39A0(void *);
void *func_001B4D80(s32, s32, s32, s32, s32, s32, s32, s32, M2C_UNK, M2C_UNK); /* extern */
s8 func_0023F240(s32, s8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002F2ED0(void *);                      /* extern */
s32 func_002F3850(void *, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_002F4980(void *, s8 *);                /* extern */
void *func_002F4E90(M2C_UNK);                       /* extern */
extern s8 D_003E7B7C;
extern s32 D_003E7B80;
extern s32 D_003EAB50;
extern void *D_003EAB54;
extern void *D_003EAB58;
extern char D_008DC230[];
extern char D_008DC270[];
extern char D_0095DDB8[];
extern char D_0095DDBC[];
extern char D_0095DDC0[];
extern char D_0095DDC8[];
extern char D_0095DDCC[];
extern char D_0095DDD0[];
extern char D_0095DDD8[];
extern char D_0095DDDC[];
extern char D_0095DDE0[];

s32 func_0093A980(void) {
    s8 sp20;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp8C;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    s32 spA0;
    s32 var_v0;
    s8 *var_v1;
    s8 temp_s0;
    s8 temp_v0_2;
    void *temp_v0;

    var_v1 = &sp20;
    temp_s0 = D_003E7B7C;
    var_v0 = 0xF0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    switch (D_003EAB50) {                           /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        if (func_002F3850(D_003EAB54, (*(s32 *)D_0095DDDC), (*(s32 *)D_0095DDD8), (*(s32 *)D_0095DDD0), (*(s32 *)D_0095DDCC), (*(s32 *)D_0095DDC8), (*(s32 *)D_0095DDC0), (*(s32 *)D_0095DDBC)) == 4) {
            func_002F4E10(D_003EAB54);
            func_001B4D20(D_003EAB58);
            D_003EAB54 = NULL;
            D_003EAB50 = 0;
            return D_003E7B80;
        }
    default:                                        /* switch 1 */
block_27:
        if (D_003EAB54 != NULL) {
            func_002F4CE0(D_003EAB54, D_003E7B7C);
            func_002F2ED0(D_003EAB54);
        }
        return -1;
    case 0:                                         /* switch 1 */
        sp2C = (*(s32 *)D_0095DDB8);
        sp30 = (*(s32 *)D_0095DDBC);
        sp34 = (*(s32 *)D_0095DDC0);
        sp8C = (*(s32 *)D_0095DDC8);
        sp90 = (*(s32 *)D_0095DDCC);
        sp94 = (*(s32 *)D_0095DDD0);
        sp98 = (*(s32 *)D_0095DDD8);
        sp9C = (*(s32 *)D_0095DDDC);
        spA0 = (*(s32 *)D_0095DDE0);
        D_003E7B7C = 1;
        D_003EAB58 = func_001B4D80((*(s32 *)D_0095DDE0), (*(s32 *)D_0095DDDC), (*(s32 *)D_0095DDD8), (*(s32 *)D_0095DDD0), (*(s32 *)D_0095DDCC), (*(s32 *)D_0095DDC8), (*(s32 *)D_0095DDC0), (*(s32 *)D_0095DDBC), 0x44898000, 0x44802000);
        temp_v0 = func_002F4E90(0x17);
        D_003EAB54 = temp_v0;
        func_002F4980(temp_v0, &sp20);
        func_002F3A00(D_003EAB54);
        D_003EAB50 += 1;
        goto block_27;
    case 1:                                         /* switch 1 */
        if (((*(s32 *)D_008DC230) != 0x20) && ((*(s32 *)D_008DC230) != 0x10)) {

        } else {
            temp_v0_2 = func_0023F240((*(s32 *)D_008DC230) & 0xFFFF, D_003E7B7C, 0, 1, (*(s32 *)D_0095DDCC), (*(s32 *)D_0095DDC8), (*(s32 *)D_0095DDC0), (*(s32 *)D_0095DDBC));
            D_003E7B7C = temp_v0_2;
            if (((s64) ((s64) temp_s0 << 0x38) >> 0x38) != ((s64) ((s64) temp_v0_2 << 0x38) >> 0x38)) {
                func_0026E840(0x8400F802);
            }
        }
        switch ((*(s32 *)D_008DC270)) {                       /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            func_0026E840(0x84008401);
            func_002F39A0(D_003EAB54);
            D_003E7B80 = 1;
            D_003EAB50 += 1;
            break;
        case 1:                                     /* switch 2 */
            func_0026E840(0x84028400);
            func_002F39A0(D_003EAB54);
            D_003E7B80 = (s32) D_003E7B7C;
            D_003EAB50 += 1;
            break;
        }
        goto block_27;
    }
}
