#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include "bm.h"

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

void
on_restart_button_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
    update_boot_mode ();
    g_spawn_command_line_async ("gnome-session-save --kill", NULL);
}

void
on_normal_button_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
    if (!bm.ignore_edits) {
        TOGGLED ("update_button", !ISTOGGLED ("normal_button"));
    }
}


void
on_update_button_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
    if (!bm.ignore_edits) {
        TOGGLED ("normal_button", !ISTOGGLED ("update_button"));
    }
}
