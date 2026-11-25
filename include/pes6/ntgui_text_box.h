#ifndef PES6_NTGUI_TEXT_BOX_H
#define PES6_NTGUI_TEXT_BOX_H

#include "pes6/ntgui_widget_changes.h"

typedef struct {
    NtguiWidgetUpdateHeader header;
    u8 reserved9c[0x4d0 - 0x9c];
    s32 cursor;
    u8 reserved4d4[0x914 - 0x4d4];
    s32 lineCount;
    char *text, *secondary;
    u32 reserved920;
    const char *pendingText, *pendingSecondary;
} NetworkTextBox;

extern char *func_001896B8(const char *text);

#endif
