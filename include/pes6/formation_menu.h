#ifndef PES6_FORMATION_MENU_H
#define PES6_FORMATION_MENU_H

#include "pes6/formation_plan.h"

enum { FORMATION_SIDES = 2 };

typedef struct {
    u8 side, reserved01[0x18], selection, reserved1A[0x208 - 0x1a];
    FormationOptions options;
    u8 panel[0x24c4 - 0xb0c], list[0x3224 - 0x24c4];
} FormationMenuTeam;
typedef char assert_formation_menu_team_size[sizeof(FormationMenuTeam) == 0x3224 ? 1 : -1];
typedef struct {
    f32 x, y, shift, scale;
} FormationWindowLayout;

typedef struct {
    u8 base[32], mode, field21, option, flags, slots[11], reserved2F;
    void *cursor;
    u8 selected, reserved35[15];
    void *layers[7], *reserved60, *windows[3], *markers[11], *labels[11], *icons[11], *controls[3],
        *children[4], *overlay, *diagram;
} FormationDiagram;

typedef struct {
    u8 active, reserved01[3];
    void *resources[7];
} FormationGroup;

typedef struct {
    FormationGroup group;
    u8 visible, count, enabled, reserved;
    void *items[14], *animation, *caption, *cursor;
} FormationLegend;

typedef struct {
    u8 menuGroup[32], enabled[16];
    void *layers, *animation, *name, *value;
    void *items[16], *separator, *labels[16];
} FormationList;

typedef struct {
    u8 field00, flags[12], reserved0D[3];
    u8 display[32];
    void *group, *animation, *text, *labels[12];
} FormationPage;
/* The legend starts 0xbc bytes after the list. Its first two words share storage
 * with the last two label slots cleared by the list reset. */
typedef struct {
    u8 side, first, second, active, reserved04[4], mode, reserved09[15];
    union {
        FormationList list;
        struct {
            u8 prefix[0xbc];
            FormationLegend legend;
            FormationDiagram diagram;
        } pitch;
    } pages;
} FormationSelection;

void func_008C5D40(void *), func_008C5D70(void *);
void func_008C5DF0(void *, s32, u8, const void *);
void func_008C59E0(void *, const char *);
void func_008C57D0(void *, const void *, const char *, s32);
void *func_008C1490(s32, const void *), *func_008C13D0(void *, s32, const char *);
void func_001D7D80(void *, s16);
void func_008D80C0(FormationDiagram *);
void func_008D8210(FormationDiagram *, s32, const void *, u8, u8);
void func_008E16C0(FormationLegend *), func_008E1660(FormationLegend *);
void func_008E1EF0(FormationList *), func_008E1E50(FormationList *);
void func_008B2E50(FormationMenuTeam *, const FormationTactics *);
void func_008C5230(FormationWindowLayout *, s32, u8);

static inline void resetFormationList(FormationList *list) {
    s32 i;
    list->layers = 0;
    list->animation = 0;
    list->name = 0;
    list->value = 0;
    for (i = 0; i < 16; i++) {
        list->enabled[i] = 1;
        list->items[i] = 0;
        list->labels[i] = 0;
    }
    list->separator = 0;
    func_008C5D40(list->menuGroup);
}

static inline void resetFormationLegend(FormationLegend *page) {
    s32 i;
    for (i = 0; i < 14; i++)
        page->items[i] = 0;
    page->enabled = 1;
    page->visible = 1;
    page->count = 11;
    page->animation = 0;
    page->caption = 0;
    page->cursor = 0;
    func_008C5D40(&page->group);
}

static inline void resetFormationPage(FormationPage *page) {
    s32 i;
    for (i = 0; i < 12; i++) {
        page->flags[i] = 0;
        page->labels[i] = 0;
    }
    page->group = 0;
    page->text = 0;
    page->animation = 0;
    func_008C5D40(page->display);
}

#endif
