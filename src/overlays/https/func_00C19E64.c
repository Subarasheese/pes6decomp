/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
typedef struct {
    u32 value;
    u8 reserved04[0x28];
} NetworkSlot;
extern NetworkSlot D_00C47B60[];
u32 func_00C19E64(u32 index) { return D_00C47B60[(u16)index].value; }
