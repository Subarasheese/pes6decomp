/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 reserved[0x50];
    u8 entries[];
} SelectionTable;
extern SelectionTable *func_00228960(void);
u8 func_00B27450(s32 index) {
    SelectionTable *table = func_00228960();
    return table->entries[(u8)index];
}
