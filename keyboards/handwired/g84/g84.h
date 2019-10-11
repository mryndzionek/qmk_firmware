#pragma once

#include "quantum.h"
#include "led.h"

#define LAYOUT_G84( \
  K40, K41, K42, K43, K44, K45, K46, K47, KF7, KF6, KF5, KF3, KF2, KF4, KF1, \
     K50  , K51, K52, K53, K54, K55, K56, K57, KE7, KE6, KE5, KE4, KE3, KE1, \
  K60, K61, K62, K63, K64, K65, K66, K67, KD7, KD6, KD5, KD4, KD3, KC3, KD1, \
  K70, K71, K72, K73, K74, K75, K76, K77, KC7, KC6, KC5, KC4,   KC2   , KC1, \
     K20  , KA1, KA2, KA3, KA4, KA5, KA6, KA7, KB7, KB6, KB5, K35, KD0, KB1, \
  K10, K00, K90, K30, KA0,   KB0   , K25, K80, KB2, KB3, KB4, KC0, KE0, KF0  \
) { \
  { K00, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
  { K10, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
  { K20, KC_NO, KC_NO, KC_NO, KC_NO, K25  , KC_NO, KC_NO }, \
  { K30, KC_NO, KC_NO, KC_NO, KC_NO, K35  , KC_NO, KC_NO }, \
  { K40, K41  , K42  , K43  , K44  , K45  , K46  , K47   }, \
  { K50, K51  , K52  , K53  , K54  , K55  , K56  , K57   }, \
  { K60, K61  , K62  , K63  , K64  , K65  , K66  , K67   }, \
  { K70, K71  , K72  , K73  , K74  , K75  , K76  , K77   }, \
  { K80, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
  { K90, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
  { KA0, KA1  , KA2  , KA3  , KA4  , KA5  , KA6  , KA7   }, \
  { KB0, KB1  , KB2  , KB3  , KB4  , KB5  , KB6  , KB7   }, \
  { KC0, KC1  , KC2  , KC3  , KC4  , KC5  , KC6  , KC7   }, \
  { KD0, KD1  , KC_NO, KD3  , KD4  , KD5  , KD6  , KD7   }, \
  { KE0, KE1  , KC_NO, KE3  , KE4  , KE5  , KE6  , KE7   }, \
  { KF0, KF1  , KF2  , KF3  , KF4  , KF5  , KF6  , KF7   }  \
}
