/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, void *); /* extern */
M2C_UNK func_00821790(u8);                          /* extern */
M2C_UNK func_008439C0(M2C_UNK, M2C_UNK);            /* extern */
s8 func_00964A60(u8);                               /* extern */
s8 func_00964A90(u8);                               /* extern */
s8 func_00964AE0(u8);                               /* extern */
u8 func_00964B90(M2C_UNK);                          /* extern */
u8 func_00964BB0();                                 /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009CACA0();                            /* extern */
extern char D_00814FB0[];
extern char D_00A02EB0[];
extern void *D_00A7DDA0;

void func_009CB7A0(void) {
    void *temp_v0;

    if (D_00A7DDA0 == NULL) {
        temp_v0 = func_0099C7E0(0xD);
        D_00A7DDA0 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s8 *, 3) = 1;
            M2C_FIELD(D_00A7DDA0, s8 *, 4) = 1;
            M2C_FIELD(D_00A7DDA0, u8 *, 2) = func_00964B90(1);
            M2C_FIELD(D_00A7DDA0, s8 *, 7) = func_00964A90(M2C_FIELD(D_00A7DDA0, u8 *, 2));
            M2C_FIELD(D_00A7DDA0, s8 *, 8) = func_00964A60(M2C_FIELD(D_00A7DDA0, u8 *, 2));
            M2C_FIELD(D_00A7DDA0, s8 *, 9) = func_00964AE0(M2C_FIELD(D_00A7DDA0, u8 *, 2));
            M2C_FIELD(D_00A7DDA0, u8 *, 5) = func_00964BB0();
            M2C_FIELD(D_00A7DDA0, s8 *, 0xA) = 1;
            func_008157A0(((void *)D_00814FB0), ((void *)D_00814FB0), ((void *)D_00A02EB0), 1, D_00A7DDA0);
            func_009CACA0();
            func_0099C730(0x01FC003B);
            func_00821790(M2C_FIELD(D_00A7DDA0, u8 *, 5));
            func_008439C0(3, 0xEA60);
        }
    }
}
