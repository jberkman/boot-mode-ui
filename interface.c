/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window (void)
{
  GtkWidget *window;
  GtkWidget *dialog_vbox1;
  GtkWidget *table1;
  GtkWidget *restart_button;
  GtkWidget *normal_button;
  GtkWidget *vbox2;
  GtkWidget *image2;
  GtkWidget *label3;
  GtkWidget *update_button;
  GtkWidget *vbox1;
  GtkWidget *image1;
  GtkWidget *label2;
  GtkWidget *label1;
  GtkWidget *dialog_action_area1;
  GtkWidget *close_button;

  window = gtk_dialog_new ();
  gtk_widget_set_name (window, "window");
  gtk_window_set_title (GTK_WINDOW (window), _("Boot Mode"));
  gtk_window_set_type_hint (GTK_WINDOW (window), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox1 = GTK_DIALOG (window)->vbox;
  gtk_widget_set_name (dialog_vbox1, "dialog_vbox1");
  gtk_widget_show (dialog_vbox1);

  table1 = gtk_table_new (3, 2, FALSE);
  gtk_widget_set_name (table1, "table1");
  gtk_widget_show (table1);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), table1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table1), 10);
  gtk_table_set_row_spacings (GTK_TABLE (table1), 5);
  gtk_table_set_col_spacings (GTK_TABLE (table1), 5);

  restart_button = gtk_button_new_with_mnemonic (_("Restart Now..."));
  gtk_widget_set_name (restart_button, "restart_button");
  gtk_widget_show (restart_button);
  gtk_table_attach (GTK_TABLE (table1), restart_button, 0, 2, 2, 3,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  normal_button = gtk_toggle_button_new ();
  gtk_widget_set_name (normal_button, "normal_button");
  gtk_widget_show (normal_button);
  gtk_table_attach (GTK_TABLE (table1), normal_button, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 20, 20);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox2, "vbox2");
  gtk_widget_show (vbox2);
  gtk_container_add (GTK_CONTAINER (normal_button), vbox2);

  image2 = create_pixmap (window, "system-installer.svg");
  gtk_widget_set_name (image2, "image2");
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (vbox2), image2, TRUE, TRUE, 0);
  gtk_widget_set_size_request (image2, 64, 64);

  label3 = gtk_label_new (_("Update Mode"));
  gtk_widget_set_name (label3, "label3");
  gtk_widget_show (label3);
  gtk_box_pack_start (GTK_BOX (vbox2), label3, FALSE, FALSE, 0);

  update_button = gtk_toggle_button_new ();
  gtk_widget_set_name (update_button, "update_button");
  gtk_widget_show (update_button);
  gtk_table_attach (GTK_TABLE (table1), update_button, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 20, 20);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox1, "vbox1");
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (update_button), vbox1);

  image1 = create_pixmap (window, "computer.svg");
  gtk_widget_set_name (image1, "image1");
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (vbox1), image1, TRUE, TRUE, 0);
  gtk_widget_set_size_request (image1, 64, 64);

  label2 = gtk_label_new (_("Normal Mode"));
  gtk_widget_set_name (label2, "label2");
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (vbox1), label2, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label2), GTK_JUSTIFY_CENTER);

  label1 = gtk_label_new (_("Select what will happen the next time this computer is restarted:"));
  gtk_widget_set_name (label1, "label1");
  gtk_widget_show (label1);
  gtk_table_attach (GTK_TABLE (table1), label1, 0, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label1), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label1), 0, 0.5);

  dialog_action_area1 = GTK_DIALOG (window)->action_area;
  gtk_widget_set_name (dialog_action_area1, "dialog_action_area1");
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  close_button = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_set_name (close_button, "close_button");
  gtk_widget_show (close_button);
  gtk_dialog_add_action_widget (GTK_DIALOG (window), close_button, GTK_RESPONSE_CLOSE);
  GTK_WIDGET_SET_FLAGS (close_button, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) restart_button, "clicked",
                    G_CALLBACK (on_restart_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) normal_button, "clicked",
                    G_CALLBACK (on_normal_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) update_button, "clicked",
                    G_CALLBACK (on_update_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) close_button, "clicked",
                    G_CALLBACK (on_close_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window, window, "window");
  GLADE_HOOKUP_OBJECT_NO_REF (window, dialog_vbox1, "dialog_vbox1");
  GLADE_HOOKUP_OBJECT (window, table1, "table1");
  GLADE_HOOKUP_OBJECT (window, restart_button, "restart_button");
  GLADE_HOOKUP_OBJECT (window, normal_button, "normal_button");
  GLADE_HOOKUP_OBJECT (window, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (window, image2, "image2");
  GLADE_HOOKUP_OBJECT (window, label3, "label3");
  GLADE_HOOKUP_OBJECT (window, update_button, "update_button");
  GLADE_HOOKUP_OBJECT (window, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (window, image1, "image1");
  GLADE_HOOKUP_OBJECT (window, label2, "label2");
  GLADE_HOOKUP_OBJECT (window, label1, "label1");
  GLADE_HOOKUP_OBJECT_NO_REF (window, dialog_action_area1, "dialog_action_area1");
  GLADE_HOOKUP_OBJECT (window, close_button, "close_button");

  return window;
}

