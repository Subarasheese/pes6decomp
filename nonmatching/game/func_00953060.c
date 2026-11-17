/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CA9968[];
extern char D_00CA9978[];
extern char D_00CA9988[];
extern char D_00CA9998[];
extern char D_00CA99A8[];
extern char D_00CA99B8[];
extern char D_00CA99C8[];
extern char D_00CA99D8[];
extern char D_00CA99E8[];
extern char D_00CA99F8[];
extern char D_00CA9A08[];
extern char D_00CA9A18[];
extern char D_00CA9A28[];
extern char D_00CA9A38[];
extern char D_00CA9A48[];
extern char D_00CA9A58[];
extern char D_00CB52A0[];
extern char D_00CB53BC[];

void func_00953060(u8 arg0) {
    s32 i;

    if (arg0 == 0xFF) {
        for (i = 0; i < 9; i++) {
            *(u8 *)(D_00CB52A0 + 0x168 + i) = *(u8 *)(D_00CA9978 + i);
            *(u8 *)(D_00CB52A0 + 0x171 + i) = *(u8 *)(D_00CA9998 + i);
            *(u8 *)(D_00CB52A0 + 0x1B0 + i) = *(u8 *)(D_00CA99B8 + i);
            *(u8 *)(D_00CB52A0 + 0x1B9 + i) = *(u8 *)(D_00CA99D8 + i);
            *(u8 *)(D_00CB52A0 + 0x19E + i) = *(u8 *)(D_00CA99F8 + i);
            *(u8 *)(D_00CB52A0 + 0x1A7 + i) = *(u8 *)(D_00CA9A18 + i);
            *(u8 *)(D_00CB52A0 + 0x17A + i) = *(u8 *)(D_00CA9A28 + i);
            *(u8 *)(D_00CB52A0 + 0x183 + i) = *(u8 *)(D_00CA9A38 + i);
            *(u8 *)(D_00CB52A0 + 0x18C + i) = *(u8 *)(D_00CA9A48 + i);
            *(u8 *)(D_00CB52A0 + 0x195 + i) = *(u8 *)(D_00CA9A58 + i);
        }
    } else if (arg0 == 3) {
        for (i = 0; i < 9; i++) {
            *(u8 *)(D_00CB52A0 + 0x19E + i) = *(u8 *)(D_00CA99E8 + i);
            *(u8 *)(D_00CB52A0 + 0x1A7 + i) = *(u8 *)(D_00CA9A08 + i);
        }
    } else if (arg0 == 2) {
        for (i = 0; i < 9; i++) {
            *(u8 *)(D_00CB52A0 + 0x19E + i) = *(u8 *)(D_00CA99F8 + i);
            *(u8 *)(D_00CB52A0 + 0x1A7 + i) = *(u8 *)(D_00CA9A18 + i);
        }
    } else if (arg0 == 1) {
        *(u8 *)D_00CB53BC = arg0;
        for (i = 0; i < 9; i++) {
            *(u8 *)(D_00CB52A0 + 0x168 + i) = *(u8 *)(D_00CA9978 + i);
            *(u8 *)(D_00CB52A0 + 0x171 + i) = *(u8 *)(D_00CA9998 + i);
            *(u8 *)(D_00CB52A0 + 0x1B0 + i) = *(u8 *)(D_00CA99B8 + i);
            *(u8 *)(D_00CB52A0 + 0x1B9 + i) = *(u8 *)(D_00CA99D8 + i);
        }
    } else if (arg0 == 0) {
        *(u8 *)D_00CB53BC = arg0;
        for (i = 0; i < 9; i++) {
            *(u8 *)(D_00CB52A0 + 0x168 + i) = *(u8 *)(D_00CA9968 + i);
            *(u8 *)(D_00CB52A0 + 0x171 + i) = *(u8 *)(D_00CA9988 + i);
            *(u8 *)(D_00CB52A0 + 0x1B0 + i) = *(u8 *)(D_00CA99A8 + i);
            *(u8 *)(D_00CB52A0 + 0x1B9 + i) = *(u8 *)(D_00CA99C8 + i);
        }
    }
}
