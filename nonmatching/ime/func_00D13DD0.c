/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
extern void func_001EF900(void *, s8);
extern int func_00363790(void);
extern void func_001B4D20(void *);
extern void func_001DF820(void *, s32);
extern void func_001D7D60(void *, s8);
extern void func_001B7B20(void);
extern void func_001DF4F0(void *, s8);
s32 func_001C80F0(M2C_UNK *, s32, u8, s32, u8);     /* extern */
M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
extern void *D_003EB354;
extern void *D_003EB358;
extern void *D_003EB35C;
extern void *D_003EB360;
extern void *D_003EB364;
extern char D_00D20008[];
extern void *D_00D39564;
extern void *D_00D39568;
extern void *D_00D3956C;
extern void *D_00D39578;
extern void *D_00D3957C;
extern char D_00D395A4[];
extern char D_00D395A5[];
extern void *D_00D395DC;
extern char D_00D39A90[];
extern char D_00D39AAC[];
extern char D_00D39AB4[];

s32 func_00D13DD0(void) {
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v0;
    u8 temp_a2;
    u8 temp_a4;
    void *temp_s1;

    temp_s1 = D_003EB364;
    temp_v0 = 0 & 1;
    temp_a3 = temp_v0 << 5;
    (*(u8 *)D_00D395A4) = ((*(u8 *)D_00D395A4) & ~0x10) | (temp_v0 * 0x10);
    temp_a4 = (*(u8 *)D_00D395A4);
    (*(s32 *)D_00D39AB4) = 0;
    temp_a2 = (temp_a4 & ~0x20) | temp_a3;
    (*(u8 *)D_00D395A4) = temp_a2;
    temp_a1 = (*(s32 *)D_00D39AAC);
    (*(s32 *)D_00D39AAC) = temp_a1 & ~0x40;
    if (func_001C80F0(((void *)D_00D20008), temp_a1, temp_a2, temp_a3, temp_a4) == 0) {

    }
    func_001DF820(temp_s1, (s32) ((void *)D_00D20008));
    func_001EF900(D_003EB358, 0);
    func_001EDAE0(D_003EB35C, 0);
    (*(u8 *)D_00D395A4) = ((*(u8 *)D_00D395A4) & ~8) | ((0 & 1) * 8);
    if (((*(u8 *)D_00D395A4) & 1) == 1) {
        if (((u64) ((s64) (*(u8 *)D_00D395A4) << 0x38) >> 0x3F) == 0) {
            func_001D7D60(D_00D39578, 0);
        }
    } else {
        func_001D7D60(D_00D39578, 0);
    }
    if (!((*(u8 *)D_00D395A5) & 1)) {
        func_001D7D60(D_00D39564, 0);
        func_001D7D60(D_00D39568, 0);
        func_002DF8E0((*(s32 *)D_00D39A90), 0);
    }
    if (((u64) ((s64) (*(u8 *)D_00D395A4) << 0x39) >> 0x3F) != 0) {
        func_001B7B20();
    }
    func_001DF4F0(D_00D395DC, 0);
    func_001DF4F0(D_003EB364, 0);
    func_001DF4F0(D_003EB360, 0);
    func_001D7D60(D_00D3956C, 0);
    func_001D7D60(D_00D39578, 0);
    if (D_00D3957C != NULL) {
        func_001D7D60(D_00D3957C, 0);
    }
    func_001DF4F0(D_00D395DC, 0);
    (*(u8 *)D_00D395A4) = ((*(u8 *)D_00D395A4) & ~4) | ((0 & 1) * 4);
    if (D_003EB354 != NULL) {
        func_001B4D20(D_003EB354);
    }
    D_003EB354 = NULL;
    func_00363790();
    return 0;
}
