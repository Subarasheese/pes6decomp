/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/w2_n.c (func_0040B220). See THIRD_PARTY.md. */
#include "types.h"
typedef struct HtciFileRequest {
    signed char slot_state;
    unsigned char open_flag;
    signed char operation_state;
    unsigned char unknown_03_07[5];
    unsigned long long file_size;
    signed int file_block_count_10;
    signed int result_14;
    signed int file_handle_18;
    signed int progress_blocks_1c;
    void *request_buffer_20;
    signed int requested_blocks_24;
    signed int completed_blocks_28;
    signed int request_handle_2c;
} HtciFileRequest;

void func_00170548(HtciFileRequest *p) {
    extern void func_001795E0();
    extern void func_00179658();
    extern s32 func_0016C958();
    extern void func_0016C718();
    if (p->request_handle_2c != 0) {
        func_001795E0();
        switch (func_0016C958(p->request_handle_2c)) {
        case 9:
            p->operation_state = 3;
            func_0016C718(p->request_handle_2c);
            p->request_handle_2c = 0;
            break;

        case 3:
            p->completed_blocks_28 = p->requested_blocks_24;
            p->progress_blocks_1c += p->requested_blocks_24;
            p->operation_state = 1;
            func_0016C718(p->request_handle_2c);
            p->request_handle_2c = 0;
            break;

        case 0:
            p->operation_state = 0;
            func_0016C718(p->request_handle_2c);
            p->request_handle_2c = 0;
            break;

        case 1:

        case 2:

        case 4:

        case 5:

        case 6:

        case 7:

        case 8:

        default:
            break;
        }

        func_00179658();
    }
}
