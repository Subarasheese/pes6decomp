/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001849E0(void);
extern void func_00190390(void);
extern void func_0018E280(void);
extern void func_001858E0(void);
extern void func_0018D4B0(void);
extern void func_0019C5F0(void);
extern void func_0018AE70(void);
M2C_UNK func_0018BA30();                            /* extern */
M2C_UNK func_0018C250();                            /* extern */
M2C_UNK func_001901F0(M2C_UNK);                     /* extern */
M2C_UNK func_00190820();                            /* extern */
M2C_UNK func_00193120();                            /* extern */
M2C_UNK func_001954E0();                            /* extern */
M2C_UNK func_00197B00();                            /* extern */
M2C_UNK func_00199440();                            /* extern */
M2C_UNK func_0019AAE0();                            /* extern */
M2C_UNK func_0019B750();                            /* extern */
M2C_UNK func_0019D800();                            /* extern */
M2C_UNK func_0019DFC0();                            /* extern */
extern char D_0051FF4F[];
extern char D_0051FFC8[];

void func_001867C0(s32 arg0) {
    if (arg0 & 1) {
        func_00193120();
    }
    if (arg0 & 2) {
        func_00197B00();
    }
    if (arg0 & 4) {
        func_001954E0();
    }
    if (arg0 & 8) {
        func_00199440();
    }
    if ((arg0 & 0x10) && ((*(u8 *)D_0051FF4F) != 0)) {
        func_00190390();
        func_001901F0(0);
    }
    if (arg0 & 0x20) {
        func_001858E0();
    }
    if (arg0 & 0x10000) {
        func_001849E0();
    }
    if (arg0 & 0x40) {
        func_0018D4B0();
    }
    if (arg0 & 0x80) {
        func_0018C250();
    }
    if (arg0 & 0x100) {
        func_0018E280();
    }
    if (arg0 & 0x200) {
        func_00190820();
    }
    if (arg0 & 0x400) {
        func_0018BA30();
    }
    if (arg0 & 0x800) {
        func_0019B750();
    }
    if (arg0 & 0x1000) {
        func_0019AAE0();
    }
    if (arg0 & 0x2000) {
        func_0019D800();
    }
    if (arg0 & 0x4000) {
        func_0019C5F0();
    }
    if (arg0 & 0x8000) {
        func_0019DFC0();
    }
    if (arg0 & 0x20000) {
        func_0018AE70();
    }
    (*(s32 *)D_0051FFC8) |= arg0;
}
