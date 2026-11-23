/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00591BE4[], D_003C54C0[], D_00591DD8[], D_00591E00[], D_00591E01[], D_00591BC6[],
    D_00591BC7[], D_00591BC8[], D_00591BC9[], D_00591DED[], D_0059237C[], D_0059237D[];
extern u8 D_003EA754;
extern s32 func_001CDAA0(void), func_009B6A60(s32);
extern void func_009B4450(s32), func_00BBB970(void), func_002C7B30(s32), func_0027C230(s32, s32),
    func_002CD000(s32, s32, s32, s32, s32);

s32 func_001F9080(void) {
    D_00591BE4[0] = D_003C54C0[func_001CDAA0()];
    func_009B4450(0);
    D_00591DD8[0] = 0;
    func_00BBB970();
    func_002C7B30(0);
    func_002C7B30(1);
    func_0027C230(0x10041, 4);
    D_00591E00[0] = 0;
    D_00591E01[0] = 1;
    func_002CD000(D_00591BC6[0], D_00591BC7[0], D_00591BC8[0], D_00591BC9[0], D_00591DED[0]);
    D_003EA754 = func_009B6A60(0);
    D_0059237C[0] = 0;
    D_0059237D[0] = 1;
    return 1;
}
