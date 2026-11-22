/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef struct {
    Pes6MatchPlayer *player;
} MatchAction;
extern u8 Pes6MatchContext_Half[];
extern u8 D_00591E57[]; /* currently selected match player id */
extern s16 func_002BE490(u8 team, s32 includeMatch);
extern s32 func_00BBB8C0(s32 range);
extern s32 func_00B69A80(void);
/* The original game queries both scores once to test the tie, then queries
 * them again on the non-tied path before choosing the response. */
static inline s32 is_tied(MatchAction *action, u8 team) {
    return ((s32)func_002BE490(action->player->team, 1) - (s32)func_002BE490((u8)(team ^ 1), 1)) ==
           0;
}
static inline s32 score_margin(MatchAction *action) {
    return func_002BE490(action->player->team, 1) -
           func_002BE490((u8)(action->player->team ^ 1), 1);
}
static inline s32 is_selected(MatchAction *action) { return action->player->id == D_00591E57[0]; }

/* Select a response from the squad player's style, phase of play,
 * match half and score. Some responses depend on the selected player
 * or draw from the game's random stream. */
s32 func_00B68390(MatchAction *action, s32 phase) {
    s32 result = 1;
    u8 team = action->player->team;
    switch (Pes6MatchSquads[team].players[action->player->slot].responseStyle) {
    case 0:
        switch (phase) {
        case 0:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    result = 1;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 2;
                    } else {
                        result = 0;
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    result = 2;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 2;
                    } else {
                        result = 1;
                    }
                }
            }
            break;
        case 1:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    if (is_selected(action)) {
                        result = 1;
                    } else {
                        result = 3;
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (is_selected(action)) {
                            result = 2;
                        } else {
                            if (func_00BBB8C0(2) == 0) {
                                result = 4;
                            } else {
                                result = 5;
                            }
                        }
                    } else {
                        if (is_selected(action)) {
                            result = 0;
                        } else {
                            result = 3;
                        }
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    if (is_selected(action)) {
                        result = 2;
                    } else {
                        if (func_00BBB8C0(2) == 0) {
                            result = 4;
                        } else {
                            result = 6;
                        }
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (is_selected(action)) {
                            result = 2;
                        } else {
                            if (func_00BBB8C0(2) == 0) {
                                result = 4;
                            } else {
                                result = 6;
                            }
                        }
                    } else {
                        if (is_selected(action)) {
                            result = 1;
                        } else {
                            result = 3;
                        }
                    }
                }
            }
            break;
        case 2:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    if (func_00BBB8C0(2) == 0) {
                        result = 1;
                    } else {
                        result = 5;
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (func_00BBB8C0(2) == 0) {
                            result = 1;
                        } else {
                            result = 6;
                        }
                    } else {
                        result = 0;
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    if (func_00BBB8C0(2) == 0) {
                        result = 1;
                    } else {
                        result = 6;
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (func_00BBB8C0(2) == 0) {
                            result = 1;
                        } else {
                            result = 6;
                        }
                    } else {
                        result = 1;
                    }
                }
            }
            break;
        case 3:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    result = 1;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 2;
                    } else {
                        result = 0;
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    result = 2;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 2;
                    } else {
                        result = 1;
                    }
                }
            }
            break;
        }
        break;
    case 1:
        switch (phase) {
        case 0:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    result = 0;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 1;
                    } else {
                        result = 0;
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    result = 2;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 2;
                    } else {
                        result = 0;
                    }
                }
            }
            break;
        case 1:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    if (is_selected(action)) {
                        result = 0;
                    } else {
                        result = 3;
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (is_selected(action)) {
                            result = 1;
                        } else {
                            result = 3;
                        }
                    } else {
                        if (is_selected(action)) {
                            result = 0;
                        } else {
                            result = 3;
                        }
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    if (is_selected(action)) {
                        if (func_00B69A80() != 0) {
                            result = 2;
                        } else {
                            result = 1;
                        }
                    } else {
                        if (func_00BBB8C0(2) == 0) {
                            result = 4;
                        } else {
                            result = 5;
                        }
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (is_selected(action)) {
                            result = 2;
                        } else {
                            if (func_00BBB8C0(2) == 0) {
                                result = 4;
                            } else {
                                result = 6;
                            }
                        }
                    } else {
                        if (is_selected(action)) {
                            result = 1;
                        } else {
                            result = 3;
                        }
                    }
                }
            }
            break;
        case 2:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    if (func_00BBB8C0(2) == 0) {
                        result = 0;
                    } else {
                        result = 5;
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (func_00BBB8C0(2) == 0) {
                            result = 1;
                        } else {
                            result = 5;
                        }
                    } else {
                        result = 0;
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    if (func_00BBB8C0(2) == 0) {
                        result = 1;
                    } else {
                        result = 6;
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (func_00BBB8C0(2) == 0) {
                            result = 1;
                        } else {
                            result = 6;
                        }
                    } else {
                        result = 0;
                    }
                }
            }
            break;
        case 3:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    result = 0;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 1;
                    } else {
                        result = 0;
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    result = 2;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 2;
                    } else {
                        result = 0;
                    }
                }
            }
            break;
        }
        break;
    case 2:
        switch (phase) {
        case 0:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    result = 0;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 1;
                    } else {
                        result = 0;
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    result = 1;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 2;
                    } else {
                        result = 0;
                    }
                }
            }
            break;
        case 1:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    if (is_selected(action)) {
                        result = 0;
                    } else {
                        result = 3;
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (is_selected(action)) {
                            result = 1;
                        } else {
                            result = 3;
                        }
                    } else {
                        if (is_selected(action)) {
                            result = 0;
                        } else {
                            result = 3;
                        }
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    if (is_selected(action)) {
                        result = 1;
                    } else {
                        result = 3;
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (is_selected(action)) {
                            result = 2;
                        } else {
                            if (func_00BBB8C0(2) == 0) {
                                result = 4;
                            } else {
                                result = 5;
                            }
                        }
                    } else {
                        if (is_selected(action)) {
                            result = 0;
                        } else {
                            result = 3;
                        }
                    }
                }
            }
            break;
        case 2:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    result = 0;
                } else {
                    if (score_margin(action) <= 0) {
                        if (func_00BBB8C0(2) == 0) {
                            result = 0;
                        } else {
                            result = 5;
                        }
                    } else {
                        result = 0;
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    if (func_00BBB8C0(2) == 0) {
                        result = 1;
                    } else {
                        result = 5;
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (func_00BBB8C0(2) == 0) {
                            result = 1;
                        } else {
                            result = 5;
                        }
                    } else {
                        result = 0;
                    }
                }
            }
            break;
        case 3:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    result = 0;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 1;
                    } else {
                        result = 0;
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    result = 1;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 2;
                    } else {
                        result = 0;
                    }
                }
            }
            break;
        }
        break;
    case 3:
        switch (phase) {
        case 0:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    result = 0;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 0;
                    } else {
                        result = 0;
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    result = 1;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 1;
                    } else {
                        result = 0;
                    }
                }
            }
            break;
        case 1:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    if (is_selected(action)) {
                        result = 0;
                    } else {
                        result = 3;
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (is_selected(action)) {
                            result = 0;
                        } else {
                            result = 3;
                        }
                    } else {
                        if (is_selected(action)) {
                            result = 0;
                        } else {
                            result = 3;
                        }
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    if (is_selected(action)) {
                        result = 1;
                    } else {
                        result = 3;
                    }
                } else {
                    if (score_margin(action) <= 0) {
                        if (is_selected(action)) {
                            result = 1;
                        } else {
                            result = 3;
                        }
                    } else {
                        if (is_selected(action)) {
                            result = 0;
                        } else {
                            result = 3;
                        }
                    }
                }
            }
            break;
        case 2:
            result = 0;
            break;
        case 3:
            if (Pes6MatchContext_Half[0] == 0) {
                if (is_tied(action, team)) {
                    result = 0;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 1;
                    } else {
                        result = 0;
                    }
                }
            } else {
                if (is_tied(action, team)) {
                    result = 1;
                } else {
                    if (score_margin(action) <= 0) {
                        result = 1;
                    } else {
                        result = 0;
                    }
                }
            }
            break;
        }
        break;
    }
    return result;
}
