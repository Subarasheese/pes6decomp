/* compiler: mwcc-3.0.1b210 */
#include "types.h"

#define CONFIRM_SOUND ((s32)0x84028400)
#define INVALID_SOUND ((s32)0x8c008005)
typedef struct {
    u8 reserved00[0x2c];
    s32 item;
    u8 reserved30[0x1c];
    u32 option;
} EditorChoice;
extern s32 SD_call(s32);
extern s32 func_00BBC080(void);

void func_00BB2BF0(EditorChoice *choice) {
    s32 item;
    item = choice->item;
    switch (item) {
    case 2:
        choice->option = 0;
        SD_call(CONFIRM_SOUND);
        func_00BBC080();
        break;

    case 4:
        choice->option = 1;
        SD_call(CONFIRM_SOUND);
        func_00BBC080();
        break;

    case 6:
        choice->option = 2;
        SD_call(CONFIRM_SOUND);
        func_00BBC080();
        break;

    default:
        SD_call(INVALID_SOUND);
        break;
    }
}
