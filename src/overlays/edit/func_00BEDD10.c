/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_sort.h"

typedef struct {
    s32 leftValue;
    s32 rightValue;
    u16 leftId;
    u16 rightId;
    u8 ascending;
} EditPlayerSortPair;

/* Equal attribute values always compare player IDs in ascending order. */
s32 func_00BEDD10(const EditPlayerSortPair *pair)
{
    if (pair->ascending == PES6_EDIT_SORT_DESCENDING) {
        if (pair->leftValue > pair->rightValue) {
            return -1;
        } else if (pair->leftValue == pair->rightValue) {
            if (pair->leftId < pair->rightId) {
                return -1;
            }
            if (pair->leftId > pair->rightId) {
                return 1;
            }
            return 0;
        } else {
            return 1;
        }
    } else {
        if (pair->leftValue < pair->rightValue) {
            return -1;
        } else if (pair->leftValue == pair->rightValue) {
            if (pair->leftId < pair->rightId) {
                return -1;
            }
            if (pair->leftId > pair->rightId) {
                return 1;
            }
            return 0;
        } else {
            return 1;
        }
    }
}
