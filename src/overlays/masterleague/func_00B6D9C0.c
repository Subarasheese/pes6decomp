/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00B6DB70(void);
extern s32 func_00B6DB40(s32);
extern void func_00B20EF0(u16);
extern s32 SD_call(s32);

int func_00B6D9C0(void)

{
    int *entry;
    int value;

    entry = (int *)func_00B6DB70();
    if ((entry == (int *)0x0)) {
        return 0;
    }
    value = func_00B6DB40((u32) * (u8 *)(entry + 0x17));
    *(u16 *)(*entry + 0xf8) = (u16)value;
    *(u32 *)(*entry + 0xfc) = 1;
    func_00B20EF0((u16)value);
    entry[0x19] = 1;
    SD_call(-0x7bfd7c00);
    return 0;
}
