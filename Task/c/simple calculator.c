#include <gtk/gtk.h>
#include <stdlib.h>

GtkWidget *entry;

void on_button_clicked(GtkWidget *widget, gpointer data) {
    const gchar *label = gtk_button_get_label(GTK_BUTTON(widget));
    const gchar *current = gtk_entry_get_text(GTK_ENTRY(entry));

    if (g_strcmp0(label, "=") == 0) {
        // Simple evaluation using system call (not safe for complex or real use)
        char command[256];
        char result[128];
        FILE *fp;

        snprintf(command, sizeof(command), "echo 'scale=2; %s' | bc", current);
        fp = popen(command, "r");
        if (fp == NULL) return;

        if (fgets(result, sizeof(result), fp) != NULL) {
            gtk_entry_set_text(GTK_ENTRY(entry), result);
        }
        pclose(fp);
    } else if (g_strcmp0(label, "C") == 0) {
        gtk_entry_set_text(GTK_ENTRY(entry), "");
    } else {
        gchar *new_text = g_strconcat(current, label, NULL);
        gtk_entry_set_text(GTK_ENTRY(entry), new_text);
        g_free(new_text);
    }
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Calculator");
    gtk_window_set_default_size(GTK_WINDOW(window), 250, 300);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 2);
    entry = gtk_entry_new();
    gtk_box_pack_start(GTK_BOX(vbox), entry, FALSE, FALSE, 2);

    const gchar *buttons[4][4] = {
        {"7", "8", "9", "/"},
        {"4", "5", "6", "*"},
        {"1", "2", "3", "-"},
        {"C", "0", "=", "+"}
    };

    for (int i = 0; i < 4; i++) {
        GtkWidget *hbox = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 2);
        for (int j = 0; j < 4; j++) {
            GtkWidget *button = gtk_button_new_with_label(buttons[i][j]);
            g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);
            gtk_box_pack_start(GTK_BOX(hbox), button, TRUE, TRUE, 2);
        }
        gtk_box_pack_start(GTK_BOX(vbox), hbox, TRUE, TRUE, 2);
    }

    gtk_container_add(GTK_CONTAINER(window), vbox);
    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}

