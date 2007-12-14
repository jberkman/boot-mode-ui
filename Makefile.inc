# -*- Makefile -*-

bin_PROGRAMS += boot-mode-ui

boot_mode_ui_SOURCES :=				\
	bm.h					\
	callbacks.c				\
	callbacks.h				\
	interface.c				\
	interface.h				\
	main.c					\
	support.c				\
	support.h

boot_mode_ui_CFLAGS := \
    -DPACKAGE_DATA_DIR=\""$(datadir)"\"			       \
    -DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
    $(PACKAGE_CFLAGS)

boot_mode_ui_LDADD := $(PACKAGE_LIBS) $(INTLLIBS)

apps_DATA += boot-mode-ui.desktop

dist_noinst_DATA +=				\
	autogen.sh				\
	intltool-extract.in			\
	intltool-merge.in			\
	intltool-update.in			\
	boot-mode-ui.desktop.in			\
	boot-mode-ui.glade			\
	boot-mode-ui.gladep			\
	boot-mode-ui.spec

DISTCLEANFILES =				\
	intltool-extract			\
	intltool-merge				\
	intltool-update
