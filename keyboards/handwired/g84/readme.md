
# G84-4100 handwired

Cherry G84 compact keyboards controller replacement using BluePill (generic Chinese STM32F103C8T6)

Keyboard Maintainer: ???
Hardware Supported: Bluepill STM32F103C8T6
Hardware Availability: Everywhere

Make :

    make handwired/g84/g84_4100:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

Read everything before using it.

## Introduction

That's was an attempt to replace Cherry G84-4100 controller with QMK on Bluepill.

## Resistor fix

If you want to use the Bluepill USB port, it's very likely that you need to solder a 1.8 kΩ between PA12 and 3.3V.

## Pinout


