#ifndef BM_H
#define BM_H

#include <glib/gmacros.h>

G_BEGIN_DECLS

typedef struct _BootMode BootMode;

G_END_DECLS

#include <string.h>
#include <gtk/gtkwidget.h>
#include <gtk/gtktogglebutton.h>
#include <gtk/gtktextview.h>

G_BEGIN_DECLS

struct _BootMode {
    GtkWidget *window;

    enum {
        NORMAL_MODE,
        UPDATE_MODE
    } mode;

    gboolean ignore_edits;
    gboolean has_bm;
    gboolean restart;
};

extern BootMode bm;

G_END_DECLS

#define WIDGET(w) (lookup_widget (bm.window, (w)))
#define BUFFER(w) (gtk_text_view_get_buffer (GTK_TEXT_VIEW (WIDGET (w))))
#define TEXT(w, v) G_STMT_START {                                       \
        GtkWidget *wid = WIDGET (w);                                    \
        if (GTK_IS_ENTRY (wid)) {                                       \
            gtk_entry_set_text (GTK_ENTRY (wid), (v) ? (v) : "");       \
        } else if (GTK_IS_TEXT_VIEW (wid)) {                            \
            gtk_text_buffer_set_text (BUFFER (w), (v) ? (v) : "", -1);  \
        }                                                               \
    } G_STMT_END;
#if 0
#define EDITABLE(w, v) G_STMT_START {                                   \
        GtkWidget *wid = WIDGET (w);                                    \
        if (GTK_IS_EDITABLE (wid)) {                                    \
            gtk_editable_set_editable (GTK_EDITABLE (wid), (v));        \
        } else if (GTK_IS_TEXT_VIEW (wid)) {                            \
            gtk_text_view_set_editable (GTK_TEXT_VIEW (wid), (v));      \
        }                                                               \
    } G_STMT_END;
#endif
#define TOGGLED(w, v) (gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (WIDGET (w)), (v)))
#define ISTOGGLED(w) (gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (WIDGET (w))))
#define ENABLED(w, v) (gtk_widget_set_sensitive (WIDGET (w), (v)))
#define ISENABLED(w) (GTK_WIDGET_IS_SENSITIVE (WIDGET (w)))
#define VISIBLE(w, v) (((v) ? gtk_widget_show : gtk_widget_hide) (WIDGET (w)))
#define STARTSWITH(s1,s2) (0 == strncmp (s1, s2, strlen (s2)))

void update_boot_mode (void);

#endif /* BM_H */
