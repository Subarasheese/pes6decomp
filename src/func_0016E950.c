/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_00385940[];
void func_001763F8(void); void func_0016E570(void *); void func_00176410(void);
void func_0016E950(void) { s32 i; u8 *p; func_001763F8(); p = D_00385940; for (i = 0xF; i >= 0; i--) { if (*(s8 *)p == 1) func_0016E570(p); p += 0x44; } func_00176410(); }
