/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
extern void * func_0022F150(void);
M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002371F0(M2C_UNK);                     /* extern */
M2C_UNK func_00AFF3C0();                            /* extern */
extern char D_00B8C400[];

void func_00AFCA20(void) {
    void *temp_s1;
    void *temp_s2;

    temp_s2 = func_00228A80();
    temp_s1 = func_0022F150();
    if ((temp_s2 != NULL) && (temp_s1 != NULL) && (((void *)D_00B8C400) != NULL)) {
        func_001C48E8(((void *)D_00B8C400), 0, 0x14);
        M2C_FIELD(((void *)D_00B8C400), u8 *, 0) = (u8) M2C_FIELD(temp_s1, u8 *, 8);
        M2C_FIELD(((void *)D_00B8C400), u8 *, 1) = (u8) M2C_FIELD(temp_s1, u8 *, 7);
        func_001C4730(((void *)D_00B8C400) + 4, temp_s2 + 0xA680, 0xC);
        func_001C4730(((void *)D_00B8C400) + 0x10, temp_s2 + 0x325AC, 2);
        func_00AFF3C0();
        func_002371F0(0);
    }
}
