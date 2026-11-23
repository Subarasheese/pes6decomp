/* compiler: ee-gcc-2.96-G0 */
/* func_003397C8 adapted from LucasPicoli/god-hand-decomp, src/cod/003397c8.c. See THIRD_PARTY.md.
 */
extern const char D_003CC320[];
extern const char D_003CC330[];
extern const char D_003CC2D0[];
extern const char D_003CC300[];
extern void func_00176E78(const char *error, const char *detail);
typedef struct {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
} Stream38;
void func_001771E8(Stream38 *a0) {
    if (a0 == 0) {
        func_00176E78(D_003CC320, D_003CC2D0);
        return;
    }
    if (a0->field_4 == 0) {
        func_00176E78(D_003CC330, D_003CC300);
        return;
    }
    a0->field_10 = a0->field_20;
    a0->field_C = 0;
    a0->field_14 = 0;
    a0->field_18 = 0;
    a0->field_28 = 0;
    a0->field_2C = 0;
    a0->field_30 = 0;
    a0->field_34 = 0;
}
