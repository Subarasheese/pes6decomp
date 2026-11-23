/* compiler: mwcc-3.0.3 */
#include "types.h"
extern void func_001C4730(void *, s8 *, s32);
extern void func_001C48E8(void *, s32, s32);
extern void func_00C13B90(void *);
extern void *D_003EA7C0;
extern s8 D_00C9F200[];
extern char D_00CBFAA0[];
extern char D_00CCACC4[];
extern char D_00CCAD44[];
void func_00C13A20(void) {
    s8 defaults[0x23];
    s32 remaining;
    s8 *dest;
    s8 *src = D_00C9F200;
    dest = defaults;
    remaining = 0x23;
    do {
        remaining -= 1;
        *dest = *src;
        src++;
        dest++;
    } while (remaining > 0);
    D_003EA7C0 = D_00CBFAA0;
    func_001C48E8(D_00CBFAA0, 0, 0xB2B0);
    func_001C4730(D_00CCACC4, defaults, 0x23);
    func_00C13B90(D_00CCAD44);
}
