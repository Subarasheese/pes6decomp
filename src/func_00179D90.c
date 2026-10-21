/* compiler: ee-gcc-2.96 */
#include "types.h"
typedef struct { s32 x; s32 y; } Pair8;
extern Pair8 D_00510F60[];
void func_001795B0(void); void func_001795C8(void);
void func_00179D90(s32 i, s32 a, s32 b) { func_001795B0(); D_00510F60[i].x = a; D_00510F60[i].y = b; func_001795C8(); }
