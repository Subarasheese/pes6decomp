/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_00378198[];
void func_00159E88(void); void func_0015D928(void *); void func_00159EA0(void);
void func_0015DA18(void) { s32 i; u8 *p; func_00159E88(); p = D_00378198; for (i = 0xF; i >= 0; i--) { if (*(s8 *)p == 1) func_0015D928(p); p += 0x44; } func_00159EA0(); }
