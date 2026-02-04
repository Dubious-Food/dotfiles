#!/bin/sh
#/usr/lib/polkit-gnome &
#/usr/lib/polkit-1 &
#/usr/lib/bluetooth &
polkit-gnome &
bluetoothd start &