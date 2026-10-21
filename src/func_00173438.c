/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003CB4D8[];
void func_00172E10(s32, void *); void func_00172DC8(void); void func_00172DE0(void);
void func_00173438(s32 *p) { if (p == 0) { func_00172E10(0, D_003CB4D8); return; } func_00172DC8(); *(u8 *)((u8 *)p + 1) = 0; func_00172DE0(); }
