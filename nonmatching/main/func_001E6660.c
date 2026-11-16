/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_001C7E10(s32, s32);                        /* extern */
extern s32 D_0052B120;
extern u8 *D_0052B124;
extern u8 *D_0052B128;

s32 func_001E6660(s32 arg0) {
    u8 *s2;
    s32 s1;
    u8 *n;
    s32 a0;

    s2 = NULL;
    if (arg0 == 0) {
        goto L1C0;
    }
    s1 = D_0052B120;
    if (s1 == 0) {
        s2 = NULL;
        goto L1B8;
    }
    s2 = D_0052B124;
L669C:
    a0 = *(s32 *)(s2 + 4);
    if (a0 == 0) {
        goto L1E0;
    }
    if (func_001C7E10(a0, arg0) != 0) {
        goto L1E0;
    }
L1B8:
    if (s2 == NULL) {
        goto L1F8;
    }
    goto L1C0;
L1E0:
    s1 -= 1;
    s2 += 8;
    if (s1 != 0) {
        goto L669C;
    }
    s2 = NULL;
    goto L1B8;
L1F8:
    n = D_0052B128;
    if (n == NULL) {
        s2 = NULL;
        goto L1748;
    }
L1708:
    s2 = *(u8 **)(n + 8);
L1710:
    if (func_001C7E10(*(s32 *)(s2 + 4), arg0) == 0) {
        goto L1748;
    }
    s2 += 8;
    if (*(s32 *)(s2 + 4) != 0) {
        goto L1710;
    }
    n = *(u8 **)(n + 4);
    if (n != NULL) {
        goto L1708;
    }
    s2 = NULL;
L1748:
    if (s2 == NULL) {
        s2 = NULL;
    }
L1C0:
    if (s2 == NULL) {
        return 0;
    }
    return *(s32 *)s2 & 0x7FFFFFFF;
}
