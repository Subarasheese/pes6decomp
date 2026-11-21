/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_008E1E50(void *);
extern void func_008D80C0(void *);
extern void func_008E1660(void *);
extern char D_008EC410[];

void func_008E0DD0(void *arg0) {
    int value;
    int value2;

    *(u8 *)arg0 = 0;
    *(u32 *)((int)arg0 + 4) = (u32)D_008EC410;
    *(u8 *)((int)arg0 + 1) = 0;
    *(u8 *)((int)arg0 + 2) = 0;
    *(u8 *)((int)arg0 + 3) = 0;
    *(u8 *)((int)arg0 + 8) = 2;
    value = 0;
    do {
        *(u8 *)((int)arg0 + value + 9) = 0;
        value2 = value + 7;
        *(u8 *)((int)arg0 + value + 10) = 0;
        *(u8 *)((int)arg0 + value + 0xb) = 0;
        *(u8 *)((int)arg0 + value + 0xc) = 0;
        *(u8 *)((int)arg0 + value + 0xd) = 0;
        *(u8 *)((int)arg0 + value + 0xe) = 0;
        *(u8 *)((int)arg0 + value + 0xf) = 0;
        value = value2;
    } while (value2 < 0xe);
    *(u8 *)((int)arg0 + 0x12) = 1;
    func_008E1E50((void *)((int)arg0 + 0x18));
    func_008D80C0((void *)((int)arg0 + 0x13c));
    func_008E1660((void *)((int)arg0 + 0xd4));
}
