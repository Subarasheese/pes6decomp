/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_0012DD30(s32, s32, s32, s32, s32 *, s32);
extern s32 func_00135080(s32);
extern void func_001405A8(void);
extern s32 func_00140658(void);

extern char D_005B3744[];
extern char D_005BEDB4[];
extern char D_011DC410[];

void func_00140820(void) {
    if ((*(s32 *)D_011DC410) < (*(s32 *)D_005BEDB4)) {
        func_00140658();
        return;
    }
    func_0012DD30(0, 0x1F4, 0xFA, func_00135080(0x32), (s32 *) func_001405A8, (*(s32 *)D_005B3744));
}
