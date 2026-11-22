#ifndef PES6_LOBBY_MATCH_SETUP_PAGE_H
#define PES6_LOBBY_MATCH_SETUP_PAGE_H

#include "types.h"
typedef struct {
    u8 state;
    u8 reserved1[3];
    u8 selection;
    u8 reserved5[0x7e7];
    void *widget;
    u8 reserved7f0[0x1b0];
    void *selectionControl;
} MatchSetupPage;
extern MatchSetupPage *D_00A7DDF8;

#endif
