/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7C20(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D80(s32, M2C_UNK);                /* extern */
extern char D_00D00070[];
extern char D_00D00078[];
extern char D_00D000B0[];

s32 func_00CF5D90(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;

    func_001D7D80((*(s32 *)D_00D00070), 0);
    func_001D7C20((*(s32 *)D_00D00070), 0);
    func_001D7D60((*(s32 *)D_00D00070), 0);
    func_001D7D80((*(s32 *)D_00D00078), 0);
    func_001D7C20((*(s32 *)D_00D00078), 1);
    func_001D7D60((*(s32 *)D_00D00078), 0);
    temp_s3 = arg0 & 0x10;
    if ((temp_s3 != 0) && (arg0 & ~0xA0)) {
        func_001D7D80((*(s32 *)D_00D00070), 0);
        func_001D7C20((*(s32 *)D_00D00070), 1);
        func_001D7D60((*(s32 *)D_00D00070), 1);
        (*(s32 *)D_00D000B0) = arg1;
    }
    temp_s2 = arg0 & 0x40;
    if ((temp_s2 != 0) && (arg0 & ~0xA0)) {
        func_001D7D80((*(s32 *)D_00D00070), 2);
        func_001D7C20((*(s32 *)D_00D00070), 1);
        func_001D7D60((*(s32 *)D_00D00070), 1);
        (*(s32 *)D_00D000B0) = arg1;
    }
    temp_s1 = arg0 & 0x80;
    if ((temp_s1 != 0) && (arg0 & ~0x50)) {
        func_001D7D80((*(s32 *)D_00D00070), 3);
        func_001D7C20((*(s32 *)D_00D00070), 1);
        func_001D7D60((*(s32 *)D_00D00070), 1);
        (*(s32 *)D_00D000B0) = arg1;
    }
    temp_s0 = arg0 & 0x20;
    if ((temp_s0 != 0) && (arg0 & ~0x50)) {
        func_001D7D80((*(s32 *)D_00D00070), 1);
        func_001D7C20((*(s32 *)D_00D00070), 1);
        func_001D7D60((*(s32 *)D_00D00070), 1);
        (*(s32 *)D_00D000B0) = arg1;
    }
    if ((temp_s0 != 0) && (temp_s3 != 0) && (arg0 & ~0xC0)) {
        func_001D7D80((*(s32 *)D_00D00070), 4);
        func_001D7C20((*(s32 *)D_00D00070), 1);
        func_001D7D60((*(s32 *)D_00D00070), 1);
        (*(s32 *)D_00D000B0) = arg1;
    }
    if ((temp_s0 != 0) && (temp_s2 != 0) && (arg0 & ~0x90)) {
        func_001D7D80((*(s32 *)D_00D00070), 5);
        func_001D7C20((*(s32 *)D_00D00070), 1);
        func_001D7D60((*(s32 *)D_00D00070), 1);
        (*(s32 *)D_00D000B0) = arg1;
    }
    if ((temp_s1 != 0) && (temp_s2 != 0) && (arg0 & ~0x30)) {
        func_001D7D80((*(s32 *)D_00D00070), 6);
        func_001D7C20((*(s32 *)D_00D00070), 1);
        func_001D7D60((*(s32 *)D_00D00070), 1);
        (*(s32 *)D_00D000B0) = arg1;
    }
    if ((temp_s1 != 0) && (temp_s3 != 0) && (arg0 & ~0x60)) {
        func_001D7D80((*(s32 *)D_00D00070), 7);
        func_001D7C20((*(s32 *)D_00D00070), 1);
        func_001D7D60((*(s32 *)D_00D00070), 1);
        (*(s32 *)D_00D000B0) = arg1;
    }
    if ((temp_s1 != 0) && (temp_s3 != 0) && (temp_s0 != 0) && (temp_s2 != 0)) {
        func_001D7D80((*(s32 *)D_00D00070), 8);
        func_001D7C20((*(s32 *)D_00D00070), 1);
        func_001D7D60((*(s32 *)D_00D00070), 1);
        (*(s32 *)D_00D000B0) = arg1;
    }
    if (arg0 & 0x100000) {
        func_001D7D80((*(s32 *)D_00D00078), 0);
        func_001D7C20((*(s32 *)D_00D00078), 1);
        func_001D7D60((*(s32 *)D_00D00078), 1);
        (*(s32 *)D_00D000B0) = arg1;
    }
    return 1;
}
