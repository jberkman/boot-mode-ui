## Process this file with automake to produce Makefile.in

SUBDIRS = po

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = boot-mode

boot_mode_SOURCES = \
	main.c \
	support.c support.h \
	interface.c interface.h \
	callbacks.c callbacks.h

boot_mode_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

EXTRA_DIST = \
	autogen.sh \
	boot-mode.glade \
	boot-mode.gladep

