/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_005C8DE8;
extern volatile int D_005C8DEC;
extern char D_005CA940[], D_005CA400[], D_005C9FC0[], D_005C9F90[], D_005C8EC0[], D_005C8E40[];
int func_00191838(int code, int *out) {
    int value;
    if (code != 0x8001) {
        if (code != 0x8003) {
            if (code != 0x8002) {
                if (code != 0x8004) {
                    if (code != 0x8011) {
                        value = code == 0x8013 ? (int)D_005C9FC0 :
                                code == 0x8012 ? (int)D_005CA400 :
                                code == 0x8014 ? (int)D_005CA940 : 0;
                    } else {
                        value = D_005C8DEC;
                        *out = value;
                        goto done;
                    }
                } else value = (int)D_005C9F90;
            } else value = (int)D_005C8EC0;
        } else value = (int)D_005C8E40;
    } else value = D_005C8DE8;
    *out = value;
done:
    return 1;
}
