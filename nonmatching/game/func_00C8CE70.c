/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern s32 func_0021DF90(s32);
extern void func_001F04F0(s32, void *);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001D5EE0(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
M2C_UNK func_0084A620(M2C_UNK);                     /* extern */
M2C_UNK func_00C8E380(s32, s32, void *, M2C_UNK, s8, s32); /* extern */
extern char D_00591A90[];
extern char D_00591C09[];
extern char D_00CA8958[];
extern char D_00CCD570[];
extern char D_00CCD88D[];
extern char D_00CCD88F[];

void func_00C8CE70(void) {
    M2C_UNK *var_v1;
    s32 temp_a1;
    s32 var_a0;
    s32 var_a5;
    s8 temp_a1_2;
    s8 var_a4;
    void *temp_a2;
    void *temp_a4;

    var_a0 = 0;
    var_v1 = ((void *)D_00591A90);
    do {
        var_a5 = 0;
loop_2:
        temp_a4 = var_v1 + var_a5;
        M2C_FIELD(temp_a4, s8 *, 0x27) = (s8) (0xA - var_a5);
        M2C_FIELD(temp_a4, s8 *, 0x28) = (s8) (0xA - (var_a5 + 1));
        M2C_FIELD(temp_a4, s8 *, 0x29) = (s8) (0xA - (var_a5 + 2));
        M2C_FIELD(temp_a4, s8 *, 0x2A) = (s8) (0xA - (var_a5 + 3));
        temp_a1_2 = 0xA - (var_a5 + 4);
        var_a5 += 5;
        M2C_FIELD(temp_a4, s8 *, 0x2B) = temp_a1_2;
        if (var_a5 < 6) {
            goto loop_2;
        }
        M2C_FIELD((var_v1 + var_a5), s8 *, 0x27) = (s8) (0xA - var_a5);
        var_a4 = 0xB;
loop_4:
        temp_a2 = var_v1 + var_a4;
        M2C_FIELD(temp_a2, s8 *, 0x27) = var_a4;
        M2C_FIELD(temp_a2, s8 *, 0x28) = (s8) (var_a4 + 1);
        M2C_FIELD(temp_a2, s8 *, 0x29) = (s8) (var_a4 + 2);
        M2C_FIELD(temp_a2, s8 *, 0x2A) = (s8) (var_a4 + 3);
        M2C_FIELD(temp_a2, s8 *, 0x2B) = (s8) (var_a4 + 4);
        M2C_FIELD(temp_a2, s8 *, 0x2C) = (s8) (var_a4 + 5);
        M2C_FIELD(temp_a2, s8 *, 0x2D) = (s8) (var_a4 + 6);
        var_a4 += 7;
        if (var_a4 < 0x20) {
            goto loop_4;
        }
        var_a0 += 1;
        temp_a1 = var_a0 < 2;
        var_v1 += 0x8B;
    } while (temp_a1 != 0);
    func_00C8E380(var_a0, temp_a1, temp_a2, 0xB, var_a4, var_a5);
    if ((*(u8 *)D_00CCD88F) != 0) {
        func_001D5C40(0x1024E);
        func_001F0210(func_0021DF90(0xD));
    }
    func_001C48E8(((void *)D_00CCD570), 0, 0x330);
    (*(s8 *)D_00CCD88D) = (*(u8 *)D_00591C09) == 7;
    func_001F04F0(func_0021DF90(0xD), ((void *)D_00CA8958));
    func_001D5EE0(0x1024E, ((void *)D_00CA8958));
    (*(u8 *)D_00CCD88F) = 1;
    if (func_002DCA30() != 0) {
        func_0084A620(1);
    }
}
