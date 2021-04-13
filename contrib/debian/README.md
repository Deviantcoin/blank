
Debian
====================
This directory contains files used to package flsd/fls-qt
for Debian-based Linux systems. If you compile flsd/fls-qt yourself, there are some useful files here.

## fls: URI support ##


fls-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install fls-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your fls-qt binary to `/usr/bin`
and the `../../share/pixmaps/fls128.png` to `/usr/share/pixmaps`

fls-qt.protocol (KDE)

