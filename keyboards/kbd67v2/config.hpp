
#include "keys.hpp"
#include "type.hpp"

using namespace etkf;
using namespace etkf::pins;

struct kbd67v2 {
    using rows = pin_set<b7, d0, f0, f1, f4>;
    using columns = pin_set<b0, b1, b2, b3, d1, d2, d3, d6, d7, b4, b6, c6, c7, f7, f6, f5>;

    static auto layouts();

    using key_positions = typelist<
        row<1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1>,
        row<1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1>,
        row<1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1>,
        row<1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1>,
        row<1,1,0,1,0,0,1,0,0,0,1,1,1,1,1,1>
    >;

};

using keyboard_to_run = kbd67v2;

auto kbd67v2::layouts() {
    using namespace etkf::keys;

    return typelist<
        typelist<
            row<esc,  one, two, thre,four,five,six, sevn,eigh,nine, zero, min,  eql,  bspc,del>,
            row<tab,  q,   w,   e,   r,   t,   y,   u,   i,   o,    p,    lbra, rbra, ent, pgup>,
            row<lctl, a,   s,   d,   f,   g,   h,   j,   k,   l,    scln, quot, nuhs,      pgdn>,
            row<lsft, bsla,z,   x,   c,   v,   b,   n,   m,   comm, dot,  slsh, rsft, up,  tild>,
            row<lay1, lctl,lgui,          spc,                ralt, lay1, lctl, left, down,righ>
        >,
        typelist<
            row<esc,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,   F10,  F11,  F12,  bspc, del>,
            row<tab,  q,   w,   e,   r,   t,   y,   u,   i,   o,    p,    lbra, rbra, ent, pgup>,
            row<lcta, a,   s,   d,   f,   g,   h,   j,   k,   l,    scln, quot, nuhs,      pgdn>,
            row<lsft, bsla,z,   x,   c,   v,   b,   n,   m,   comm, dot,  slsh, rsft, up,  swi0>,
            row<lay1, lctl,lgui,          spc,                ralt, lay1, lctl, left, down,righ>
        >
    >{};
}
