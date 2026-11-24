#ifndef PES6_MATCH_SETUP_CALLBACKS_H
#define PES6_MATCH_SETUP_CALLBACKS_H

typedef void (*MatchCallback)(void);
typedef struct {
    MatchCallback ordinary[20];
    MatchCallback bySide[4][2];
} MatchCallbacks;
extern MatchCallbacks D_0058CDA0[];
extern MatchCallback D_0058CDF0[][2];

#endif
