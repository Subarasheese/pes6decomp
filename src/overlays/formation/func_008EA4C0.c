/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_008E5110(void *, u8);
extern s32 func_008C9DB0(void *, s32);
extern void func_008E5200(void *, u8);
extern void func_008EAD60(void *, u8);

void func_008EA4C0(u8 *screen, s32 mode) {
    u32 page;
    u8 show;
    page = mode & 0xff;
    show = 1;
    switch (page) {
    case 6:
        func_008E5110((screen + 0x129c), 1);
        func_008C9DB0((screen + 0xb0c), 9);
        show = 0;
        break;

    case 7:
        func_008E5110((screen + 0x129c), 1);
        func_008C9DB0((screen + 0xb0c), 0);
        show = 0;
        break;

    case 5:
        func_008E5110((screen + 0x129c), 0);
        func_008E5200((screen + 0x129c), 6);
        func_008C9DB0((screen + 0xb0c), 0xf);
        show = 0;
        break;

    default:
        func_008E5110((screen + 0x129c), 1);
        func_008C9DB0((screen + 0xb0c), 5);
        break;
    }

    func_008EAD60((screen + 0x24c4), show);
}
