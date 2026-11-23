/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 bytes[0x48];
} NetworkWork;
extern NetworkWork D_008B23B0[];
extern NetworkWork *D_003EA37C;
extern s32 D_003EA378;
extern void *func_001C48E8(void *, s32, s32);
extern void func_0087BE50(void), func_0087B680(void), func_0087B520(void), func_0087B4F0(s32);
extern void func_00C88EC0(u32, void (*)(void), void (*)(void));
extern void func_00C88DD0(u32, void (*)(s32), s32);
void func_0087B6B0(void) {
    D_003EA378 = 0;
    func_001C48E8(D_008B23B0, 0, sizeof(NetworkWork));
    D_003EA37C = D_008B23B0;
    func_0087BE50();
    func_00C88EC0(0x1e, func_0087B680, func_0087B520);
    func_00C88DD0(0x1e, func_0087B4F0, 0);
}
