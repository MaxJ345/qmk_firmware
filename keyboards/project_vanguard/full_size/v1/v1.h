#pragma once

// TODO: Set the final pinouts, number of rows, and number of columns once the PCB is completed.

#include "quantum.h"

// NOTE: The first section lists all the switches and assigns them an identifier. The layout presented is purely for visual/aesthetic reasons.
// NOTE: The second section contains a two-dimensional array. The first dimension is the row and second dimension is the column.
//     The position of the switches in this array should correspond to their position in the switch matrix on the PCB.
//     For example (assuming an indexing scheme starting at one):
//     * k20 is the switch that is in the 2nd row and 5th column in the switch matrix.
//     * k49 is the switch that is in the 9th row and 4th column in the switch matrix.
//     KC_NO means there is no switch in that position in the switch matrix.
#define LAYOUT( \
    k0,        k1,  k2,  k3,  k4,         k5,  k6,  k7,  k8,         k9,  k10,  k11,  k12,    k13,  k14,   k15, \
    k16,  k17,  k18,  k19,  k20,  k21,  k22,  k23,  k24,  k25,  k26,  k27,  k28,      k29,    k30,  k31,   k32,     k33,  k34,  k35,  k36, \
    k37,    k38,  k39,  k40,  k41,  k42,  k43,  k44,  k45,  k46,  k47,  k48,  k49,    k50,    k51,  k52,   k53,     k54,  k55,  k56,  k57, \
    k58,      k59,  k60,  k61,  k62,  k63,  k64,  k65,  k66,  k67,  k68,  k69,        k70,                          k71,  k72,  k73, \
    k74,        k75,  k76,  k77,  k78,  k79,  k80,  k81,  k82,  k83,  k84,            k85,          k86,            k87,  k88,  k89,  k90, \
    k91,   k92,   k93,                    k94,                   k95,   k96,   k97,   k98,    k99,  k100,  k101,    k102,       k103 \
) { \
    { k0,    k1,    k2,    k3,    k4,   k5,   k6,   k7,   k8 },  \
    { k16,   k17,   k18,   k19,   k20,  k21,  k22,  k23,  k24 }, \
    { k37,   k38,   k39,   k40,   k41,  k42,  k43,  k44,  k45 }, \
    { k58,   k59,   k60,   k61,   k62,  k63,  k64,  k65,  k66 }, \
    { k74,   k75,   k76,   k77,   k78,  k79,  k80,  k81,  k82 }, \
    { k91,   k92,   k93,   k94,   k95,  k96,  k97,  k98,  k99 }, \
    { k9,    k10,   k11,   k12,   k13,  k14,  k15,  k35,  k36 }, \
    { k25,   k26,   k27,   k28,   k29,  k30,  k31,  k32,  k33 }, \
    { k46,   k47,   k48,   k49,   k50,  k51,  k52,  k53,  k34 }, \
    { k67,   k68,   k69,   k70,   k71,  k54,  k55,  k56,  k57 }, \
    { k83,   k84,   k85,   k86,   k100, k101, k102, k103, k90 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, k87,  k88,  k89,  k72,  k73 }  \
}

// NOTE: The above switch matrix matches up with the v1 version of the PCB layout.