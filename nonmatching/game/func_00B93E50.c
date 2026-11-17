/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBCAD1[];
extern char D_00CBCD8C[];
extern char D_00CBCD80[];
extern char D_00CBCC70[];

void func_00B89C70(s32 a);
char **func_00B2A420(s32 a);

void func_00B93E50(s32 a0, u32 thresh) {
    s32 s2;
    s32 i;
    u8 c;
    char *p;
    char **e;

    c = *(u8 *)D_00CBCAD1;
    if (c == 6) {
        s2 = 0x2D;
    } else if (c == 8) {
        s2 = 0x37;
    } else if (c == 9) {
        s2 = 0x41;
    } else if (c == 7) {
        s2 = 0x52;
    }
    func_00B89C70(a0);
    *(u8 *)D_00CBCD8C = 0;
    i = 0;
    if (*(u8 *)D_00CBCD80 > 0) {
        p = D_00CBCC70;
        for (;;) {
            e = func_00B2A420(*(u8 *)(p + 0x113));
            if (*(u8 *)(p + 0x113) == 0) {
                break;
            }
            *(u8 *)D_00CBCD8C = *(u8 *)D_00CBCD8C + 1;
            if (*(u32 *)(e[1] + 0x38) >= thresh) {
                *(u8 *)D_00CBCD8C = *(u8 *)D_00CBCD8C - 1;
                *(s16 *)(e[0] + 0x18) = s2;
            }
            i++;
            if (i >= *(u8 *)D_00CBCD80) {
                break;
            }
            p++;
        }
    }
}
