/* compiler: mwcc-3.0.1b151 */
#pragma optimize_for_size on
#include "types.h"
typedef struct {
    u8 prefix[11];
    u8 slotGroup;
    u8 unknown0C[10];
    u8 style, variant;
    u8 tail[18];
} DisplaySettings;
typedef struct {
    u8 beforeSettings[0x30];
    DisplaySettings settings;
    u8 beforeSlots[0x1b0 - 0x30 - 42];
    u8 slots[10];
} DisplayObject;
typedef struct {
    u8 beforeGroups[0x14];
    const s8 *groups;
} DisplayResources;
extern DisplayResources *D_003E98B8;
extern void *func_001C4730(void *dst, const void *src, u32 bytes);
void func_001AB960(DisplayObject *object, const DisplaySettings *settings) {
    u32 i;
    func_001C4730(&object->settings, settings, sizeof(*settings));
    if (object->settings.variant < 5) {
        object->settings.style *= 2;
    } else {
        object->settings.style = 2 * object->settings.style + 1;
    }
    if (settings->slotGroup) {
        for (i = 0; i < 10; ++i) {
            object->slots[i] = *(D_003E98B8->groups + settings->slotGroup * 10 + i - 10) + 7;
        }
    }
}
