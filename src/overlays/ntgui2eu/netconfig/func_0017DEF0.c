/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_widget_changes.h"
#include "pes6/ntgui_properties.h"

typedef struct TransitionWidget TransitionWidget;
typedef struct {
    u8 reserved00[0x110];
    void (*update)(TransitionWidget *);
} TransitionMethods;
struct TransitionWidget {
    u8 reserved00[0x4c];
    const TransitionMethods *methods;
    u8 reserved50[0x98 - 0x50];
    s32 redraw;
    u8 reserved9c[0x538 - 0x9c];
    s32 transitionEnabled;
    u8 reserved53c[0xda0 - 0x53c];
    NtguiWidgetAttribute attribute, oldAttribute, appliedAttribute;
    s32 value;
    u8 reserveddd4[12];
    NtguiWidgetAttribute secondary;
    s32 secondaryValue;
};

s32 func_0017DEF0(TransitionWidget *dst, const TransitionWidget *current,
                  const TransitionWidget *previous) {
    WidgetProperty properties[64];
    s32 changed = D_005C14A0(dst, current, previous);
    if (!func_00164238(&current->attribute, &previous->attribute)) {
        dst->oldAttribute = dst->attribute;
        dst->attribute = current->attribute;
        if (dst->transitionEnabled)
            dst->methods->update(dst);
        else
            dst->appliedAttribute = dst->attribute;
        dst->redraw = 2;
        changed = 1;
    }
    if (!func_00164238(&current->secondary, &previous->secondary)) {
        dst->secondary = current->secondary;
        changed = 1;
    }
    if (current->value != previous->value) {
        dst->value = current->value;
        properties[0].key = 0x48;
        properties[0].value.integer = dst->value;
        changed = 1;
    }
    if (current->secondaryValue != previous->secondaryValue) {
        dst->secondaryValue = current->secondaryValue;
        changed = 1;
    }
    return changed;
}
