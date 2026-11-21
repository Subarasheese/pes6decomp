/* compiler: ee-gcc-2.96-G0 */
/* Adapted from gt4-decomp, src/libstream/unit_0057A128/func_0058CEE8.cpp.
 * MIT licence. See THIRD_PARTY.md. */
typedef struct S8 {
    char data[8];
} S8;

struct Obj1 {
    S8 unk0;
};

extern S8 D_005CAA50;

void func_001972B8(struct Obj1 *arg0) {
    D_005CAA50 = arg0->unk0;
}
